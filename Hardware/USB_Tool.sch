EESchema Schematic File Version 4
LIBS:USB_Tool-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "USB_Tool"
Date "2019-05-22"
Rev "02"
Comp "EsseivaN"
Comment1 "Author : Esseiva Nicolas"
Comment2 "USB Tool"
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L 0EsseivaN_Lib:USB_B_Micro J1
U 1 1 5CB4CD34
P 1250 1000
F 0 "J1" H 1307 1467 50  0000 C CNN
F 1 "USB_B_Micro" H 1307 1376 50  0000 C CNN
F 2 "0EsseivaN_Lib:micro_usb" H 1400 950 50  0001 C CNN
F 3 "~" H 1400 950 50  0001 C CNN
	1    1250 1000
	1    0    0    -1  
$EndComp
Text GLabel 1850 1000 2    50   BiDi ~ 0
D+
Text GLabel 1850 1100 2    50   BiDi ~ 0
D-
Text GLabel 3750 2800 2    50   BiDi ~ 0
D+
Wire Wire Line
	1550 1000 1850 1000
Wire Wire Line
	1850 1100 1550 1100
Text GLabel 3750 2900 2    50   BiDi ~ 0
D-
$Comp
L 0EsseivaN_Lib:CAPA C5
U 1 1 5CB6B8DF
P 2750 2200
F 0 "C5" V 2803 2093 60  0000 R CNN
F 1 "470nF" V 2697 2093 60  0000 R CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 2750 2200 60  0001 C CNN
F 3 "" H 2750 2200 60  0000 C CNN
	1    2750 2200
	0    1    -1   0   
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR0102
U 1 1 5CB6DCDC
P 2750 2350
F 0 "#PWR0102" H 2750 2050 50  0001 C CNN
F 1 "GND" H 2750 2150 50  0001 C CNN
F 2 "" H 2750 2350 50  0000 C CNN
F 3 "" H 2750 2350 50  0000 C CNN
	1    2750 2350
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR0106
U 1 1 5CB76392
P 4850 3150
F 0 "#PWR0106" H 4850 2850 50  0001 C CNN
F 1 "GND" H 4850 2950 50  0001 C CNN
F 2 "" H 4850 3150 50  0000 C CNN
F 3 "" H 4850 3150 50  0000 C CNN
	1    4850 3150
	-1   0    0    -1  
$EndComp
Wire Wire Line
	4850 3150 4850 3100
$Comp
L 0EsseivaN_Lib:3V3 #PWR0107
U 1 1 5CB77422
P 4050 2250
F 0 "#PWR0107" H 4050 2100 50  0001 C CNN
F 1 "3V3" H 4068 2420 45  0000 C CNN
F 2 "" H 4050 2250 50  0000 C CNN
F 3 "" H 4050 2250 50  0000 C CNN
	1    4050 2250
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0109
U 1 1 5CB794E8
P 4850 2400
F 0 "#PWR0109" H 4850 2250 50  0001 C CNN
F 1 "3V3" H 4868 2570 45  0000 C CNN
F 2 "" H 4850 2400 50  0000 C CNN
F 3 "" H 4850 2400 50  0000 C CNN
	1    4850 2400
	-1   0    0    -1  
$EndComp
NoConn ~ 1550 1200
$Comp
L 0EsseivaN_Lib:GND #PWR0110
U 1 1 5CB7DD0D
P 1250 1900
F 0 "#PWR0110" H 1250 1600 50  0001 C CNN
F 1 "GND" H 1250 1700 50  0001 C CNN
F 2 "" H 1250 1900 50  0000 C CNN
F 3 "" H 1250 1900 50  0000 C CNN
	1    1250 1900
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R1
U 1 1 5CB7FC9D
P 1150 1600
F 0 "R1" H 1220 1646 50  0000 L CNN
F 1 "1M" H 1220 1555 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 1080 1600 50  0001 C CNN
F 3 "" H 1150 1600 50  0000 C CNN
	1    1150 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	1150 1800 1150 1850
Wire Wire Line
	1150 1850 1250 1850
Wire Wire Line
	1250 1900 1250 1850
$Comp
L 0EsseivaN_Lib:CAPA C1
U 1 1 5CB83229
P 900 1600
F 0 "C1" V 953 1707 60  0000 L CNN
F 1 "4.7nF" V 847 1707 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 900 1600 60  0001 C CNN
F 3 "" H 900 1600 60  0000 C CNN
	1    900  1600
	0    -1   -1   0   
$EndComp
Wire Wire Line
	900  1500 900  1400
Wire Wire Line
	900  1400 1150 1400
Connection ~ 1150 1400
Wire Wire Line
	900  1700 900  1850
Wire Wire Line
	900  1850 1150 1850
Connection ~ 1150 1850
$Comp
L 0EsseivaN_Lib:CAPA C3
U 1 1 5CB88B5C
P 4250 2450
F 0 "C3" V 4197 2342 60  0000 R CNN
F 1 "100nF" V 4303 2342 60  0000 R CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 4250 2450 60  0001 C CNN
F 3 "" H 4250 2450 60  0000 C CNN
	1    4250 2450
	0    -1   1    0   
$EndComp
Wire Wire Line
	4050 2250 4050 2300
Wire Wire Line
	4250 2350 4250 2300
Wire Wire Line
	4250 2300 4050 2300
Connection ~ 4050 2300
Wire Wire Line
	4050 2300 4050 2900
$Comp
L 0EsseivaN_Lib:GND #PWR0111
U 1 1 5CB8C722
P 4250 2550
F 0 "#PWR0111" H 4250 2250 50  0001 C CNN
F 1 "GND" H 4250 2350 50  0001 C CNN
F 2 "" H 4250 2550 50  0000 C CNN
F 3 "" H 4250 2550 50  0000 C CNN
	1    4250 2550
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R4
U 1 1 5CB6108A
P 3600 2350
F 0 "R4" H 3531 2304 50  0000 R CNN
F 1 "1k" H 3531 2395 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 3530 2350 50  0001 C CNN
F 3 "" H 3600 2350 50  0000 C CNN
	1    3600 2350
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:R R3
U 1 1 5CB8D825
P 4850 2650
F 0 "R3" H 4781 2604 50  0000 R CNN
F 1 "1k" H 4781 2695 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 4780 2650 50  0001 C CNN
F 3 "" H 4850 2650 50  0000 C CNN
	1    4850 2650
	-1   0    0    1   
$EndComp
Wire Wire Line
	4850 2850 4850 2900
$Comp
L 0EsseivaN_Lib:CAPA_P C4
U 1 1 5CB8DCBC
P 2400 4050
F 0 "C4" V 2364 3943 60  0000 R CNN
F 1 "1uF" V 2470 3943 60  0000 R CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 2400 4050 60  0001 C CNN
F 3 "" H 2400 4050 60  0000 C CNN
	1    2400 4050
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_ICSP J2
U 1 1 5CBB0674
P 850 2400
F 0 "J2" H 700 3000 60  0000 R CNN
F 1 "CONN_ICSP" H 1050 2900 60  0000 R CNN
F 2 "0EsseivaN_Lib:Pin_Header_Straight_1x08_Pitch2.54mm" H 850 2400 60  0001 C CNN
F 3 "" H 850 2400 60  0000 C CNN
	1    850  2400
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR0113
U 1 1 5CBC32A7
P 1250 2700
F 0 "#PWR0113" H 1250 2400 50  0001 C CNN
F 1 "GND" H 1250 2500 50  0001 C CNN
F 2 "" H 1250 2700 50  0000 C CNN
F 3 "" H 1250 2700 50  0000 C CNN
	1    1250 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1250 2700 1250 2250
Wire Wire Line
	1250 2250 1150 2250
Wire Wire Line
	1250 1400 1350 1400
Wire Wire Line
	1350 1400 1350 1850
Wire Wire Line
	1350 1850 1250 1850
Connection ~ 1250 1850
$Comp
L 0EsseivaN_Lib:LED P1
U 1 1 5CBEA842
P 2150 2800
F 0 "P1" V 2097 2623 60  0000 R CNN
F 1 "TLMS1000" V 2203 2623 60  0000 R CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 2150 2800 60  0001 C CNN
F 3 "" H 2150 2800 60  0000 C CNN
	1    2150 2800
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R2
U 1 1 5CBEC042
P 2150 2500
F 0 "R2" H 2220 2546 50  0000 L CNN
F 1 "180R" H 2220 2455 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 2080 2500 50  0001 C CNN
F 3 "" H 2150 2500 50  0000 C CNN
	1    2150 2500
	1    0    0    -1  
$EndComp
Text Label 2500 3100 2    50   ~ 0
SPI_LED
Text Label 5500 4650 2    50   ~ 0
SCK
Text Label 5500 4750 2    50   ~ 0
MISO
Text Label 5500 4550 2    50   ~ 0
MOSI
Text Label 1600 800  0    50   ~ 0
VBus
Text Label 1600 1000 0    50   ~ 0
D+
Text Label 1600 1100 0    50   ~ 0
D-
Text Label 3600 3800 0    50   ~ 0
MISO
Wire Wire Line
	4850 2400 4850 2450
Text GLabel 1450 2350 2    50   BiDi ~ 0
ICSPDAT
Text GLabel 1450 2450 2    50   BiDi ~ 0
ICSPCLK
Wire Wire Line
	1450 2350 1150 2350
Text GLabel 1500 1950 2    50   BiDi ~ 0
VPP
Text GLabel 5450 5250 0    50   BiDi ~ 0
ICSPDAT
Text GLabel 5450 5150 0    50   BiDi ~ 0
ICSPCLK
Wire Wire Line
	1150 2050 1400 2050
Wire Wire Line
	1150 2450 1450 2450
Text Label 5500 4950 2    50   ~ 0
SCL
Text Label 5500 5050 2    50   ~ 0
SDA
Text Label 3600 3700 0    50   ~ 0
MOSI
Text Label 3600 3600 0    50   ~ 0
SCK
Text Label 5500 3650 2    50   ~ 0
BRR
Text Label 5500 3750 2    50   ~ 0
BRA
NoConn ~ 5550 5650
NoConn ~ 5550 5750
Wire Wire Line
	5450 5250 5550 5250
Wire Wire Line
	5450 5150 5550 5150
NoConn ~ 5550 5450
NoConn ~ 5550 5550
Wire Wire Line
	7250 5750 7150 5750
Text GLabel 7250 5750 2    50   BiDi ~ 0
VPP
Wire Wire Line
	6350 6250 6450 6250
Connection ~ 6350 6250
Wire Wire Line
	6350 6300 6350 6250
$Comp
L 0EsseivaN_Lib:GND #PWR0101
U 1 1 5CBB7C21
P 6350 6300
F 0 "#PWR0101" H 6350 6000 50  0001 C CNN
F 1 "GND" H 6350 6100 50  0001 C CNN
F 2 "" H 6350 6300 50  0000 C CNN
F 3 "" H 6350 6300 50  0000 C CNN
	1    6350 6300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 6250 6450 6150
Wire Wire Line
	6250 6250 6350 6250
Wire Wire Line
	6250 6150 6250 6250
Wire Wire Line
	6450 3250 6450 3050
Connection ~ 6450 3250
Wire Wire Line
	6250 3250 6450 3250
Wire Wire Line
	6250 3350 6250 3250
Wire Wire Line
	6450 3050 6600 3050
Wire Wire Line
	6450 3350 6450 3250
$Comp
L 0EsseivaN_Lib:GND #PWR0103
U 1 1 5CB97922
P 6600 3250
F 0 "#PWR0103" H 6600 2950 50  0001 C CNN
F 1 "GND" H 6600 3050 50  0001 C CNN
F 2 "" H 6600 3250 50  0000 C CNN
F 3 "" H 6600 3250 50  0000 C CNN
	1    6600 3250
	1    0    0    -1  
$EndComp
Text Label 7200 3950 0    50   ~ 0
~USBCFG
Text Label 4300 4050 0    50   ~ 0
~SSPND
Text Label 4300 3950 0    50   ~ 0
~LOWPWR
Connection ~ 6600 3050
$Comp
L 0EsseivaN_Lib:5V #PWR0105
U 1 1 5CC4CF73
P 10300 750
F 0 "#PWR0105" H 10300 600 50  0001 C CNN
F 1 "5V" H 10317 920 45  0000 C CNN
F 2 "" H 10300 750 50  0000 C CNN
F 3 "" H 10300 750 50  0000 C CNN
	1    10300 750 
	-1   0    0    -1  
$EndComp
Text GLabel 10000 1200 0    50   BiDi ~ 0
SCL
Text GLabel 5300 5050 0    50   BiDi ~ 0
SDA
Wire Wire Line
	5300 5050 5550 5050
Text GLabel 5300 4950 0    50   BiDi ~ 0
SCL
Wire Wire Line
	5300 4950 5550 4950
$Comp
L 0EsseivaN_Lib:MRF89XAM8A U1
U 1 1 5CCB5FB4
P 2100 5850
F 0 "U1" H 1850 6400 50  0000 C CNN
F 1 "MRF89XAM8A" H 1750 6300 50  0000 C CNN
F 2 "0EsseivaN_Lib:MRF89XAM8A" H 2100 5850 50  0001 C CNN
F 3 "" H 2100 5850 50  0001 C CNN
	1    2100 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 6450 2000 6550
Wire Wire Line
	2000 6550 2100 6550
Wire Wire Line
	2200 6550 2200 6450
Wire Wire Line
	2100 6450 2100 6550
Connection ~ 2100 6550
Wire Wire Line
	2100 6550 2200 6550
$Comp
L 0EsseivaN_Lib:GND #PWR0108
U 1 1 5CCD241E
P 2100 6600
F 0 "#PWR0108" H 2100 6300 50  0001 C CNN
F 1 "GND" H 2100 6400 50  0001 C CNN
F 2 "" H 2100 6600 50  0000 C CNN
F 3 "" H 2100 6600 50  0000 C CNN
	1    2100 6600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 6550 2100 6600
$Comp
L 0EsseivaN_Lib:3V3 #PWR0112
U 1 1 5CCDE1A2
P 2100 5100
F 0 "#PWR0112" H 2100 4950 50  0001 C CNN
F 1 "3V3" H 2117 5270 45  0000 C CNN
F 2 "" H 2100 5100 50  0000 C CNN
F 3 "" H 2100 5100 50  0000 C CNN
	1    2100 5100
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CAPA C6
U 1 1 5CB772E2
P 2500 5250
F 0 "C6" V 2447 5358 60  0000 L CNN
F 1 "4.7uF" V 2553 5358 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 2500 5250 60  0001 C CNN
F 3 "" H 2500 5250 60  0000 C CNN
	1    2500 5250
	0    1    1    0   
$EndComp
Wire Wire Line
	2100 5100 2100 5150
Wire Wire Line
	2100 5150 2500 5150
Connection ~ 2100 5150
Wire Wire Line
	2100 5150 2100 5350
$Comp
L 0EsseivaN_Lib:GND #PWR0117
U 1 1 5CB84231
P 2500 5350
F 0 "#PWR0117" H 2500 5050 50  0001 C CNN
F 1 "GND" H 2500 5150 50  0001 C CNN
F 2 "" H 2500 5350 50  0000 C CNN
F 3 "" H 2500 5350 50  0000 C CNN
	1    2500 5350
	1    0    0    -1  
$EndComp
Text Label 2550 6050 0    50   ~ 0
~CSCON
Text Label 2550 5950 0    50   ~ 0
~CSDAT
Wire Wire Line
	1700 5750 700  5750
Text Label 5500 4850 2    50   ~ 0
RESET_USB
Text Label 5500 4350 2    50   ~ 0
RESET_RF
Wire Wire Line
	1700 5950 1300 5950
Text Label 1600 5850 2    50   ~ 0
IRQ0
Text Label 1600 5950 2    50   ~ 0
IRQ1
Text Label 1100 5900 2    50   ~ 0
RESET_RF
Text Notes 4850 3050 0    50   ~ 0
12MHz\noscillator
$Comp
L Connector_Generic:Conn_01x05 J3
U 1 1 5CD07818
P 10850 1100
F 0 "J3" H 10768 1517 50  0000 C CNN
F 1 "Extender_I2C_1" H 10768 1426 50  0000 C CNN
F 2 "0EsseivaN_Lib:CH_05P" H 10850 1100 50  0001 C CNN
F 3 "~" H 10850 1100 50  0001 C CNN
	1    10850 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10650 1100 10200 1100
Wire Wire Line
	10650 1200 10150 1200
Wire Wire Line
	10650 900  10300 900 
Wire Wire Line
	10300 900  10300 750 
$Comp
L 0EsseivaN_Lib:3V3 #PWR0119
U 1 1 5CD41FD0
P 10150 750
F 0 "#PWR0119" H 10150 600 50  0001 C CNN
F 1 "3V3" H 10167 920 45  0000 C CNN
F 2 "" H 10150 750 50  0000 C CNN
F 3 "" H 10150 750 50  0000 C CNN
	1    10150 750 
	-1   0    0    -1  
$EndComp
Wire Wire Line
	10650 1000 10250 1000
Wire Wire Line
	10150 1000 10150 750 
$Comp
L Connector_Generic:Conn_01x05 J4
U 1 1 5CD4A4FD
P 10850 1850
F 0 "J4" H 10768 2267 50  0000 C CNN
F 1 "Extender_I2C_2" H 10768 2176 50  0000 C CNN
F 2 "0EsseivaN_Lib:CH_05P" H 10850 1850 50  0001 C CNN
F 3 "~" H 10850 1850 50  0001 C CNN
	1    10850 1850
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x05 J5
U 1 1 5CD4ABB8
P 10850 2600
F 0 "J5" H 10768 3017 50  0000 C CNN
F 1 "Extender_I2C_3" H 10768 2926 50  0000 C CNN
F 2 "0EsseivaN_Lib:CH_05P" H 10850 2600 50  0001 C CNN
F 3 "~" H 10850 2600 50  0001 C CNN
	1    10850 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	10650 1650 10300 1650
Wire Wire Line
	10300 1650 10300 900 
Connection ~ 10300 900 
Wire Wire Line
	10650 1750 10250 1750
Connection ~ 10250 1000
Wire Wire Line
	10250 1000 10150 1000
Wire Wire Line
	10650 1850 10200 1850
Wire Wire Line
	10200 1850 10200 1100
Connection ~ 10200 1100
Wire Wire Line
	10200 1100 10000 1100
Wire Wire Line
	10650 1950 10150 1950
Wire Wire Line
	10150 1950 10150 1200
Connection ~ 10150 1200
Wire Wire Line
	10150 1200 10000 1200
Wire Wire Line
	10650 2050 10100 2050
Wire Wire Line
	10100 2050 10100 1300
Wire Wire Line
	10650 1300 10100 1300
Wire Wire Line
	10100 1300 9950 1300
Connection ~ 10100 1300
$Comp
L 0EsseivaN_Lib:GND #PWR0120
U 1 1 5CD7F211
P 9950 1350
F 0 "#PWR0120" H 9950 1050 50  0001 C CNN
F 1 "GND" H 9950 1150 50  0001 C CNN
F 2 "" H 9950 1350 50  0000 C CNN
F 3 "" H 9950 1350 50  0000 C CNN
	1    9950 1350
	-1   0    0    -1  
$EndComp
Wire Wire Line
	9950 1350 9950 1300
Wire Wire Line
	10650 2400 10300 2400
Wire Wire Line
	10300 2400 10300 1650
Connection ~ 10300 1650
Wire Wire Line
	10650 2500 10250 2500
Wire Wire Line
	10250 1000 10250 1750
Connection ~ 10250 1750
Wire Wire Line
	10250 1750 10250 2500
Wire Wire Line
	10650 2600 10200 2600
Wire Wire Line
	10200 2600 10200 1850
Connection ~ 10200 1850
Wire Wire Line
	10650 2700 10150 2700
Wire Wire Line
	10150 2700 10150 1950
Connection ~ 10150 1950
Wire Wire Line
	10650 2800 10100 2800
Wire Wire Line
	10100 2800 10100 2050
Connection ~ 10100 2050
Wire Wire Line
	1150 2150 2100 2150
Text GLabel 10000 1100 0    50   BiDi ~ 0
SDA
$Comp
L 0EsseivaN_Lib:R R5
U 1 1 5CB7D3C5
P 700 5450
F 0 "R5" H 631 5404 50  0000 R CNN
F 1 "1k" H 631 5495 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 630 5450 50  0001 C CNN
F 3 "" H 700 5450 50  0000 C CNN
	1    700  5450
	1    0    0    1   
$EndComp
Wire Wire Line
	700  5200 700  5250
$Comp
L 0EsseivaN_Lib:3V3 #PWR0121
U 1 1 5CB93503
P 700 5200
F 0 "#PWR0121" H 700 5050 50  0001 C CNN
F 1 "3V3" H 717 5370 45  0000 C CNN
F 2 "" H 700 5200 50  0000 C CNN
F 3 "" H 700 5200 50  0000 C CNN
	1    700  5200
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:MCP2210 U3
U 1 1 5CBE857C
P 3050 3300
F 0 "U3" H 2850 4150 50  0000 C CNN
F 1 "MCP2210" H 2800 4050 50  0000 C CNN
F 2 "0EsseivaN_Lib:SSOP-20_5.3x7.2mm_Pitch0.65mm" H 3050 3300 50  0001 C CNN
F 3 "" H 2650 2900 50  0001 C CNN
	1    3050 3300
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:DSC6003JI2A Y1
U 1 1 5CB74EB9
P 4450 3000
F 0 "Y1" H 4450 3367 50  0000 C CNN
F 1 "DSC6003JI2A" H 4450 3276 50  0000 C CNN
F 2 "0EsseivaN_Lib:Oscillator_SMD_4pin_2.5x2.0mm_HandSoldering" H 4450 3000 50  0001 C CNN
F 3 "https://www.digikey.ch/product-detail/en/microchip-technology/DSC6003JI2A-012.0000T/DSC6003JI2A-012.0000TCT-ND/8042515" H 4450 3000 50  0001 C CNN
	1    4450 3000
	-1   0    0    -1  
$EndComp
NoConn ~ 3550 3200
Wire Wire Line
	2400 3950 2400 3800
Wire Wire Line
	2400 3800 2550 3800
Wire Wire Line
	2400 4150 2400 4250
Wire Wire Line
	2400 4250 3050 4250
Wire Wire Line
	3050 4250 3050 4200
Wire Wire Line
	3050 4250 3050 4300
Connection ~ 3050 4250
Wire Wire Line
	2550 3100 2150 3100
Wire Wire Line
	2150 2900 2150 3100
NoConn ~ 2550 3400
Wire Wire Line
	3750 2900 3550 2900
Wire Wire Line
	3750 2800 3550 2800
Wire Wire Line
	2750 2300 2750 2350
Wire Wire Line
	3050 2400 3050 2100
Wire Wire Line
	3050 2100 2750 2100
Wire Wire Line
	3600 2550 3600 3400
Wire Wire Line
	3600 3400 3550 3400
Wire Wire Line
	3050 2100 3600 2100
Wire Wire Line
	3600 2100 3600 2150
Connection ~ 3050 2100
Wire Wire Line
	3050 2050 3050 2100
NoConn ~ 2550 2800
NoConn ~ 2550 2900
Wire Wire Line
	3550 3100 4050 3100
$Comp
L 0EsseivaN_Lib:GND #PWR0123
U 1 1 5CF8B611
P 3050 4300
F 0 "#PWR0123" H 3050 4000 50  0001 C CNN
F 1 "GND" H 3050 4100 50  0001 C CNN
F 2 "" H 3050 4300 50  0000 C CNN
F 3 "" H 3050 4300 50  0000 C CNN
	1    3050 4300
	-1   0    0    -1  
$EndComp
Text Notes 3200 4100 0    50   ~ 0
USB to SPI
$Comp
L 0EsseivaN_Lib:R R7
U 1 1 5CB7F98F
P 8000 2200
F 0 "R7" H 8070 2246 50  0000 L CNN
F 1 "180R" H 8070 2155 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 7930 2200 50  0001 C CNN
F 3 "" H 8000 2200 50  0000 C CNN
	1    8000 2200
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R8
U 1 1 5CB800DB
P 8250 2200
F 0 "R8" H 8320 2246 50  0000 L CNN
F 1 "270R" H 8320 2155 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 8180 2200 50  0001 C CNN
F 3 "" H 8250 2200 50  0000 C CNN
	1    8250 2200
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R6
U 1 1 5CB8029A
P 7750 2200
F 0 "R6" H 7681 2246 50  0000 R CNN
F 1 "180R" H 7681 2155 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 7680 2200 50  0001 C CNN
F 3 "" H 7750 2200 50  0000 C CNN
	1    7750 2200
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:5V #PWR0124
U 1 1 5CBB4994
P 8500 1300
F 0 "#PWR0124" H 8500 1150 50  0001 C CNN
F 1 "5V" H 8517 1470 45  0000 C CNN
F 2 "" H 8500 1300 50  0000 C CNN
F 3 "" H 8500 1300 50  0000 C CNN
	1    8500 1300
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_01X08 X2
U 1 1 5CBD6E7C
P 10850 4100
F 0 "X2" H 10928 4141 50  0000 L CNN
F 1 "EXTENDER_IO_1" H 10928 4050 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_08P" H 10850 4100 50  0001 C CNN
F 3 "" H 10850 4100 50  0000 C CNN
	1    10850 4100
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_01X08 X3
U 1 1 5CBD795A
P 10850 5000
F 0 "X3" H 10928 5041 50  0000 L CNN
F 1 "EXTENDER_IO_2" H 10928 4950 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_08P" H 10850 5000 50  0001 C CNN
F 3 "" H 10850 5000 50  0000 C CNN
	1    10850 5000
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:5V #PWR0125
U 1 1 5CC8389B
P 10350 3550
F 0 "#PWR0125" H 10350 3400 50  0001 C CNN
F 1 "5V" H 10367 3720 45  0000 C CNN
F 2 "" H 10350 3550 50  0000 C CNN
F 3 "" H 10350 3550 50  0000 C CNN
	1    10350 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 3550 10350 3750
$Comp
L 0EsseivaN_Lib:3V3 #PWR0126
U 1 1 5CC92829
P 10200 3550
F 0 "#PWR0126" H 10200 3400 50  0001 C CNN
F 1 "3V3" H 10218 3720 45  0000 C CNN
F 2 "" H 10200 3550 50  0000 C CNN
F 3 "" H 10200 3550 50  0000 C CNN
	1    10200 3550
	-1   0    0    -1  
$EndComp
Wire Wire Line
	10200 3550 10200 3850
$Comp
L 0EsseivaN_Lib:GND #PWR0127
U 1 1 5CD13C3A
P 10400 5450
F 0 "#PWR0127" H 10400 5150 50  0001 C CNN
F 1 "GND" H 10400 5250 50  0001 C CNN
F 2 "" H 10400 5450 50  0000 C CNN
F 3 "" H 10400 5450 50  0000 C CNN
	1    10400 5450
	1    0    0    -1  
$EndComp
Wire Wire Line
	10400 5450 10400 5350
Wire Wire Line
	10400 5350 10650 5350
$Comp
L 0EsseivaN_Lib:CONN_01X08 X4
U 1 1 5CD219E8
P 9650 3250
F 0 "X4" H 9728 3341 50  0000 L CNN
F 1 "EXTENDER_POWER_1" H 9728 3250 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_08P" H 9650 3250 50  0001 C CNN
F 3 "" H 9650 3250 50  0000 C CNN
	1    9650 3250
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:5V #PWR0128
U 1 1 5CD236ED
P 8800 2800
F 0 "#PWR0128" H 8800 2650 50  0001 C CNN
F 1 "5V" H 8817 2970 45  0000 C CNN
F 2 "" H 8800 2800 50  0000 C CNN
F 3 "" H 8800 2800 50  0000 C CNN
	1    8800 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	8800 2800 8800 2900
$Comp
L 0EsseivaN_Lib:3V3 #PWR0129
U 1 1 5CD236F8
P 8650 2800
F 0 "#PWR0129" H 8650 2650 50  0001 C CNN
F 1 "3V3" H 8668 2970 45  0000 C CNN
F 2 "" H 8650 2800 50  0000 C CNN
F 3 "" H 8650 2800 50  0000 C CNN
	1    8650 2800
	-1   0    0    -1  
$EndComp
Wire Wire Line
	8650 2800 8650 3100
Wire Wire Line
	9450 2900 8800 2900
Connection ~ 8800 2900
Wire Wire Line
	8800 2900 8800 3000
Wire Wire Line
	8800 3000 9450 3000
Wire Wire Line
	8650 3100 9450 3100
Wire Wire Line
	9450 3200 8650 3200
Wire Wire Line
	8650 3200 8650 3100
Connection ~ 8650 3100
$Comp
L 0EsseivaN_Lib:GND #PWR0130
U 1 1 5CD66E90
P 9050 3700
F 0 "#PWR0130" H 9050 3400 50  0001 C CNN
F 1 "GND" H 9050 3500 50  0001 C CNN
F 2 "" H 9050 3700 50  0000 C CNN
F 3 "" H 9050 3700 50  0000 C CNN
	1    9050 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	9050 3700 9050 3600
Wire Wire Line
	9050 3500 9450 3500
Wire Wire Line
	9450 3600 9050 3600
Connection ~ 9050 3600
Wire Wire Line
	9050 3600 9050 3500
$Comp
L 0EsseivaN_Lib:GND #PWR0131
U 1 1 5CE1E715
P 3750 5450
F 0 "#PWR0131" H 3750 5150 50  0001 C CNN
F 1 "GND" H 3750 5250 50  0001 C CNN
F 2 "" H 3750 5450 50  0000 C CNN
F 3 "" H 3750 5450 50  0000 C CNN
	1    3750 5450
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:5V #PWR0132
U 1 1 5CE3F9B3
P 4050 4800
F 0 "#PWR0132" H 4050 4650 50  0001 C CNN
F 1 "5V" H 4150 4900 45  0000 C CNN
F 2 "" H 4050 4800 50  0000 C CNN
F 3 "" H 4050 4800 50  0000 C CNN
	1    4050 4800
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_01X07 X1
U 1 1 5CE40C42
P 3550 5150
F 0 "X1" H 3467 4650 50  0000 C CNN
F 1 "EXTENDER_SPI_1" H 3467 4550 50  0000 C CNN
F 2 "0EsseivaN_Lib:CH_07P" H 3550 5150 50  0001 C CNN
F 3 "" H 3550 5150 50  0000 C CNN
	1    3550 5150
	-1   0    0    -1  
$EndComp
Wire Wire Line
	4050 4800 4050 4850
Wire Wire Line
	4050 4850 3750 4850
$Comp
L 0EsseivaN_Lib:3V3 #PWR0133
U 1 1 5CF06DE5
P 4150 4800
F 0 "#PWR0133" H 4150 4650 50  0001 C CNN
F 1 "3V3" H 4100 4900 45  0000 R CNN
F 2 "" H 4150 4800 50  0000 C CNN
F 3 "" H 4150 4800 50  0000 C CNN
	1    4150 4800
	-1   0    0    -1  
$EndComp
Wire Wire Line
	4150 4800 4150 4950
Wire Wire Line
	4150 4950 3750 4950
$Comp
L 0EsseivaN_Lib:PIC18F46K40_44 U4
U 1 1 5CB7FF60
P 6350 4750
F 0 "U4" H 6950 6200 50  0000 C CNN
F 1 "PIC18F46K40_44" H 6850 6100 50  0000 C CNN
F 2 "0EsseivaN_Lib:TQFP-44_10x10mm_Pitch0.8mm" H 6350 5050 50  0001 C CNN
F 3 "https://www.digikey.ch/product-detail/en/microchip-technology/PIC18F45K40-I-PT/PIC18F45K40-I-PT-ND/6208274" H 6350 5050 50  0001 C CNN
	1    6350 4750
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R9
U 1 1 5CFFB815
P 2950 5250
F 0 "R9" H 2880 5204 50  0000 R CNN
F 1 "1k" H 2880 5295 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 2880 5250 50  0001 C CNN
F 3 "" H 2950 5250 50  0000 C CNN
	1    2950 5250
	-1   0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:R R10
U 1 1 5CFFC200
P 3200 5250
F 0 "R10" H 3130 5204 50  0000 R CNN
F 1 "1k" H 3130 5295 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 3130 5250 50  0001 C CNN
F 3 "" H 3200 5250 50  0000 C CNN
	1    3200 5250
	-1   0    0    1   
$EndComp
Wire Wire Line
	3200 5450 3200 6050
Wire Wire Line
	3200 6050 2500 6050
Wire Wire Line
	2950 5450 2950 5950
Wire Wire Line
	2950 5950 2500 5950
Wire Wire Line
	2950 5050 2950 4950
Wire Wire Line
	2950 4950 3050 4950
Wire Wire Line
	3200 4950 3200 5050
$Comp
L 0EsseivaN_Lib:3V3 #PWR01
U 1 1 5D030660
P 3050 4900
F 0 "#PWR01" H 3050 4750 50  0001 C CNN
F 1 "3V3" H 2997 4937 45  0000 R CNN
F 2 "" H 3050 4900 50  0000 C CNN
F 3 "" H 3050 4900 50  0000 C CNN
	1    3050 4900
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 4900 3050 4950
Connection ~ 3050 4950
Wire Wire Line
	3050 4950 3200 4950
Text Label 3800 5050 0    50   ~ 0
SCK
Text Label 3800 5150 0    50   ~ 0
MOSI
Text Label 3800 5250 0    50   ~ 0
MISO
$Comp
L 0EsseivaN_Lib:R R11
U 1 1 5CBC69D8
P 1800 1800
F 0 "R11" H 1870 1846 50  0000 L CNN
F 1 "27k" H 1870 1755 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 1730 1800 50  0001 C CNN
F 3 "" H 1800 1800 50  0000 C CNN
	1    1800 1800
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 1000 2100 2150
Wire Wire Line
	1500 1950 1400 1950
Wire Wire Line
	1400 1950 1400 2050
Connection ~ 1400 2050
Wire Wire Line
	1400 2050 1800 2050
$Comp
L 0EsseivaN_Lib:5V #PWR0134
U 1 1 5CC95987
P 1800 1600
F 0 "#PWR0134" H 1800 1450 50  0001 C CNN
F 1 "5V" H 1817 1770 45  0000 C CNN
F 2 "" H 1800 1600 50  0000 C CNN
F 3 "" H 1800 1600 50  0000 C CNN
	1    1800 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 2000 1800 2050
Text Label 10600 3850 2    50   ~ 0
3V3
Text Label 10600 3750 2    50   ~ 0
5V
Text Label 10600 3950 2    50   ~ 0
INT
Text Label 10600 4050 2    50   ~ 0
CLK
Text Label 10600 4250 2    50   ~ 0
D2
Text Label 10600 4350 2    50   ~ 0
D3
Text Label 10600 4450 2    50   ~ 0
D4
Text Label 10600 4150 2    50   ~ 0
D1
Text Label 9400 2900 2    50   ~ 0
5V
Text Label 9400 3000 2    50   ~ 0
5V
Text Label 9400 3100 2    50   ~ 0
3V3
Text Label 9400 3200 2    50   ~ 0
3V3
Text Label 9400 3500 2    50   ~ 0
GND
Text Label 9400 3600 2    50   ~ 0
GND
Text Label 7200 3650 0    50   ~ 0
IRQ0
Text Label 7200 3750 0    50   ~ 0
IRQ1
Text Label 7200 3850 0    50   ~ 0
CS_EXT
Text Label 3800 5350 0    50   ~ 0
CS_EXT
Text Label 3800 4950 0    50   ~ 0
3V3
Text Label 3800 4850 0    50   ~ 0
5V
Entry Wire Line
	1850 3100 1950 3000
Entry Wire Line
	1850 3700 1950 3600
Entry Wire Line
	1850 3300 1950 3200
Entry Wire Line
	1850 3400 1950 3300
Entry Wire Line
	1850 3600 1950 3500
Wire Wire Line
	1950 3000 2550 3000
Wire Wire Line
	1950 3200 2550 3200
Wire Wire Line
	1950 3300 2550 3300
Wire Wire Line
	1950 3500 2550 3500
Wire Wire Line
	1950 3600 2550 3600
Text Label 2550 5650 0    50   ~ 0
MOSI
Text Label 2550 5850 0    50   ~ 0
MISO
Text Label 2550 5750 0    50   ~ 0
SCK
Wire Wire Line
	700  5650 700  5750
Entry Wire Line
	4200 3750 4300 3650
Entry Wire Line
	4200 3850 4300 3750
Entry Wire Line
	4200 4050 4300 3950
Entry Wire Line
	4200 4150 4300 4050
Entry Wire Line
	4200 3650 4300 3550
Wire Wire Line
	4300 3750 5550 3750
Wire Wire Line
	4300 3650 5550 3650
Text Label 4300 3650 0    50   ~ 0
BRR
Text Label 4300 3750 0    50   ~ 0
BRA
Text Label 2500 3000 2    50   ~ 0
~SSPND
Text Label 2500 3200 2    50   ~ 0
~LOWPWR
Text Label 2500 3300 2    50   ~ 0
~USBCFG
Text Label 2500 3500 2    50   ~ 0
BRA
Text Label 2500 3600 2    50   ~ 0
BRR
Wire Wire Line
	4300 3950 5550 3950
Wire Wire Line
	4300 4050 5550 4050
Text Label 4300 3550 0    50   ~ 0
~USBCFG
Entry Wire Line
	4600 4650 4700 4550
Wire Wire Line
	4700 4550 5550 4550
Entry Wire Line
	4600 4750 4700 4650
Wire Wire Line
	4700 4650 5550 4650
Entry Wire Line
	4700 4750 4600 4850
Wire Wire Line
	4700 4750 5550 4750
Text Label 5500 3950 2    50   ~ 0
~LOWPWR
Text Label 5500 4050 2    50   ~ 0
~SSPND
Text Label 4700 4750 0    50   ~ 0
MISO
Text Label 4700 4650 0    50   ~ 0
SCK
Text Label 4700 4550 0    50   ~ 0
MOSI
Entry Wire Line
	4600 5550 4500 5650
Wire Wire Line
	4500 5650 4150 5650
Text Label 4500 5650 2    50   ~ 0
MOSI
Text Label 4500 5750 2    50   ~ 0
SCK
Text Label 4500 5850 2    50   ~ 0
MISO
Entry Wire Line
	4500 5750 4600 5650
Entry Wire Line
	4500 5850 4600 5750
Wire Wire Line
	4500 5850 4100 5850
Wire Wire Line
	2500 5750 4200 5750
Entry Wire Line
	4500 5950 4600 5850
Entry Wire Line
	4500 6050 4600 5950
Wire Wire Line
	3200 6050 4500 6050
Connection ~ 3200 6050
Wire Wire Line
	4500 5950 2950 5950
Connection ~ 2950 5950
Text Label 4500 5950 2    50   ~ 0
~CSDAT
Text Label 4500 6050 2    50   ~ 0
~CSCON
Wire Wire Line
	3750 5250 4100 5250
Wire Wire Line
	4100 5250 4100 5850
Connection ~ 4100 5850
Wire Wire Line
	4100 5850 2500 5850
Wire Wire Line
	3750 5150 4150 5150
Wire Wire Line
	4150 5150 4150 5650
Connection ~ 4150 5650
Wire Wire Line
	4150 5650 2500 5650
Wire Wire Line
	3750 5050 4200 5050
Wire Wire Line
	4200 5050 4200 5750
Connection ~ 4200 5750
Wire Wire Line
	4200 5750 4500 5750
Entry Wire Line
	4600 5450 4500 5350
Text Label 4500 5350 2    50   ~ 0
CS_EXT
Wire Wire Line
	3750 5350 4500 5350
Wire Bus Line
	4600 6700 1200 6700
Entry Wire Line
	1200 5950 1300 5850
Entry Wire Line
	1200 6050 1300 5950
Wire Wire Line
	1300 5850 1700 5850
Entry Wire Line
	4600 4450 4700 4350
Wire Wire Line
	4700 4350 5550 4350
Text Label 4700 4350 0    50   ~ 0
RESET_RF
Entry Wire Line
	1100 5900 1200 6000
Wire Wire Line
	1100 5900 700  5900
Wire Wire Line
	700  5900 700  5750
Connection ~ 700  5750
Wire Bus Line
	4600 6700 6800 6700
Connection ~ 4600 6700
Entry Wire Line
	7550 3650 7650 3550
Entry Wire Line
	7550 3750 7650 3650
Entry Wire Line
	7550 3850 7650 3750
Wire Wire Line
	7550 3750 7150 3750
Wire Wire Line
	7150 3650 7550 3650
Wire Wire Line
	7550 3850 7150 3850
Wire Bus Line
	5300 2800 7800 2800
Wire Bus Line
	5300 2800 5300 3450
Entry Wire Line
	5100 3450 5000 3550
Entry Wire Line
	5100 3550 5200 3450
Entry Wire Line
	5200 3550 5300 3450
Entry Wire Line
	5000 3450 4900 3550
Wire Wire Line
	4300 3550 4900 3550
Wire Wire Line
	5200 3550 5200 3850
Wire Wire Line
	5200 3850 5550 3850
Text Label 5500 3850 2    50   ~ 0
INT
Text Label 5500 4250 2    50   ~ 0
CLK
Entry Wire Line
	7800 3850 7900 3950
Entry Wire Line
	7700 4050 7800 3950
Entry Wire Line
	7800 3950 7900 4050
Wire Wire Line
	7700 4050 7150 4050
Entry Wire Line
	7700 3950 7800 3850
Entry Wire Line
	4600 4350 4700 4250
Text Label 4700 4150 0    50   ~ 0
~CSDAT
Text Label 4700 4250 0    50   ~ 0
~CSCON
Entry Wire Line
	4600 4250 4700 4150
Wire Wire Line
	5100 3550 5100 4250
Wire Wire Line
	5100 4250 5550 4250
Wire Wire Line
	4700 4150 5550 4150
Wire Wire Line
	4700 4250 5000 4250
Wire Wire Line
	5000 4250 5000 3550
$Comp
L 0EsseivaN_Lib:CAPA C8
U 1 1 5CB96E3E
P 6600 3150
F 0 "C8" V 6547 3258 60  0000 L CNN
F 1 "100nF" V 6653 3258 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 6600 3150 60  0001 C CNN
F 3 "" H 6600 3150 60  0000 C CNN
	1    6600 3150
	0    1    1    0   
$EndComp
Text Label 7200 4050 0    50   ~ 0
~CSCON
Text Label 5500 4150 2    50   ~ 0
~CSDAT
Entry Wire Line
	3900 4500 4000 4600
Wire Wire Line
	4000 4600 4500 4600
Text Label 4000 4600 0    50   ~ 0
RESET_USB
Wire Wire Line
	5550 4850 5050 4850
Wire Wire Line
	4500 4950 4500 4600
Wire Wire Line
	5050 4950 4500 4950
Wire Wire Line
	5050 4850 5050 4950
Wire Bus Line
	4600 4250 3950 4250
Entry Wire Line
	3850 3600 3950 3700
Entry Wire Line
	3850 3700 3950 3800
Entry Wire Line
	3850 3800 3950 3900
Wire Wire Line
	3550 3600 3850 3600
Wire Wire Line
	3850 3700 3550 3700
Wire Wire Line
	3550 3800 3850 3800
Text Label 4100 3400 2    50   ~ 0
RESET_USB
Entry Wire Line
	4100 3400 4200 3500
Wire Wire Line
	3600 3400 4100 3400
Connection ~ 3600 3400
Text Label 10600 5350 2    50   ~ 0
GND
Text Label 10600 1650 2    50   ~ 0
5V
Text Label 10600 1750 2    50   ~ 0
3V3
Text Label 10600 1850 2    50   ~ 0
SDA
Text Label 10600 1950 2    50   ~ 0
SCL
Text Label 10600 2050 2    50   ~ 0
GND
Text Label 10600 900  2    50   ~ 0
5V
Text Label 10600 1000 2    50   ~ 0
3V3
Text Label 10600 1100 2    50   ~ 0
SDA
Text Label 10600 1200 2    50   ~ 0
SCL
Text Label 10600 1300 2    50   ~ 0
GND
Text Label 10600 2400 2    50   ~ 0
5V
Text Label 10600 2500 2    50   ~ 0
3V3
Text Label 10600 2600 2    50   ~ 0
SDA
Text Label 10600 2700 2    50   ~ 0
SCL
Text Label 10600 2800 2    50   ~ 0
GND
NoConn ~ 1150 2550
NoConn ~ 1150 2650
NoConn ~ 1150 2750
Text Notes 3150 2000 0    50   ~ 0
WARNING : Power MCP2210 and\nPIC with same voltages
$Comp
L 0EsseivaN_Lib:ULN200x U5
U 1 1 5CBECF1D
P 9200 5050
F 0 "U5" H 9225 4477 50  0000 C CNN
F 1 "ULN2003" H 9225 4386 50  0000 C CNN
F 2 "0EsseivaN_Lib:SOIC-16_3.9x9.9mm_Pitch1.27mm" H 9200 5050 50  0001 C CNN
F 3 "" H 9200 5050 50  0000 C CNN
	1    9200 5050
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:SW_2TO1 SW1
U 1 1 5CDC9373
P 2400 900
F 0 "SW1" H 2400 1181 50  0000 C CNN
F 1 "SW_2TO1" H 2400 1090 50  0000 C CNN
F 2 "0EsseivaN_Lib:SLB12814" H 2400 900 50  0001 C CNN
F 3 "" H 2400 900 50  0001 C CNN
	1    2400 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 900  3400 900 
Connection ~ 3650 900 
Wire Wire Line
	3650 1100 3650 900 
Wire Wire Line
	3750 1100 3650 1100
Text Notes 3500 700  0    50   ~ 0
5V TO 3V3 LDO
Text Label 3850 1350 0    50   ~ 0
GND
Text Label 4600 1000 0    50   ~ 0
3V3
Connection ~ 4800 1000
Wire Wire Line
	4800 1000 4800 1050
Connection ~ 4150 1350
Wire Wire Line
	4800 1350 4800 1250
Wire Wire Line
	4150 1350 4800 1350
$Comp
L 0EsseivaN_Lib:CAPA_P C7
U 1 1 5CCD94D7
P 4800 1150
F 0 "C7" V 4764 1258 60  0000 L CNN
F 1 "1uF" V 4870 1258 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 4800 1150 60  0001 C CNN
F 3 "" H 4800 1150 60  0000 C CNN
	1    4800 1150
	0    1    1    0   
$EndComp
Wire Wire Line
	4800 950  4800 1000
$Comp
L 0EsseivaN_Lib:3V3 #PWR0118
U 1 1 5CCD0867
P 4800 950
F 0 "#PWR0118" H 4800 800 50  0001 C CNN
F 1 "3V3" H 4817 1120 45  0000 C CNN
F 2 "" H 4800 950 50  0000 C CNN
F 3 "" H 4800 950 50  0000 C CNN
	1    4800 950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	4550 1000 4800 1000
Wire Wire Line
	3300 1400 3300 1350
Connection ~ 3300 1350
Wire Wire Line
	4150 1350 4150 1300
Wire Wire Line
	3300 1350 4150 1350
Wire Wire Line
	3750 900  3650 900 
$Comp
L 0EsseivaN_Lib:NCP114 U2
U 1 1 5CC9D2C7
P 4150 1000
F 0 "U2" H 4350 1350 50  0000 C CNN
F 1 "NCP114" H 4350 1250 50  0000 C CNN
F 2 "0EsseivaN_Lib:SOT-23-5_HandSoldering" H 4050 1000 50  0001 C CNN
F 3 "" H 4050 1000 50  0001 C CNN
	1    4150 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 1150 3300 1350
Text Label 3150 900  0    50   ~ 0
5V
$Comp
L 0EsseivaN_Lib:5V #PWR0115
U 1 1 5CB6770D
P 3300 850
F 0 "#PWR0115" H 3300 700 50  0001 C CNN
F 1 "5V" H 3317 1020 45  0000 C CNN
F 2 "" H 3300 850 50  0000 C CNN
F 3 "" H 3300 850 50  0000 C CNN
	1    3300 850 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 850  3300 900 
$Comp
L 0EsseivaN_Lib:CAPA_P C2
U 1 1 5CB87644
P 3300 1050
F 0 "C2" V 3264 1158 60  0000 L CNN
F 1 "10uF" V 3370 1158 60  0000 L CNN
F 2 "0EsseivaN_Lib:CP_Radial_D5.0mm_P2.00mm" H 3300 1050 60  0001 C CNN
F 3 "" H 3300 1050 60  0000 C CNN
	1    3300 1050
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR0114
U 1 1 5CB90A85
P 3300 1400
F 0 "#PWR0114" H 3300 1100 50  0001 C CNN
F 1 "GND" H 3300 1200 50  0001 C CNN
F 2 "" H 3300 1400 50  0000 C CNN
F 3 "" H 3300 1400 50  0000 C CNN
	1    3300 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 950  3300 900 
Connection ~ 3300 900 
$Comp
L 0EsseivaN_Lib:Fuse F1
U 1 1 5CB94C5C
P 2900 900
F 0 "F1" V 2703 900 50  0000 C CNN
F 1 "500mA" V 2794 900 50  0000 C CNN
F 2 "0EsseivaN_Lib:Fuse_SMD1206_HandSoldering" V 2830 900 50  0001 C CNN
F 3 "" H 2900 900 50  0000 C CNN
	1    2900 900 
	0    1    1    0   
$EndComp
Wire Wire Line
	3100 900  3300 900 
Wire Wire Line
	2600 900  2700 900 
Wire Wire Line
	2100 1000 2200 1000
Wire Wire Line
	1550 800  2200 800 
Wire Bus Line
	7650 6350 6800 6350
Wire Bus Line
	6800 6350 6800 6700
Wire Wire Line
	8750 4650 7150 4650
Wire Wire Line
	7150 4750 8750 4750
Wire Wire Line
	8750 4850 7150 4850
Wire Wire Line
	7150 4950 8750 4950
Wire Wire Line
	8750 5050 7150 5050
Wire Wire Line
	7150 5150 8750 5150
Wire Wire Line
	8750 5250 7150 5250
Wire Wire Line
	9700 5250 10650 5250
Wire Wire Line
	9700 5050 10650 5050
Wire Wire Line
	10650 5150 9700 5150
Wire Wire Line
	9700 4950 10650 4950
Wire Wire Line
	10650 4850 9700 4850
Wire Wire Line
	9700 4750 10650 4750
Wire Wire Line
	10650 4650 9700 4650
$Comp
L 0EsseivaN_Lib:GND #PWR0135
U 1 1 5D017725
P 8650 5550
F 0 "#PWR0135" H 8650 5250 50  0001 C CNN
F 1 "GND" H 8650 5350 50  0001 C CNN
F 2 "" H 8650 5550 50  0000 C CNN
F 3 "" H 8650 5550 50  0000 C CNN
	1    8650 5550
	1    0    0    -1  
$EndComp
Wire Wire Line
	8650 5550 8650 5450
Wire Wire Line
	8650 5450 8750 5450
Wire Wire Line
	10650 3950 7900 3950
Wire Wire Line
	7900 4050 10650 4050
Wire Wire Line
	10650 4150 7150 4150
Wire Wire Line
	7150 4250 10650 4250
Wire Wire Line
	10650 4350 7150 4350
Wire Wire Line
	7150 4550 7500 4550
Wire Wire Line
	7500 4550 7500 4450
Wire Wire Line
	7500 4450 10650 4450
Wire Wire Line
	10200 3850 10650 3850
Wire Wire Line
	10650 3750 10350 3750
Text Label 10500 5250 0    50   ~ 0
P1
Text Label 10500 5150 0    50   ~ 0
P2
Text Label 10500 5050 0    50   ~ 0
P3
Text Label 10500 4950 0    50   ~ 0
P4
Text Label 10500 4850 0    50   ~ 0
P5
Text Label 10500 4750 0    50   ~ 0
P6
Text Label 10500 4650 0    50   ~ 0
P7
Text Label 7200 4650 0    50   ~ 0
IP1
Text Label 7200 4750 0    50   ~ 0
IP2
Text Label 7200 4850 0    50   ~ 0
IP3
Text Label 7200 4950 0    50   ~ 0
IP4
Text Label 7200 5050 0    50   ~ 0
IP5
Text Label 7200 5150 0    50   ~ 0
IP6
Text Label 7200 5250 0    50   ~ 0
IP7
Text Label 7200 4550 0    50   ~ 0
D4
Text Label 7200 4350 0    50   ~ 0
D3
Text Label 7200 4250 0    50   ~ 0
D2
Text Label 7200 4150 0    50   ~ 0
D1
Text Label 7900 4050 0    50   ~ 0
CLK
Text Label 7900 3950 0    50   ~ 0
INT
$Comp
L 0EsseivaN_Lib:CONN_01X02 X5
U 1 1 5CBFA677
P 10850 5600
F 0 "X5" H 10928 5641 50  0000 L CNN
F 1 "EXTENDER_COM" H 10928 5550 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_02P" H 10850 5450 50  0001 C CNN
F 3 "" H 10700 5400 50  0000 C CNN
	1    10850 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	10550 5600 10250 5600
Wire Wire Line
	10250 5600 10250 5450
Wire Wire Line
	10250 5450 10150 5450
Text Label 9750 5450 0    50   ~ 0
COM
$Comp
L 0EsseivaN_Lib:LED_RGB P2
U 1 1 5CC311F2
P 8100 1750
F 0 "P2" V 7922 2194 60  0000 L CNN
F 1 "150141M173100" V 8028 2194 60  0000 L CNN
F 2 "0EsseivaN_Lib:LED_RGB_1411" H 8100 1900 60  0001 C CNN
F 3 "" H 8100 1900 60  0000 C CNN
	1    8100 1750
	0    1    1    0   
$EndComp
Wire Wire Line
	7750 2000 7750 1900
Wire Wire Line
	8000 1900 8000 2000
Wire Wire Line
	8250 2000 8250 1900
Wire Wire Line
	8500 1300 8500 1350
Wire Wire Line
	10550 5600 10550 5500
Wire Wire Line
	10550 5500 10650 5500
Wire Wire Line
	10550 5600 10550 5700
Wire Wire Line
	10550 5700 10650 5700
Connection ~ 10550 5600
$Comp
L 0EsseivaN_Lib:CAPA C9
U 1 1 5CE24849
P 10150 5550
F 0 "C9" V 10250 5650 60  0000 L CNN
F 1 "100nF" V 10350 5600 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 10150 5550 60  0001 C CNN
F 3 "" H 10150 5550 60  0000 C CNN
	1    10150 5550
	0    1    1    0   
$EndComp
Connection ~ 10150 5450
Wire Wire Line
	10150 5450 9700 5450
$Comp
L 0EsseivaN_Lib:GND #PWR02
U 1 1 5CE26235
P 10150 5650
F 0 "#PWR02" H 10150 5350 50  0001 C CNN
F 1 "GND" H 10150 5450 50  0001 C CNN
F 2 "" H 10150 5650 50  0000 C CNN
F 3 "" H 10150 5650 50  0000 C CNN
	1    10150 5650
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 5CD92D9E
P 3400 700
F 0 "#FLG0101" H 3400 775 50  0001 C CNN
F 1 "PWR_FLAG" H 3400 873 50  0000 C CNN
F 2 "" H 3400 700 50  0001 C CNN
F 3 "~" H 3400 700 50  0001 C CNN
	1    3400 700 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 700  3400 900 
Connection ~ 3400 900 
Wire Wire Line
	3400 900  3300 900 
$Comp
L 0EsseivaN_Lib:CONN_01X03 X6
U 1 1 5CD3DBAD
P 5450 950
F 0 "X6" H 5367 1273 50  0000 C CNN
F 1 "MCU_POWER_SELECT" H 5367 1364 50  0000 C CNN
F 2 "0EsseivaN_Lib:Pin_Header_Straight_1x03_Pitch2.54mm" H 5367 817 50  0001 C CNN
F 3 "" H 5300 750 50  0000 C CNN
	1    5450 950 
	-1   0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:5V #PWR0136
U 1 1 5CD3EE7C
P 5850 900
F 0 "#PWR0136" H 5850 750 50  0001 C CNN
F 1 "5V" H 5867 1070 45  0000 C CNN
F 2 "" H 5850 900 50  0000 C CNN
F 3 "" H 5850 900 50  0000 C CNN
	1    5850 900 
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0137
U 1 1 5CD3F192
P 6150 900
F 0 "#PWR0137" H 6150 750 50  0001 C CNN
F 1 "3V3" H 6167 1070 45  0000 C CNN
F 2 "" H 6150 900 50  0000 C CNN
F 3 "" H 6150 900 50  0000 C CNN
	1    6150 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 900  5850 950 
Wire Wire Line
	5850 950  5650 950 
Wire Wire Line
	5650 1150 6150 1150
Wire Wire Line
	6150 1150 6150 900 
$Comp
L 0EsseivaN_Lib:VCC #PWR0138
U 1 1 5CD8ED8A
P 6000 900
F 0 "#PWR0138" H 6000 750 50  0001 C CNN
F 1 "VCC" H 6017 1073 50  0000 C CNN
F 2 "" H 6000 900 50  0000 C CNN
F 3 "" H 6000 900 50  0000 C CNN
	1    6000 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 900  6000 1050
Wire Wire Line
	6000 1050 5650 1050
$Comp
L 0EsseivaN_Lib:VCC #PWR0104
U 1 1 5CDA78CE
P 3050 2050
F 0 "#PWR0104" H 3050 1900 50  0001 C CNN
F 1 "VCC" H 3067 2223 50  0000 C CNN
F 2 "" H 3050 2050 50  0000 C CNN
F 3 "" H 3050 2050 50  0000 C CNN
	1    3050 2050
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:VCC #PWR0122
U 1 1 5CDA9820
P 6600 3050
F 0 "#PWR0122" H 6600 2900 50  0001 C CNN
F 1 "VCC" H 6617 3223 50  0000 C CNN
F 2 "" H 6600 3050 50  0000 C CNN
F 3 "" H 6600 3050 50  0000 C CNN
	1    6600 3050
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:VCC #PWR0139
U 1 1 5CDA9D2E
P 8500 2800
F 0 "#PWR0139" H 8500 2650 50  0001 C CNN
F 1 "VCC" H 8447 2837 50  0000 R CNN
F 2 "" H 8500 2800 50  0000 C CNN
F 3 "" H 8500 2800 50  0000 C CNN
	1    8500 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	8500 2800 8500 3300
Wire Wire Line
	8500 3300 9450 3300
Wire Wire Line
	9450 3400 8500 3400
Wire Wire Line
	8500 3400 8500 3300
Connection ~ 8500 3300
Text Label 9400 3300 2    50   ~ 0
VCC
Text Label 9400 3400 2    50   ~ 0
VCC
$Comp
L power:PWR_FLAG #FLG0102
U 1 1 5CE6BEF9
P 6350 900
F 0 "#FLG0102" H 6350 975 50  0001 C CNN
F 1 "PWR_FLAG" H 6418 942 50  0000 L CNN
F 2 "" H 6350 900 50  0001 C CNN
F 3 "~" H 6350 900 50  0001 C CNN
	1    6350 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	6350 900  6350 1050
Wire Wire Line
	6350 1050 6000 1050
Connection ~ 6000 1050
Wire Wire Line
	7150 3950 7700 3950
Text Label 7200 5450 0    50   ~ 0
LED_B
Text Label 7200 5550 0    50   ~ 0
LED_G
Text Label 7200 5650 0    50   ~ 0
LED_R
Wire Wire Line
	7150 5450 8150 5450
Wire Wire Line
	8150 5450 8150 2700
Wire Wire Line
	8150 2700 7750 2700
Wire Wire Line
	7150 5550 8200 5550
Wire Wire Line
	8200 5550 8200 2650
Wire Wire Line
	8200 2650 8000 2650
Wire Wire Line
	7150 5650 8250 5650
Wire Wire Line
	8250 2400 8250 5650
Wire Wire Line
	8000 2400 8000 2650
Wire Wire Line
	7750 2400 7750 2700
$Comp
L 0EsseivaN_Lib:VCC #PWR0116
U 1 1 5D080FD6
P 2150 2300
F 0 "#PWR0116" H 2150 2150 50  0001 C CNN
F 1 "VCC" H 2097 2337 50  0000 R CNN
F 2 "" H 2150 2300 50  0000 C CNN
F 3 "" H 2150 2300 50  0000 C CNN
	1    2150 2300
	1    0    0    -1  
$EndComp
Wire Bus Line
	1850 4500 4200 4500
Wire Bus Line
	7800 2800 7800 3950
Wire Bus Line
	1200 5950 1200 6700
Wire Bus Line
	7650 3550 7650 6350
Wire Bus Line
	5000 3450 5300 3450
Wire Bus Line
	3950 3700 3950 4250
Wire Bus Line
	1850 3100 1850 4500
Wire Bus Line
	4200 3500 4200 4500
Wire Bus Line
	4600 4250 4600 6700
$EndSCHEMATC
