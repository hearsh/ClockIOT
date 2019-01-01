import make_wtf
import random

txtfn = "English_v3.txt"
times = open(txtfn).read().splitlines()

sentences = [l[5:].split() for l in times]


def index_sentences(letters, sentences, printit=False):
    '''
    return the sentences coded with two numbers for each word
    or [] if impossible with the provided letters
    
    each sentence is a list containing an ordered pair for each word [start, length]
    '''
    num_sents = []
    for s in sentences:
        i = 0
        num_sents.append([])
        for w in s:
            ii = letters.find(w, i)
            if ii >= 0:
                i = ii
                num_sents[-1].append((i, len(w)))
                assert letters[i:i+len(w)] == w
                i += len(w)
            else:
                if printit:
                    print('    sentence:', ' '.join(s))
                    print('        word:', w)
                    print('           i:', i)
                    print(' letters[i:]:', letters[i:])
                    print('index failed')
                return False
    return num_sents

def validate(letters, sentences, printit=False):
    '''
    Return True if letters can be used to make each and every sentence in sentences without regard to spaces between words.
    '''
    return not not index_sentences(letters, sentences, printit)

assert not validate('seta', [['ta', 'se']])
assert validate('tase', [['ta', 'se']])
if False:
################################################################################
    order = 'it is half twenty - quarter ten five to past eleven ten nine eight seven six five four three two one in the evening morning twelve at in the afternoon midnight'
    assert validate(order, sentences)
    order = 'it is half twenty - quarter ten five to past eleven ten nine eight seven six five four three two one twelve in the evening morning at afternoon midnight'
    assert validate(order, sentences, True)
    # here
################################################################################


order = []
for l in sentences:
    words = l
    i = 0
    for word in words: ## see if we need to add word to ordred words
        if word not in order[i:]:
            order.insert(i + 1, word)
            i = i + 1
        else:
            i = order.index(word, i)
        if False:
            print(word)
            print(' '.join(words))
            print(', '.join(order))
            print()
# order = 'it is half twenty - quarter ten five to past eleven ten nine eight seven six five four three two one twelve in the evening morning at in the afternoon midnight'.split()
##### TEST
letters = open(txtfn).read()
letters = ''.join(letters.splitlines())

index = index_sentences(letters, sentences) 
make_wtf.make_wtf(letters, sentences, index, filename='junk.wtf')
here
##### TEST

def prune(order, sentences, printit=False):
    order_cp = order[:]
    i = 0
    if printit:
        print('pruning redundant words')
        print(len(order_cp))
        print(' '.join(order_cp))
    while i < len(order_cp):
        w = order_cp[i]
        order_cp = order_cp[:i] + order_cp[i+1:]

        ## see if later word can replace earlier word and still be valid
        if validate(''.join(order_cp), sentences, printit=False):
            pass
        else: ## not valid, put word back wher it was
            order_cp.insert(i, w)
            i += 1
    return order_cp
order_cp = prune(order, sentences, printit=True)
print('before pruning: n_word=%d, n_letter=%d' % (len(order), sum([len(w) for w in order])))
print(' after pruning: n_word=%d, n_letter=%d' % (len(order_cp), sum([len(w) for w in order_cp])))
porder = order_cp
assert validate(''.join(porder), sentences)

def crunch(order, sentences):
    '''
    return a single string with redundant letters adjscent words removed.
    '''
    letters = ''
    for i, w in enumerate(order):
        n = overlap(letters, w)
        test_letters = letters + w[n:] ## handle line wraps and spaces
        if validate(test_letters + ' '.join(order[i + 1:]), sentences):
            letters = test_letters
        else:
            letters = letters + w
    return letters

def raw_score(order, sentences):
    '''
    return 1,000,000 if order is not valid, else string length
    does not consider line wraps or spaces
    '''
    out = 1e6
    if validate(''.join(order), sentences):
        letters = crunch(order, sentences)
        if validate(letters, sentences):
            out = len(letters)
    return out
## have a valid solution  Try re-arranging to make smaller

def overlap(s1, s2):
    '''
    compute number of chars that overlap between tail of s1 and start of s2
    '''
    n = min([len(s1), len(s2)])
    out = 0
    for i in range(1, n + 1):
        if s1[-i:] == s2[:i]:
            out = i
    return out
def overlap__test__():
    assert overlap("justin", "in case") == 2
    assert overlap("justin", "boston") == 0
    assert overlap("justin", "justin") == 6
overlap__test__() 

def add_space(letters, sentences):
    '''
    return sting including spaces where needed
    '''
    # assert validate(letters, sentences, True), 'Must start wtih a valid lettering: "%s"' % letters
    ## 1. add space between words in a sentence
    for s in sentences:
        index = 0
        for k, w in enumerate(s):
            i = letters.find(w, index)
            if i < 0: ### need a space
                pass # WTF?
            assert i >= 0, '"%s" not in "%s"' % (w, letters[index:])
            if validate(letters[i + len(w) + 1:], [s[k + 1:]]):
                ## no problem
                pass
            else:
                ## need a space
                letters = letters[:i + len(w)] + ' ' + letters[i + len(w):]
            index = i + len(w) + 1
    ## 2. add space to avoid line wraps in a word
    number_sentences = index_sentences(letters, sentences)
    words = set()
    for ns in number_sentences:
        for w in ns:
            words.add(w)
    words = list(words)
    words.sort()
    orig_words = words[:]

    n = len(words)
    for i in range(len(words)):
        start, l = words[i]
        if start%16 == 1: ## see if a space starts this line and remove it
            if letters[orig_words[i][0] - 1] == ' ':
                for j in range(i, n):
                    words[j] = words[j][0] - 1, words[j][1]
            
        if start % 16 + l > 16: ## word wraps a line boundary
            # add space to make line wrap to all words that begin at start or greater
            ##         = (30 % 16 + 5) - 16
            ##         = (14 + 5) - 16
            ##         = 19 - 16
            ##         = 3 spaces
            ### check to see if we have a space prior to word
            n_letter = l - ((start % 16 + l) - 16) # letters that need to be carried over to next line
            assert n_letter < 16
            if letters[orig_words[i][0] - 1] == ' ':
                pass
            for j in range(i, n):
                words[j] = words[j][0] + n_letter, words[j][1]
    out = ''
    for i in range(len(words)):
        w = letters[orig_words[i][0]:orig_words[i][0] + orig_words[i][1]]
        word = words[i]
        if word[0] > len(out):
            out = out + ' ' * (word[0] - len(out)) + w
        else:
            out = out[:word[0]] + w + out[word[0] + len(w):]
    return out

def final_score(order):
    '''
    return length of final string if less than 128 chars else 1000 + string length
    '''
    letters = crunch(order, sentences)
    raw = raw_score(letters, sentences)
    if raw > 1000:
        out = raw
    else:
        out = len(add_space(letters, sentences))
        if out <= 128:
            out = out
        else:
            out += 1000
    return out

def layout(letters, ignore=False):
    '''
    break into 16 char rows separated by newlines.
    '''
    assert ignore or len(letters) < 129
    out = []
    for i in range(len(letters) // 16 + 1):
        out.append(letters[i * 16: (i + 1) * 16])
    return '\n'.join(out)

print(' '.join(porder))
print(raw_score(porder, sentences))
print(final_score(porder))
N = 100
n = len(porder)
orig = porder[:]
best_score = final_score(porder)
best_order = porder
init_score = best_score
print(' '.join(porder))
print(crunch(porder, sentences))
print(layout(add_space(crunch(porder, sentences), sentences), ignore=True))
assert validate(add_space(crunch(porder, sentences), sentences), sentences)
best_layout = layout(add_space(crunch(porder, sentences), sentences), ignore=True)
solutions = set()
for k in range(50):
    print(k)
    min_score = final_score(porder)
    porder = orig[:]
    for i in range(N):
        order = prune(porder[:], sentences)
        k = random.randrange(len(order))
        j = random.randrange(len(order))
        w = order.pop(k)
        if not validate(''.join(order), sentences):
            order.insert(j, w)
        this_score = final_score(order)
        if this_score < min_score:
            min_score = this_score
            porder = order
            if this_score < best_score:
                best_score = this_score 
                best_order = order[:]
                if this_score < 129:
                    best_layout = layout(add_space(crunch(best_order, sentences), sentences))
                    if best_layout not in solutions:
                        solutions.add(best_layout)
                        print(best_layout)
                        print()
            print(k, i, init_score, this_score, best_score, len(best_order))
print('********************************************************************************')
print('********************************************************************************')
print()
for soln in solutions:
    print(soln)
    print()
print(len(solutions), 'solution%s!' % ['', 's'][len(solutions) != 1], best_score)


print()
print()

assert validate(best_layout, sentences)
                
