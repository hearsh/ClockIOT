EESchema Schematic File Version 4
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "USB-C Breakout Board, Pololu"
Date "2018-10-19"
Rev "1"
Comp "Wyolum"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L USB-C_pololu:USB_C_Receptacle P1
U 1 1 5BC95C71
P 3500 3500
F 0 "P1" H 3150 5050 50  0000 C CNN
F 1 "USB_C_Receptacle" H 3450 4950 50  0000 C CNN
F 2 "USB-C_fp:USB_C_Receptacle_Amphenol_12401610E4-2A" H 3650 3500 50  0001 C CNN
F 3 "http://www.usb.org/developers/docs/usb_31_033017.zip" H 3650 3500 50  0001 C CNN
	1    3500 3500
	1    0    0    -1  
$EndComp
$Comp
L USB-C_pololu:R R1
U 1 1 5BC95F36
P 4800 5200
F 0 "R1" H 4850 5275 50  0000 L CNN
F 1 "5k11" V 4800 5100 50  0000 L CNN
F 2 "USB-C_fp:R_0805" V 4730 5200 50  0001 C CNN
F 3 "" H 4800 5200 50  0001 C CNN
	1    4800 5200
	1    0    0    -1  
$EndComp
$Comp
L USB-C_pololu:R R2
U 1 1 5BC95F98
P 5100 5200
F 0 "R2" H 5150 5275 50  0000 L CNN
F 1 "5k11" V 5100 5100 50  0000 L CNN
F 2 "USB-C_fp:R_0805" V 5030 5200 50  0001 C CNN
F 3 "" H 5100 5200 50  0001 C CNN
	1    5100 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 2800 4800 2800
Wire Wire Line
	4800 2800 4800 5050
Wire Wire Line
	5100 5050 5100 2700
Wire Wire Line
	5100 2700 4100 2700
Wire Wire Line
	4100 2500 4175 2500
Wire Wire Line
	4175 2500 4175 2400
Wire Wire Line
	4175 2200 4100 2200
Wire Wire Line
	4100 2400 4175 2400
Connection ~ 4175 2400
Wire Wire Line
	4100 3000 4175 3000
Wire Wire Line
	4175 3000 4175 3100
Wire Wire Line
	4175 3100 4100 3100
Wire Wire Line
	4100 3200 4175 3200
Wire Wire Line
	4175 3200 4175 3300
Wire Wire Line
	4175 3300 4100 3300
NoConn ~ 4100 3500
NoConn ~ 4100 3600
NoConn ~ 4100 3800
NoConn ~ 4100 3900
NoConn ~ 4100 4100
NoConn ~ 4100 4200
NoConn ~ 4100 4400
NoConn ~ 4100 4500
Connection ~ 4175 3200
Connection ~ 4175 2200
Wire Wire Line
	3200 5100 3200 5600
Wire Wire Line
	3200 5600 3300 5600
Wire Wire Line
	3500 5100 3500 5600
Connection ~ 3500 5600
Wire Wire Line
	3400 5100 3400 5600
Connection ~ 3400 5600
Wire Wire Line
	3400 5600 3500 5600
Wire Wire Line
	3300 5100 3300 5600
Connection ~ 3300 5600
Wire Wire Line
	3300 5600 3400 5600
Wire Wire Line
	3200 5600 3200 5700
Connection ~ 3200 5600
$Comp
L USB-C_pololu:GND #PWR01
U 1 1 5BC98843
P 3200 5700
F 0 "#PWR01" H 3200 5450 50  0001 C CNN
F 1 "GND" H 3250 5500 50  0000 C CNN
F 2 "" H 3200 5700 50  0001 C CNN
F 3 "" H 3200 5700 50  0001 C CNN
	1    3200 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 5350 5100 5600
Wire Wire Line
	5100 5600 4800 5600
Wire Wire Line
	4800 5350 4800 5600
Connection ~ 4800 5600
Connection ~ 5100 5600
Connection ~ 5100 2700
Connection ~ 4800 2800
$Comp
L USB-C_pololu:Conn_01x06_Female J2
U 1 1 5BC9ABC0
P 7250 3825
F 0 "J2" H 7325 3850 50  0000 L CNN
F 1 "IO" H 7325 3750 50  0000 L CNN
F 2 "USB-C_fp:Socket_Strip_Straight_1x06" H 7250 3825 50  0001 C CNN
F 3 "~" H 7250 3825 50  0001 C CNN
	1    7250 3825
	1    0    0    -1  
$EndComp
$Comp
L USB-C_pololu:Conn_01x02_Female J1
U 1 1 5BC9AC71
P 7250 3425
F 0 "J1" H 7325 3450 50  0000 L CNN
F 1 "VBUS" H 7325 3350 50  0000 L CNN
F 2 "USB-C_fp:Socket_Strip_Straight_1x02" H 7250 3425 50  0001 C CNN
F 3 "~" H 7250 3425 50  0001 C CNN
	1    7250 3425
	1    0    0    -1  
$EndComp
$Comp
L USB-C_pololu:Conn_01x02_Female J3
U 1 1 5BC9AD3C
P 7250 4225
F 0 "J3" H 7325 4250 50  0000 L CNN
F 1 "GND" H 7325 4150 50  0000 L CNN
F 2 "USB-C_fp:Socket_Strip_Straight_1x02_SQ" H 7250 4225 50  0001 C CNN
F 3 "~" H 7250 4225 50  0001 C CNN
	1    7250 4225
	1    0    0    -1  
$EndComp
Wire Wire Line
	7050 3525 6950 3525
Wire Wire Line
	6950 3525 6950 3425
Wire Wire Line
	6950 3425 7050 3425
Connection ~ 6950 3425
Wire Wire Line
	7050 4225 6950 4225
Wire Wire Line
	6950 4225 6950 4325
Wire Wire Line
	6950 4325 7050 4325
Wire Wire Line
	5100 5600 6350 5600
Connection ~ 6950 4325
Wire Wire Line
	7050 3625 6250 3625
Wire Wire Line
	6250 3625 6250 3100
Wire Wire Line
	7050 3725 6150 3725
Wire Wire Line
	6150 3725 6150 3200
Wire Wire Line
	4175 3200 6150 3200
Wire Wire Line
	7050 3825 6050 3825
Wire Wire Line
	6050 3825 6050 2700
Wire Wire Line
	5100 2700 6050 2700
Wire Wire Line
	7050 3925 5950 3925
Wire Wire Line
	5950 3925 5950 2800
Wire Wire Line
	4800 2800 5950 2800
Wire Wire Line
	7050 4025 5950 4025
Wire Wire Line
	5950 4025 5950 4700
Wire Wire Line
	4100 4700 5950 4700
Wire Wire Line
	7050 4125 6050 4125
Wire Wire Line
	6050 4125 6050 4800
Wire Wire Line
	4100 4800 6050 4800
Wire Wire Line
	4175 3100 6250 3100
Connection ~ 4175 3100
Wire Wire Line
	6950 3425 6350 3425
Wire Wire Line
	6350 3425 6350 2200
Wire Wire Line
	4175 2200 6350 2200
Wire Wire Line
	6950 4325 6350 4325
Wire Wire Line
	6350 4325 6350 5600
Text Label 6500 3425 0    50   ~ 0
VBUS
Text Label 6500 3625 0    50   ~ 0
D-
Text Label 6500 3725 0    50   ~ 0
D+
Text Label 6500 3825 0    50   ~ 0
CC1
Text Label 6500 3925 0    50   ~ 0
CC2
Text Label 6500 4025 0    50   ~ 0
SBU1
Text Label 6500 4125 0    50   ~ 0
SBU2
Text Label 6500 4325 0    50   ~ 0
GND
Wire Wire Line
	6350 2000 6350 2200
Connection ~ 6350 2200
Wire Wire Line
	6350 5800 6350 5600
Connection ~ 6350 5600
Wire Wire Line
	4175 2200 4175 2300
Wire Wire Line
	4100 2300 4175 2300
Connection ~ 4175 2300
Wire Wire Line
	4175 2300 4175 2400
Wire Wire Line
	3500 5600 3600 5600
Wire Wire Line
	3600 5100 3600 5600
Connection ~ 3600 5600
Wire Wire Line
	3600 5600 4800 5600
$Comp
L USB-C_pololu:PWR_FLAG #FLG0101
U 1 1 5BCB5C05
P 6350 2000
F 0 "#FLG0101" H 6350 2075 50  0001 C CNN
F 1 "PWR_FLAG" H 6350 2200 50  0000 C CNN
F 2 "" H 6350 2000 50  0001 C CNN
F 3 "" H 6350 2000 50  0001 C CNN
	1    6350 2000
	1    0    0    -1  
$EndComp
$Comp
L USB-C_pololu:PWR_FLAG #FLG0102
U 1 1 5BCB5C6A
P 6350 5800
F 0 "#FLG0102" H 6350 5875 50  0001 C CNN
F 1 "PWR_FLAG" H 6325 6000 50  0000 C CNN
F 2 "" H 6350 5800 50  0001 C CNN
F 3 "" H 6350 5800 50  0001 C CNN
	1    6350 5800
	-1   0    0    1   
$EndComp
$EndSCHEMATC