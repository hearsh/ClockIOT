#ifndef FRENCH_V1_H
#define FRENCH_V1_H
/*
 * ClockTHREEjr faceplate file.
 * Autogenerated from French_v1.wtf
 * 
 *      Author: Nick
 *     Licence: http://creativecommons.org/licenses/by/3.0/
 * Description:
 *    This is an example spreadsheet implementing the WyoLum Text Format.   *    See http://wyolum.com/?p=758 for more information. *     *    This format is used to define the letter array and sequencing for ClockTHREEjr but could easily be addapted to any sequencing problem.
 * 
 */
static uint8_t french_v1_words[] = {
     32, // # words
      0,  0,  2,       3,  0,  3,      12,  2,  3,      11,  6,  4,     // words
     11,  6,  5,       0,  5,  2,       6,  5,  5,       0,  6,  5,     // words
      5,  6,  1,       9,  1,  4,       4,  4,  6,      11,  4,  5,     // words
      3,  5,  2,       7,  0,  3,       0,  1,  4,       4,  1,  5,     // words
     10,  0,  6,       6,  6,  4,      13,  1,  3,       0,  2,  4,     // words
      4,  2,  4,       8,  2,  4,      11,  5,  3,       0,  3,  4,     // words
     10,  3,  5,      10,  3,  6,       0,  7,  2,       8,  7,  2,     // words
      3,  7,  5,      11,  7,  4,       0,  4,  4,       0,  0,  0,     // words
};

static uint8_t french_v1_displays[] = {
   4.0, // number of bytes per state
//                     m             q          h     
//    vq d        t   mi             u       m  eh    
//    iu ed       rd  onc     o nhs ca     msa  ue    
//    na mede     oeu iui     ndeuesit     iot  ru    
//    greimisi    iunlnin     ziuipinr     diidder    
//    ttteixtl    sxeestq-    exfttxqe     irnuuse    
    0b00000011, 0b00000100, 0b00000000, 0b00000000, 
    0b00000011, 0b00000100, 0b00000010, 0b00000000, 
    0b00000011, 0b00000100, 0b01000000, 0b00000000, 
    0b01100011, 0b00000100, 0b00000000, 0b00000000, 
    0b10000011, 0b00000100, 0b00000000, 0b00000000, 
    0b10000011, 0b00000101, 0b00000010, 0b00000000, 
    0b00101011, 0b00000100, 0b00000000, 0b00000000, 
    0b10000011, 0b00101001, 0b00000010, 0b00010101, 
    0b10000011, 0b00101000, 0b00000000, 0b00010101, 
    0b01000011, 0b00111000, 0b00000000, 0b00010101, 
    0b00000011, 0b00101000, 0b01000000, 0b00010101, 
    0b00000011, 0b00101000, 0b00000010, 0b00010101, 
    0b00000011, 0b00100000, 0b00000000, 0b00010101, 
    0b00000011, 0b00100000, 0b00000010, 0b00010101, 
    0b00000011, 0b00100000, 0b01000000, 0b00010101, 
    0b01100011, 0b00100000, 0b00000000, 0b00010101, 
    0b10000011, 0b00100000, 0b00000000, 0b00010101, 
    0b10000011, 0b00100001, 0b00000010, 0b00010101, 
    0b00110011, 0b00100000, 0b00000000, 0b00010101, 
    0b10000011, 0b01001001, 0b00000010, 0b00010110, 
    0b10000011, 0b01001000, 0b00000000, 0b00010110, 
    0b01000011, 0b01011000, 0b00000000, 0b00010110, 
    0b00000011, 0b01001000, 0b01000000, 0b00010110, 
    0b00000011, 0b01001000, 0b00000010, 0b00010110, 
    0b00000011, 0b01000000, 0b00000000, 0b00010110, 
    0b00000011, 0b01000000, 0b00000010, 0b00010110, 
    0b00000011, 0b01000000, 0b01000000, 0b00010110, 
    0b01100011, 0b01000000, 0b00000000, 0b00010110, 
    0b10000011, 0b01000000, 0b00000000, 0b00010110, 
    0b10000011, 0b01000001, 0b00000010, 0b00010110, 
    0b00110011, 0b01000000, 0b00000000, 0b00010110, 
    0b10000011, 0b10001001, 0b00000010, 0b00010110, 
    0b10000011, 0b10001000, 0b00000000, 0b00010110, 
    0b01000011, 0b10011000, 0b00000000, 0b00010110, 
    0b00000011, 0b10001000, 0b01000000, 0b00010110, 
    0b00000011, 0b10001000, 0b00000010, 0b00010110, 
    0b00000011, 0b10000000, 0b00000000, 0b00010110, 
    0b00000011, 0b10000000, 0b00000010, 0b00010110, 
    0b00000011, 0b10000000, 0b01000000, 0b00010110, 
    0b01100011, 0b10000000, 0b00000000, 0b00010110, 
    0b10000011, 0b10000000, 0b00000000, 0b00010110, 
    0b10000011, 0b10000001, 0b00000010, 0b00010110, 
    0b00110011, 0b10000000, 0b00000000, 0b00010110, 
    0b10000011, 0b00001001, 0b00000011, 0b00010110, 
    0b10000011, 0b00001000, 0b00000001, 0b00010110, 
    0b01000011, 0b00011000, 0b00000001, 0b00010110, 
    0b00000011, 0b00001000, 0b01000001, 0b00010110, 
    0b00000011, 0b00001000, 0b00000011, 0b00010110, 
    0b00000011, 0b00000000, 0b00000001, 0b00010110, 
    0b00000011, 0b00000000, 0b00000011, 0b00010110, 
    0b00000011, 0b00000000, 0b01000001, 0b00010110, 
    0b01100011, 0b00000000, 0b00000001, 0b00010110, 
    0b10000011, 0b00000000, 0b00000001, 0b00010110, 
    0b10000011, 0b00000001, 0b00000011, 0b00010110, 
    0b00110011, 0b00000000, 0b00000001, 0b00010110, 
    0b10000011, 0b00001011, 0b00000010, 0b00010110, 
    0b10000011, 0b00001010, 0b00000000, 0b00010110, 
    0b01000011, 0b00011010, 0b00000000, 0b00010110, 
    0b00000011, 0b00001010, 0b01000000, 0b00010110, 
    0b00000011, 0b00001010, 0b00000010, 0b00010110, 
    0b00000011, 0b00000010, 0b00000000, 0b00010110, 
    0b00000011, 0b00000010, 0b00000010, 0b00010110, 
    0b00000011, 0b00000010, 0b01000000, 0b00010110, 
    0b01100011, 0b00000010, 0b00000000, 0b00010110, 
    0b10000011, 0b00000010, 0b00000000, 0b00010110, 
    0b10000011, 0b00000011, 0b00000010, 0b00010110, 
    0b00110011, 0b00000010, 0b00000000, 0b00010110, 
    0b10000011, 0b00001001, 0b00000110, 0b00010110, 
    0b10000011, 0b00001000, 0b00000100, 0b00010110, 
    0b01000011, 0b00011000, 0b00000100, 0b00010110, 
    0b00000011, 0b00001000, 0b01000100, 0b00010110, 
    0b00000011, 0b00001000, 0b00000110, 0b00010110, 
    0b00000011, 0b00000000, 0b00000100, 0b00010110, 
    0b00000011, 0b00000000, 0b00000110, 0b00010110, 
    0b00000011, 0b00000000, 0b01000100, 0b00010110, 
    0b01100011, 0b00000000, 0b00000100, 0b00010110, 
    0b10000011, 0b00000000, 0b00000100, 0b00010110, 
    0b10000011, 0b00000001, 0b00000110, 0b00010110, 
    0b00110011, 0b00000000, 0b00000100, 0b00010110, 
    0b10000011, 0b00001001, 0b00001010, 0b00010110, 
    0b10000011, 0b00001000, 0b00001000, 0b00010110, 
    0b01000011, 0b00011000, 0b00001000, 0b00010110, 
    0b00000011, 0b00001000, 0b01001000, 0b00010110, 
    0b00000011, 0b00001000, 0b00001010, 0b00010110, 
    0b00000011, 0b00000000, 0b00001000, 0b00010110, 
    0b00000011, 0b00000000, 0b00001010, 0b00010110, 
    0b00000011, 0b00000000, 0b01001000, 0b00010110, 
    0b01100011, 0b00000000, 0b00001000, 0b00010110, 
    0b10000011, 0b00000000, 0b00001000, 0b00010110, 
    0b10000011, 0b00000001, 0b00001010, 0b00010110, 
    0b00110011, 0b00000000, 0b00001000, 0b00010110, 
    0b10000011, 0b00001001, 0b00010010, 0b00010110, 
    0b10000011, 0b00001000, 0b00010000, 0b00010110, 
    0b01000011, 0b00011000, 0b00010000, 0b00010110, 
    0b00000011, 0b00001000, 0b01010000, 0b00010110, 
    0b00000011, 0b00001000, 0b00010010, 0b00010110, 
    0b00000011, 0b00000000, 0b00010000, 0b00010110, 
    0b00000011, 0b00000000, 0b00010010, 0b00010110, 
    0b00000011, 0b00000000, 0b01010000, 0b00010110, 
    0b01100011, 0b00000000, 0b00010000, 0b00010110, 
    0b10000011, 0b00000000, 0b00010000, 0b00010110, 
    0b10000011, 0b00000001, 0b00010010, 0b00010110, 
    0b00110011, 0b00000000, 0b00010000, 0b00010110, 
    0b10000011, 0b00001001, 0b00100010, 0b00010110, 
    0b10000011, 0b00001000, 0b00100000, 0b00010110, 
    0b01000011, 0b00011000, 0b00100000, 0b00010110, 
    0b00000011, 0b00001000, 0b01100000, 0b00010110, 
    0b00000011, 0b00001000, 0b00100010, 0b00010110, 
    0b00000011, 0b00000000, 0b00100000, 0b00010110, 
    0b00000011, 0b00000000, 0b00100010, 0b00010110, 
    0b00000011, 0b00000000, 0b01100000, 0b00010110, 
    0b01100011, 0b00000000, 0b00100000, 0b00010110, 
    0b10000011, 0b00000000, 0b00100000, 0b00010110, 
    0b10000011, 0b00000001, 0b00100010, 0b00010110, 
    0b00110011, 0b00000000, 0b00100000, 0b00010110, 
    0b10000111, 0b00001001, 0b00000010, 0b00010110, 
    0b10000111, 0b00001000, 0b00000000, 0b00010110, 
    0b01000111, 0b00011000, 0b00000000, 0b00010110, 
    0b00000111, 0b00001000, 0b01000000, 0b00010110, 
    0b00000111, 0b00001000, 0b00000010, 0b00010110, 
    0b00000111, 0b00000000, 0b00000000, 0b00010110, 
    0b00000111, 0b00000000, 0b00000010, 0b00010110, 
    0b00000111, 0b00000000, 0b01000000, 0b00010110, 
    0b01100111, 0b00000000, 0b00000000, 0b00010110, 
    0b10000111, 0b00000000, 0b00000000, 0b00010110, 
    0b10000111, 0b00000001, 0b00000010, 0b00010110, 
    0b00110111, 0b00000000, 0b00000000, 0b00010110, 
    0b10000011, 0b00001001, 0b10000010, 0b00010110, 
    0b10000011, 0b00001000, 0b10000000, 0b00010110, 
    0b01000011, 0b00011000, 0b10000000, 0b00010110, 
    0b00000011, 0b00001000, 0b11000000, 0b00010110, 
    0b00000011, 0b00001000, 0b10000010, 0b00010110, 
    0b00000011, 0b00000000, 0b10000000, 0b00010110, 
    0b00000011, 0b00000000, 0b10000010, 0b00010110, 
    0b00000011, 0b00000000, 0b11000000, 0b00010110, 
    0b01100011, 0b00000000, 0b10000000, 0b00010110, 
    0b10000011, 0b00000000, 0b10000000, 0b00010110, 
    0b10000011, 0b00000001, 0b10000010, 0b00010110, 
    0b00110011, 0b00000000, 0b10000000, 0b00010110, 
    0b10000011, 0b00001001, 0b00000010, 0b01000000, 
    0b10000011, 0b00001000, 0b00000000, 0b01000000, 
    0b01000011, 0b00011000, 0b00000000, 0b01000000, 
    0b00000011, 0b00001000, 0b01000000, 0b01000000, 
    0b00000011, 0b00001000, 0b00000010, 0b01000000, 
    0b00000011, 0b00000000, 0b00000000, 0b01000000, 
    0b00000011, 0b00000000, 0b00000010, 0b01000000, 
    0b00000011, 0b00000000, 0b01000000, 0b01000000, 
    0b01100011, 0b00000000, 0b00000000, 0b01000000, 
    0b10000011, 0b00000000, 0b00000000, 0b01000000, 
    0b10000011, 0b00000001, 0b00000010, 0b01000000, 
    0b00101011, 0b00000000, 0b00000000, 0b01000000, 
    0b10000011, 0b00101001, 0b00000010, 0b00000001, 
    0b10000011, 0b00101000, 0b00000000, 0b00000001, 
    0b01000011, 0b00111000, 0b00000000, 0b00000001, 
    0b00000011, 0b00101000, 0b01000000, 0b00000001, 
    0b00000011, 0b00101000, 0b00000010, 0b00000001, 
    0b00000011, 0b00100000, 0b00000000, 0b00000001, 
    0b00000011, 0b00100000, 0b00000010, 0b00000001, 
    0b00000011, 0b00100000, 0b01000000, 0b00000001, 
    0b01100011, 0b00100000, 0b00000000, 0b00000001, 
    0b10000011, 0b00100000, 0b00000000, 0b00000001, 
    0b10000011, 0b00100001, 0b00000010, 0b00000001, 
    0b00110011, 0b00100000, 0b00000000, 0b00000001, 
    0b10000011, 0b01001001, 0b00000010, 0b00000010, 
    0b10000011, 0b01001000, 0b00000000, 0b00000010, 
    0b01000011, 0b01011000, 0b00000000, 0b00000010, 
    0b00000011, 0b01001000, 0b01000000, 0b00000010, 
    0b00000011, 0b01001000, 0b00000010, 0b00000010, 
    0b00000011, 0b01000000, 0b00000000, 0b00000010, 
    0b00000011, 0b01000000, 0b00000010, 0b00000010, 
    0b00000011, 0b01000000, 0b01000000, 0b00000010, 
    0b01100011, 0b01000000, 0b00000000, 0b00000010, 
    0b10000011, 0b01000000, 0b00000000, 0b00000010, 
    0b10000011, 0b01000001, 0b00000010, 0b00000010, 
    0b00110011, 0b01000000, 0b00000000, 0b00000010, 
    0b10000011, 0b10001001, 0b00000010, 0b00000010, 
    0b10000011, 0b10001000, 0b00000000, 0b00000010, 
    0b01000011, 0b10011000, 0b00000000, 0b00000010, 
    0b00000011, 0b10001000, 0b01000000, 0b00000010, 
    0b00000011, 0b10001000, 0b00000010, 0b00000010, 
    0b00000011, 0b10000000, 0b00000000, 0b00000010, 
    0b00000011, 0b10000000, 0b00000010, 0b00000010, 
    0b00000011, 0b10000000, 0b01000000, 0b00000010, 
    0b01100011, 0b10000000, 0b00000000, 0b00000010, 
    0b10000011, 0b10000000, 0b00000000, 0b00000010, 
    0b10000011, 0b10000001, 0b00000010, 0b00000010, 
    0b00110011, 0b10000000, 0b00000000, 0b00000010, 
    0b10000011, 0b00001001, 0b00000011, 0b00000010, 
    0b10000011, 0b00001000, 0b00000001, 0b00000010, 
    0b01000011, 0b00011000, 0b00000001, 0b00000010, 
    0b00000011, 0b00001000, 0b01000001, 0b00000010, 
    0b00000011, 0b00001000, 0b00000011, 0b00000010, 
    0b00000011, 0b00000000, 0b00000001, 0b00000010, 
    0b00000011, 0b00000000, 0b00000011, 0b00000010, 
    0b00000011, 0b00000000, 0b01000001, 0b00000010, 
    0b01100011, 0b00000000, 0b00000001, 0b00000010, 
    0b10000011, 0b00000000, 0b00000001, 0b00000010, 
    0b10000011, 0b00000001, 0b00000011, 0b00000010, 
    0b00110011, 0b00000000, 0b00000001, 0b00000010, 
    0b10000011, 0b00001011, 0b00000010, 0b00000010, 
    0b10000011, 0b00001010, 0b00000000, 0b00000010, 
    0b01000011, 0b00011010, 0b00000000, 0b00000010, 
    0b00000011, 0b00001010, 0b01000000, 0b00000010, 
    0b00000011, 0b00001010, 0b00000010, 0b00000010, 
    0b00000011, 0b00000010, 0b00000000, 0b00101010, 
    0b00000011, 0b00000010, 0b00000010, 0b00101010, 
    0b00000011, 0b00000010, 0b01000000, 0b00101010, 
    0b01100011, 0b00000010, 0b00000000, 0b00101010, 
    0b10000011, 0b00000010, 0b00000000, 0b00101010, 
    0b10000011, 0b00000011, 0b00000010, 0b00101010, 
    0b00110011, 0b00000010, 0b00000000, 0b00101010, 
    0b10000011, 0b00001001, 0b00000110, 0b00101010, 
    0b10000011, 0b00001000, 0b00000100, 0b00101010, 
    0b01000011, 0b00011000, 0b00000100, 0b00101010, 
    0b00000011, 0b00001000, 0b01000100, 0b00101010, 
    0b00000011, 0b00001000, 0b00000110, 0b00101010, 
    0b00000011, 0b00000000, 0b00000100, 0b00101010, 
    0b00000011, 0b00000000, 0b00000110, 0b00101010, 
    0b00000011, 0b00000000, 0b01000100, 0b00101010, 
    0b01100011, 0b00000000, 0b00000100, 0b00101010, 
    0b10000011, 0b00000000, 0b00000100, 0b00101010, 
    0b10000011, 0b00000001, 0b00000110, 0b00101010, 
    0b00110011, 0b00000000, 0b00000100, 0b00101010, 
    0b10000011, 0b00001001, 0b00001010, 0b00101010, 
    0b10000011, 0b00001000, 0b00001000, 0b00101010, 
    0b01000011, 0b00011000, 0b00001000, 0b00101010, 
    0b00000011, 0b00001000, 0b01001000, 0b00101010, 
    0b00000011, 0b00001000, 0b00001010, 0b00101010, 
    0b00000011, 0b00000000, 0b00001000, 0b00101010, 
    0b00000011, 0b00000000, 0b00001010, 0b00101010, 
    0b00000011, 0b00000000, 0b01001000, 0b00101010, 
    0b01100011, 0b00000000, 0b00001000, 0b00101010, 
    0b10000011, 0b00000000, 0b00001000, 0b00101010, 
    0b10000011, 0b00000001, 0b00001010, 0b00101010, 
    0b00110011, 0b00000000, 0b00001000, 0b00101010, 
    0b10000011, 0b00001001, 0b00010010, 0b00101010, 
    0b10000011, 0b00001000, 0b00010000, 0b00101010, 
    0b01000011, 0b00011000, 0b00010000, 0b00101010, 
    0b00000011, 0b00001000, 0b01010000, 0b00101010, 
    0b00000011, 0b00001000, 0b00010010, 0b00101010, 
    0b00000011, 0b00000000, 0b00010000, 0b00101010, 
    0b00000011, 0b00000000, 0b00010010, 0b00101010, 
    0b00000011, 0b00000000, 0b01010000, 0b00101010, 
    0b01100011, 0b00000000, 0b00010000, 0b00101010, 
    0b10000011, 0b00000000, 0b00010000, 0b00101010, 
    0b10000011, 0b00000001, 0b00010010, 0b00101010, 
    0b00110011, 0b00000000, 0b00010000, 0b00101010, 
    0b10000011, 0b00001001, 0b00100010, 0b00101010, 
    0b10000011, 0b00001000, 0b00100000, 0b00101010, 
    0b01000011, 0b00011000, 0b00100000, 0b00101010, 
    0b00000011, 0b00001000, 0b01100000, 0b00101010, 
    0b00000011, 0b00001000, 0b00100010, 0b00101010, 
    0b00000011, 0b00000000, 0b00100000, 0b00101010, 
    0b00000011, 0b00000000, 0b00100010, 0b00101010, 
    0b00000011, 0b00000000, 0b01100000, 0b00101010, 
    0b01100011, 0b00000000, 0b00100000, 0b00101010, 
    0b10000011, 0b00000000, 0b00100000, 0b00101010, 
    0b10000011, 0b00000001, 0b00100010, 0b00101010, 
    0b00110011, 0b00000000, 0b00100000, 0b00101010, 
    0b10000111, 0b00001001, 0b00000010, 0b00101010, 
    0b10000111, 0b00001000, 0b00000000, 0b00101010, 
    0b01000111, 0b00011000, 0b00000000, 0b00101010, 
    0b00000111, 0b00001000, 0b01000000, 0b00101010, 
    0b00000111, 0b00001000, 0b00000010, 0b00101010, 
    0b00000111, 0b00000000, 0b00000000, 0b00101010, 
    0b00000111, 0b00000000, 0b00000010, 0b00101010, 
    0b00000111, 0b00000000, 0b01000000, 0b00101010, 
    0b01100111, 0b00000000, 0b00000000, 0b00101010, 
    0b10000111, 0b00000000, 0b00000000, 0b00101010, 
    0b10000111, 0b00000001, 0b00000010, 0b00101010, 
    0b00110111, 0b00000000, 0b00000000, 0b00101010, 
    0b10000011, 0b00001001, 0b10000010, 0b00101010, 
    0b10000011, 0b00001000, 0b10000000, 0b00101010, 
    0b01000011, 0b00011000, 0b10000000, 0b00101010, 
    0b00000011, 0b00001000, 0b11000000, 0b00101010, 
    0b00000011, 0b00001000, 0b10000010, 0b00101010, 
    0b00000011, 0b00000000, 0b10000000, 0b00101010, 
    0b00000011, 0b00000000, 0b10000010, 0b00101010, 
    0b00000011, 0b00000000, 0b11000000, 0b00101010, 
    0b01100011, 0b00000000, 0b10000000, 0b00101010, 
    0b10000011, 0b00000000, 0b10000000, 0b00101010, 
    0b10000011, 0b00000001, 0b10000010, 0b00101010, 
    0b00110011, 0b00000000, 0b10000000, 0b00101010, 
    0b10000011, 0b00001101, 0b00000010, 0b00000000, 
    0b10000011, 0b00001100, 0b00000000, 0b00000000, 
    0b01000011, 0b00011100, 0b00000000, 0b00000000, 
    0b00000011, 0b00001100, 0b01000000, 0b00000000, 
    0b00000011, 0b00001100, 0b00000010, 0b00000000, 
    };
// Minutes hack constants
static uint32_t french_v1_minute_leds[] = {
  // n_minute_state, n_minute_led,        led0, led2,           led3,           led4...
                  0,            0, 
};
static uint32_t french_v1_minutes_hack[] = {
};
static Faceplate french_v1(french_v1_words, french_v1_displays, french_v1_minute_leds, french_v1_minutes_hack, "French_V1");
#endif