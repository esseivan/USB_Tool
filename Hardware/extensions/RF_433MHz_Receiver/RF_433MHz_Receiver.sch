EESchema Schematic File Version 4
LIBS:RF_433MHz_Receiver-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "RF_433MHz_Receiver"
Date "2019-06-02"
Rev "00"
Comp "EsseivaN"
Comment1 "Author : Esseiva Nicolas"
Comment2 "RF 433MHz Receiver extension"
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L 0EsseivaN_Lib:CONN_01X02 X2
U 1 1 5CF36AF1
P 2700 3350
F 0 "X2" H 2777 3391 50  0000 L CNN
F 1 "Extender_I2C" H 2777 3300 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_02P" H 2700 3350 50  0001 C CNN
F 3 "" H 2700 3350 50  0000 C CNN
	1    2700 3350
	-1   0    0    -1  
$EndComp
Text Label 3000 3300 0    50   ~ 0
SDA
Text Label 3000 3400 0    50   ~ 0
SCL
$Comp
L 0EsseivaN_Lib:RF_RECEIVER U2
U 1 1 5CF432A1
P 6700 3300
F 0 "U2" H 6372 3353 60  0000 R CNN
F 1 "RF_RECEIVER" H 6372 3247 60  0000 R CNN
F 2 "0EsseivaN_Lib:RF_RECEIVER" H 6700 3300 60  0001 C CNN
F 3 "" H 6700 3300 60  0001 C CNN
	1    6700 3300
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR010
U 1 1 5CF474BB
P 6700 3950
F 0 "#PWR010" H 6700 3650 50  0001 C CNN
F 1 "GND" H 6700 3750 50  0001 C CNN
F 2 "" H 6700 3950 50  0000 C CNN
F 3 "" H 6700 3950 50  0000 C CNN
	1    6700 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 3950 6700 3900
$Comp
L 0EsseivaN_Lib:5V #PWR09
U 1 1 5CF4A0A7
P 6700 2350
F 0 "#PWR09" H 6700 2200 50  0001 C CNN
F 1 "5V" H 6717 2520 45  0000 C CNN
F 2 "" H 6700 2350 50  0000 C CNN
F 3 "" H 6700 2350 50  0000 C CNN
	1    6700 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 2350 6700 2400
$Comp
L 0EsseivaN_Lib:GND #PWR07
U 1 1 5CF41834
P 4350 3300
F 0 "#PWR07" H 4350 3000 50  0001 C CNN
F 1 "GND" H 4350 3100 50  0001 C CNN
F 2 "" H 4350 3300 50  0000 C CNN
F 3 "" H 4350 3300 50  0000 C CNN
	1    4350 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 3300 4350 3250
$Comp
L 0EsseivaN_Lib:CAPA C1
U 1 1 5CF44CD7
P 4600 2050
F 0 "C1" V 4547 2158 60  0000 L CNN
F 1 "100nF" V 4653 2158 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 4600 2050 60  0001 C CNN
F 3 "" H 4600 2050 60  0000 C CNN
	1    4600 2050
	0    1    1    0   
$EndComp
Wire Wire Line
	4350 2400 4350 1850
Wire Wire Line
	4600 1850 4600 1950
Wire Wire Line
	4350 1850 4600 1850
$Comp
L 0EsseivaN_Lib:PIC16F15323 U1
U 1 1 5CF40580
P 4350 2850
F 0 "U1" H 4450 3400 50  0000 C CNN
F 1 "PIC16F15323" H 4650 3300 50  0000 C CNN
F 2 "0EsseivaN_Lib:SOIC-14" H 3300 3600 50  0001 L BNN
F 3 "" H 3300 3500 50  0001 L BNN
	1    4350 2850
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_ICSP J1
U 1 1 5CF4C2C1
P 2850 1800
F 0 "J1" H 2908 2437 60  0000 C CNN
F 1 "CONN_ICSP" H 2908 2331 60  0000 C CNN
F 2 "0EsseivaN_Lib:Pin_Header_Straight_1x08_Pitch2.54mm" H 2850 1950 60  0001 C CNN
F 3 "" H 2850 1950 60  0000 C CNN
	1    2850 1800
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R1
U 1 1 5CF4DFA6
P 3350 1150
F 0 "R1" H 3420 1196 50  0000 L CNN
F 1 "27k" H 3420 1105 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0805_HandSoldering" V 3280 1150 50  0001 C CNN
F 3 "" H 3350 1150 50  0000 C CNN
	1    3350 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3150 1450 3350 1450
Wire Wire Line
	3350 1450 3350 1350
NoConn ~ 3150 1950
NoConn ~ 3150 2050
NoConn ~ 3150 2150
$Comp
L 0EsseivaN_Lib:GND #PWR01
U 1 1 5CF4FFDE
P 3250 2050
F 0 "#PWR01" H 3250 1750 50  0001 C CNN
F 1 "GND" H 3250 1850 50  0001 C CNN
F 2 "" H 3250 2050 50  0000 C CNN
F 3 "" H 3250 2050 50  0000 C CNN
	1    3250 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 2050 3250 1650
Wire Wire Line
	3250 1650 3150 1650
Text GLabel 3950 2600 0    50   BiDi ~ 0
ICSPDAT
Text GLabel 3950 2700 0    50   Input ~ 0
ICSPCLK
Text GLabel 3750 2900 0    50   UnSpc ~ 0
VPP
Text GLabel 4750 2600 2    50   BiDi ~ 0
SCL
Text GLabel 4750 2700 2    50   BiDi ~ 0
SDA
Wire Wire Line
	4650 2600 4750 2600
Wire Wire Line
	4650 2700 4750 2700
Text GLabel 3200 3400 2    50   BiDi ~ 0
SCL
Text GLabel 3200 3300 2    50   BiDi ~ 0
SDA
Wire Wire Line
	2900 3300 3200 3300
Wire Wire Line
	2900 3400 3200 3400
Wire Wire Line
	3850 2800 4050 2800
Wire Wire Line
	3950 2700 4050 2700
Wire Wire Line
	3950 2600 4050 2600
Text GLabel 3450 1750 2    50   BiDi ~ 0
ICSPDAT
Text GLabel 3450 1850 2    50   Output ~ 0
ICSPCLK
Wire Wire Line
	3150 1850 3450 1850
Wire Wire Line
	3150 1750 3450 1750
Text GLabel 3450 1450 2    50   UnSpc ~ 0
VPP
Wire Wire Line
	3350 1450 3450 1450
Connection ~ 3350 1450
$Comp
L 0EsseivaN_Lib:VCC #PWR02
U 1 1 5CF5492F
P 3350 900
F 0 "#PWR02" H 3350 750 50  0001 C CNN
F 1 "VCC" H 3367 1073 50  0000 C CNN
F 2 "" H 3350 900 50  0000 C CNN
F 3 "" H 3350 900 50  0000 C CNN
	1    3350 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 900  3350 950 
Wire Wire Line
	3150 1550 3250 1550
Wire Wire Line
	3250 1550 3250 950 
Wire Wire Line
	3250 950  3350 950 
Connection ~ 3350 950 
Wire Wire Line
	3750 2900 4050 2900
$Comp
L 0EsseivaN_Lib:CONN_01X04 X1
U 1 1 5CF599BA
P 2700 2850
F 0 "X1" H 2777 2941 50  0000 L CNN
F 1 "Extender_Power" H 2777 2850 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_04P" H 2700 2850 50  0001 C CNN
F 3 "" H 2700 2850 50  0000 C CNN
	1    2700 2850
	-1   0    0    -1  
$EndComp
NoConn ~ 2900 2750
$Comp
L 0EsseivaN_Lib:VCC #PWR05
U 1 1 5CF5A925
P 3200 2750
F 0 "#PWR05" H 3200 2600 50  0001 C CNN
F 1 "VCC" H 3217 2923 50  0000 C CNN
F 2 "" H 3200 2750 50  0000 C CNN
F 3 "" H 3200 2750 50  0000 C CNN
	1    3200 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 2750 3200 2850
Wire Wire Line
	3200 2850 2900 2850
$Comp
L 0EsseivaN_Lib:GND #PWR04
U 1 1 5CF5B9F6
P 3050 3050
F 0 "#PWR04" H 3050 2750 50  0001 C CNN
F 1 "GND" H 3050 2850 50  0001 C CNN
F 2 "" H 3050 3050 50  0000 C CNN
F 3 "" H 3050 3050 50  0000 C CNN
	1    3050 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 3050 3050 2950
Wire Wire Line
	3050 2950 2900 2950
$Comp
L 0EsseivaN_Lib:GND #PWR08
U 1 1 5CF5DA37
P 4600 2200
F 0 "#PWR08" H 4600 1900 50  0001 C CNN
F 1 "GND" H 4600 2000 50  0001 C CNN
F 2 "" H 4600 2200 50  0000 C CNN
F 3 "" H 4600 2200 50  0000 C CNN
	1    4600 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	4600 2200 4600 2150
$Comp
L 0EsseivaN_Lib:VCC #PWR06
U 1 1 5CF5E5B1
P 4350 1750
F 0 "#PWR06" H 4350 1600 50  0001 C CNN
F 1 "VCC" H 4367 1923 50  0000 C CNN
F 2 "" H 4350 1750 50  0000 C CNN
F 3 "" H 4350 1750 50  0000 C CNN
	1    4350 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 1750 4350 1850
Connection ~ 4350 1850
$Comp
L 0EsseivaN_Lib:5V #PWR03
U 1 1 5CF61D6B
P 3050 2550
F 0 "#PWR03" H 3050 2400 50  0001 C CNN
F 1 "5V" H 3067 2720 45  0000 C CNN
F 2 "" H 3050 2550 50  0000 C CNN
F 3 "" H 3050 2550 50  0000 C CNN
	1    3050 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 2550 3050 2650
Wire Wire Line
	3050 2650 2950 2650
$Comp
L 0EsseivaN_Lib:CAPA C2
U 1 1 5CF63129
P 6850 2550
F 0 "C2" V 6797 2658 60  0000 L CNN
F 1 "100nF" V 6903 2658 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 6850 2550 60  0001 C CNN
F 3 "" H 6850 2550 60  0000 C CNN
	1    6850 2550
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR011
U 1 1 5CF645F7
P 6850 2700
F 0 "#PWR011" H 6850 2400 50  0001 C CNN
F 1 "GND" H 6850 2500 50  0001 C CNN
F 2 "" H 6850 2700 50  0000 C CNN
F 3 "" H 6850 2700 50  0000 C CNN
	1    6850 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 2700 6850 2650
Wire Wire Line
	6850 2450 6850 2400
Wire Wire Line
	6850 2400 6700 2400
Connection ~ 6700 2400
Wire Wire Line
	6700 2400 6700 2700
$Comp
L 0EsseivaN_Lib:R R2
U 1 1 5CF67EFE
P 6050 2900
F 0 "R2" V 5950 2900 50  0001 C CNN
F 1 "1k" V 5934 2900 50  0001 C CNN
F 2 "0EsseivaN_Lib:R_0805_HandSoldering" V 5980 2900 50  0001 C CNN
F 3 "" H 6050 2900 50  0000 C CNN
	1    6050 2900
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R3
U 1 1 5CF688FE
P 6050 3100
F 0 "R3" V 5950 3100 50  0001 C CNN
F 1 "1k" V 5934 3100 50  0001 C CNN
F 2 "0EsseivaN_Lib:R_0805_HandSoldering" V 5980 3100 50  0001 C CNN
F 3 "" H 6050 3100 50  0000 C CNN
	1    6050 3100
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R4
U 1 1 5CF68E0D
P 6050 3300
F 0 "R4" V 5950 3300 50  0001 C CNN
F 1 "1k" V 5934 3300 50  0001 C CNN
F 2 "0EsseivaN_Lib:R_0805_HandSoldering" V 5980 3300 50  0001 C CNN
F 3 "" H 6050 3300 50  0000 C CNN
	1    6050 3300
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R5
U 1 1 5CF68EEE
P 6050 3500
F 0 "R5" V 5950 3500 50  0001 C CNN
F 1 "1k" V 5934 3500 50  0001 C CNN
F 2 "0EsseivaN_Lib:R_0805_HandSoldering" V 5980 3500 50  0001 C CNN
F 3 "" H 6050 3500 50  0000 C CNN
	1    6050 3500
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R6
U 1 1 5CF690B5
P 6050 3700
F 0 "R6" V 5950 3700 50  0001 C CNN
F 1 "1k" V 5934 3700 50  0001 C CNN
F 2 "0EsseivaN_Lib:R_0805_HandSoldering" V 5980 3700 50  0001 C CNN
F 3 "" H 6050 3700 50  0000 C CNN
	1    6050 3700
	0    1    1    0   
$EndComp
Text Notes 5950 2800 0    50   ~ 0
R2..6\n5x1k
Wire Wire Line
	6250 2900 6300 2900
Wire Wire Line
	6250 3100 6300 3100
Wire Wire Line
	6250 3300 6300 3300
Wire Wire Line
	6250 3500 6300 3500
Wire Wire Line
	6250 3700 6300 3700
Wire Wire Line
	3850 2800 3850 3700
Wire Wire Line
	5800 3400 5800 3300
Wire Wire Line
	5800 3300 5850 3300
Wire Wire Line
	5800 3000 5800 2900
Wire Wire Line
	5800 2900 5850 2900
$Comp
L 0EsseivaN_Lib:LED P1
U 1 1 5CF9D78A
P 5150 1750
F 0 "P1" V 5097 1828 60  0000 L CNN
F 1 "TLMS1000" V 5203 1828 60  0000 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 5150 1750 60  0001 C CNN
F 3 "" H 5150 1750 60  0000 C CNN
	1    5150 1750
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:5V #PWR012
U 1 1 5CF9EA0A
P 5150 1600
F 0 "#PWR012" H 5150 1450 50  0001 C CNN
F 1 "5V" H 5167 1770 45  0000 C CNN
F 2 "" H 5150 1600 50  0000 C CNN
F 3 "" H 5150 1600 50  0000 C CNN
	1    5150 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 1600 5150 1650
Wire Wire Line
	4650 3000 5800 3000
Wire Wire Line
	4650 3100 5850 3100
Wire Wire Line
	3950 3400 5800 3400
Wire Wire Line
	3900 3500 5850 3500
Wire Wire Line
	3850 3700 5850 3700
Wire Wire Line
	4650 2900 5150 2900
Wire Wire Line
	5150 2900 5150 2300
$Comp
L 0EsseivaN_Lib:R R7
U 1 1 5CFAF9F9
P 5150 2100
F 0 "R7" H 5220 2146 50  0000 L CNN
F 1 "270R" H 5220 2055 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0805_HandSoldering" V 5080 2100 50  0001 C CNN
F 3 "" H 5150 2100 50  0000 C CNN
	1    5150 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 1850 5150 1900
Wire Wire Line
	3950 3000 4050 3000
Wire Wire Line
	3950 3000 3950 3400
Wire Wire Line
	3900 3100 4050 3100
Wire Wire Line
	3900 3100 3900 3500
NoConn ~ 4650 2800
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 5CFA58F1
P 2950 2550
F 0 "#FLG0101" H 2950 2625 50  0001 C CNN
F 1 "PWR_FLAG" H 2883 2592 50  0000 R CNN
F 2 "" H 2950 2550 50  0001 C CNN
F 3 "~" H 2950 2550 50  0001 C CNN
	1    2950 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 2550 2950 2650
Connection ~ 2950 2650
Wire Wire Line
	2950 2650 2900 2650
$EndSCHEMATC
