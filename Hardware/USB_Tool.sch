EESchema Schematic File Version 4
LIBS:USB_Tool-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "USB_Tool"
Date "2019-06-17"
Rev "4"
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
P 4950 3150
F 0 "#PWR0106" H 4950 2850 50  0001 C CNN
F 1 "GND" H 4950 2950 50  0001 C CNN
F 2 "" H 4950 3150 50  0000 C CNN
F 3 "" H 4950 3150 50  0000 C CNN
	1    4950 3150
	-1   0    0    -1  
$EndComp
Wire Wire Line
	4950 3150 4950 3100
$Comp
L 0EsseivaN_Lib:3V3 #PWR0107
U 1 1 5CB77422
P 4150 2250
F 0 "#PWR0107" H 4150 2100 50  0001 C CNN
F 1 "3V3" H 4168 2420 45  0000 C CNN
F 2 "" H 4150 2250 50  0000 C CNN
F 3 "" H 4150 2250 50  0000 C CNN
	1    4150 2250
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0109
U 1 1 5CB794E8
P 4950 2400
F 0 "#PWR0109" H 4950 2250 50  0001 C CNN
F 1 "3V3" H 4968 2570 45  0000 C CNN
F 2 "" H 4950 2400 50  0000 C CNN
F 3 "" H 4950 2400 50  0000 C CNN
	1    4950 2400
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
Wire Wire Line
	4150 2250 4150 2300
Wire Wire Line
	4350 2350 4350 2300
Wire Wire Line
	4350 2300 4150 2300
Connection ~ 4150 2300
Wire Wire Line
	4150 2300 4150 2900
$Comp
L 0EsseivaN_Lib:GND #PWR0111
U 1 1 5CB8C722
P 4350 2550
F 0 "#PWR0111" H 4350 2250 50  0001 C CNN
F 1 "GND" H 4350 2350 50  0001 C CNN
F 2 "" H 4350 2550 50  0000 C CNN
F 3 "" H 4350 2550 50  0000 C CNN
	1    4350 2550
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R3
U 1 1 5CB8D825
P 4950 2650
F 0 "R3" H 4880 2604 50  0000 R CNN
F 1 "1k" H 4880 2695 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 4880 2650 50  0001 C CNN
F 3 "" H 4950 2650 50  0000 C CNN
	1    4950 2650
	-1   0    0    1   
$EndComp
Wire Wire Line
	4950 2850 4950 2900
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
F 1 "150R" H 2220 2455 50  0000 L CNN
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
	4950 2400 4950 2450
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
Text GLabel 8450 2800 0    50   BiDi ~ 0
SCL
Text GLabel 5300 5050 0    50   BiDi ~ 0
SDA
Wire Wire Line
	5300 5050 5550 5050
Text GLabel 5300 4950 0    50   BiDi ~ 0
SCL
Wire Wire Line
	5300 4950 5550 4950
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
Text Label 5500 4850 2    50   ~ 0
RESET_USB
Text Label 5500 4350 2    50   ~ 0
RESET_RF
Text Label 800  5850 0    50   ~ 0
IRQ0
Text Label 800  5950 0    50   ~ 0
IRQ1
Text Label 800  5750 0    50   ~ 0
RESET_RF
Text Notes 4400 3400 0    50   ~ 0
12MHz\noscillator
$Comp
L 0EsseivaN_Lib:CONN_01X02 X7
U 1 1 5CD07818
P 9600 2750
F 0 "X7" H 9678 2791 50  0000 L CNN
F 1 "Extender_I2C_1" H 9678 2700 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_02P" H 9600 2750 50  0001 C CNN
F 3 "~" H 9600 2750 50  0001 C CNN
	1    9600 2750
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_01X02 X8
U 1 1 5CD4A4FD
P 9600 3000
F 0 "X8" H 9678 3041 50  0000 L CNN
F 1 "Extender_I2C_2" H 9678 2950 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_02P" H 9600 3000 50  0001 C CNN
F 3 "~" H 9600 3000 50  0001 C CNN
	1    9600 3000
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_01X02 X9
U 1 1 5CD4ABB8
P 9600 3250
F 0 "X9" H 9678 3291 50  0000 L CNN
F 1 "Extender_I2C_3" H 9678 3200 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_02P" H 9600 3250 50  0001 C CNN
F 3 "~" H 9600 3250 50  0001 C CNN
	1    9600 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	1150 2150 2100 2150
Text GLabel 8450 2700 0    50   BiDi ~ 0
SDA
$Comp
L 0EsseivaN_Lib:DSC6003JI2A Y1
U 1 1 5CB74EB9
P 4550 3000
F 0 "Y1" H 4550 3367 50  0000 C CNN
F 1 "DSC6003JI2A" H 4550 3276 50  0000 C CNN
F 2 "0EsseivaN_Lib:Oscillator_SMD_4pin_2.5x2.0mm_HandSoldering" H 4550 3000 50  0001 C CNN
F 3 "https://www.digikey.ch/product-detail/en/microchip-technology/DSC6003JI2A-012.0000T/DSC6003JI2A-012.0000TCT-ND/8042515" H 4550 3000 50  0001 C CNN
	1    4550 3000
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
Connection ~ 3050 2100
Wire Wire Line
	3050 2050 3050 2100
NoConn ~ 2550 2800
NoConn ~ 2550 2900
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
P 9950 4500
F 0 "R7" H 10020 4546 50  0000 L CNN
F 1 "180R" H 10020 4455 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 9880 4500 50  0001 C CNN
F 3 "" H 9950 4500 50  0000 C CNN
	1    9950 4500
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R6
U 1 1 5CB8029A
P 9700 4500
F 0 "R6" H 9631 4546 50  0000 R CNN
F 1 "180R" H 9631 4455 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 9630 4500 50  0001 C CNN
F 3 "" H 9700 4500 50  0000 C CNN
	1    9700 4500
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_01X08 X3
U 1 1 5CBD795A
P 8800 4900
F 0 "X3" H 8878 4849 50  0000 L CNN
F 1 "EXTENDER_IO_2" H 8878 4940 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_08P" H 8800 4900 50  0001 C CNN
F 3 "" H 8800 4900 50  0000 C CNN
	1    8800 4900
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0129
U 1 1 5CD236F8
P 9350 1100
F 0 "#PWR0129" H 9350 950 50  0001 C CNN
F 1 "3V3" H 9350 1250 45  0000 C CNN
F 2 "" H 9350 1100 50  0000 C CNN
F 3 "" H 9350 1100 50  0000 C CNN
	1    9350 1100
	-1   0    0    -1  
$EndComp
Wire Wire Line
	9350 1100 9350 1400
$Comp
L 0EsseivaN_Lib:CONN_01X04 X1
U 1 1 5CE40C42
P 3550 5250
F 0 "X1" H 3467 5665 50  0000 C CNN
F 1 "EXTENDER_SPI_1" H 3467 5574 50  0000 C CNN
F 2 "0EsseivaN_Lib:CH_04P" H 3550 5250 50  0001 C CNN
F 3 "" H 3550 5250 50  0000 C CNN
	1    3550 5250
	-1   0    0    -1  
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
F 1 "3V3" H 3067 5070 45  0000 C CNN
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
Text Label 8550 3950 2    50   ~ 0
INT
Text Label 8550 4050 2    50   ~ 0
CLK
Text Label 8550 4250 2    50   ~ 0
D2
Text Label 8550 4350 2    50   ~ 0
D3
Text Label 8550 4550 2    50   ~ 0
D4
Text Label 8550 4150 2    50   ~ 0
D1
Text Label 7200 3650 0    50   ~ 0
IRQ0
Text Label 7200 3750 0    50   ~ 0
IRQ1
Text Label 7200 3850 0    50   ~ 0
CS_EXT
Text Label 3800 5350 0    50   ~ 0
CS_EXT
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
Entry Wire Line
	4500 5950 4600 5850
Entry Wire Line
	4500 6050 4600 5950
Connection ~ 3200 6050
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
	3750 5150 4150 5150
Wire Wire Line
	4150 5150 4150 5650
Connection ~ 4150 5650
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
	4600 6700 700  6700
Entry Wire Line
	700  5950 800  5850
Entry Wire Line
	700  6050 800  5950
Entry Wire Line
	4600 4450 4700 4350
Wire Wire Line
	4700 4350 5550 4350
Text Label 4700 4350 0    50   ~ 0
RESET_RF
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
	5300 2700 7800 2700
Wire Bus Line
	5300 2700 5300 3450
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
Text Label 9350 2950 2    50   ~ 0
SDA
Text Label 9350 3050 2    50   ~ 0
SCL
Text Label 9350 2700 2    50   ~ 0
SDA
Text Label 9350 2800 2    50   ~ 0
SCL
Text Label 9350 3200 2    50   ~ 0
SDA
Text Label 9350 3300 2    50   ~ 0
SCL
NoConn ~ 1150 2550
NoConn ~ 1150 2650
NoConn ~ 1150 2750
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
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 3300 1050 60  0001 C CNN
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
F 2 "0EsseivaN_Lib:Fuse_SMD2410_HandSoldering" V 2830 900 50  0001 C CNN
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
L 0EsseivaN_Lib:LED_RGB P2
U 1 1 5CC311F2
P 10050 4050
F 0 "P2" V 9872 4278 60  0000 L CNN
F 1 "150141M173100" V 9978 4278 60  0000 L CNN
F 2 "0EsseivaN_Lib:LED_RGB_1411" H 10050 4200 60  0001 C CNN
F 3 "" H 10050 4200 60  0000 C CNN
	1    10050 4050
	0    1    1    0   
$EndComp
Wire Wire Line
	9700 4300 9700 4200
Wire Wire Line
	9950 4200 9950 4300
Wire Wire Line
	10200 4300 10200 4200
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
L 0EsseivaN_Lib:5V #PWR0136
U 1 1 5CD3EE7C
P 6500 1100
F 0 "#PWR0136" H 6500 950 50  0001 C CNN
F 1 "5V" H 6517 1270 45  0000 C CNN
F 2 "" H 6500 1100 50  0000 C CNN
F 3 "" H 6500 1100 50  0000 C CNN
	1    6500 1100
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0137
U 1 1 5CD3F192
P 7000 1100
F 0 "#PWR0137" H 7000 950 50  0001 C CNN
F 1 "3V3" H 7017 1270 45  0000 C CNN
F 2 "" H 7000 1100 50  0000 C CNN
F 3 "" H 7000 1100 50  0000 C CNN
	1    7000 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 3950 7700 3950
Text Label 7200 5450 0    50   ~ 0
LED_B
Text Label 7200 5550 0    50   ~ 0
LED_G
Text Label 7200 5650 0    50   ~ 0
LED_R
$Comp
L 0EsseivaN_Lib:R R12
U 1 1 5CF64F77
P 8650 2450
F 0 "R12" H 8581 2404 50  0000 R CNN
F 1 "1k" H 8581 2495 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 8580 2450 50  0001 C CNN
F 3 "" H 8650 2450 50  0000 C CNN
	1    8650 2450
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:R R13
U 1 1 5CF8F027
P 8900 2450
F 0 "R13" H 8970 2404 50  0000 L CNN
F 1 "1k" H 8970 2495 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 8830 2450 50  0001 C CNN
F 3 "" H 8900 2450 50  0000 C CNN
	1    8900 2450
	1    0    0    1   
$EndComp
Wire Wire Line
	8650 2250 8650 2200
Wire Wire Line
	8650 2200 8900 2200
Wire Wire Line
	8900 2200 8900 2250
Wire Wire Line
	8900 2150 8900 2200
Connection ~ 8900 2200
Wire Wire Line
	8650 2650 8650 2700
Connection ~ 8650 2700
Wire Wire Line
	8650 2700 8450 2700
Wire Wire Line
	8900 2650 8900 2800
Connection ~ 8900 2800
Wire Wire Line
	8900 2800 8450 2800
Wire Wire Line
	9950 3600 9950 3650
$Comp
L 0EsseivaN_Lib:CONN_01X03 X5
U 1 1 5D1643B1
P 10350 1500
F 0 "X5" H 10428 1591 50  0000 L CNN
F 1 "EXTENDER_POWER_2" H 10428 1500 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_03P" H 10350 1500 50  0001 C CNN
F 3 "" H 10350 1500 50  0000 C CNN
	1    10350 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	10200 4700 10200 5650
Wire Wire Line
	9950 4700 9950 5550
Wire Wire Line
	9700 4700 9700 5450
Wire Wire Line
	9350 1400 9750 1400
Text Label 10100 1400 2    50   ~ 0
3V3
Text Label 10100 1500 2    50   ~ 0
GND
Wire Wire Line
	8650 2700 9150 2700
Wire Wire Line
	8900 2800 9050 2800
Wire Wire Line
	9400 2950 9150 2950
Wire Wire Line
	9150 2950 9150 2700
Connection ~ 9150 2700
Wire Wire Line
	9150 2700 9400 2700
Wire Wire Line
	9400 3200 9150 3200
Wire Wire Line
	9150 3200 9150 2950
Connection ~ 9150 2950
Wire Wire Line
	9400 3050 9050 3050
Wire Wire Line
	9050 3050 9050 2800
Connection ~ 9050 2800
Wire Wire Line
	9050 2800 9400 2800
Wire Wire Line
	9400 3300 9050 3300
Wire Wire Line
	9050 3300 9050 3050
Connection ~ 9050 3050
$Comp
L 0EsseivaN_Lib:CONN_01X03 X4
U 1 1 5D5286E7
P 10350 1950
F 0 "X4" H 10428 2041 50  0000 L CNN
F 1 "EXTENDER_POWER_2" H 10428 1950 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_03P" H 10350 1950 50  0001 C CNN
F 3 "" H 10350 1950 50  0000 C CNN
	1    10350 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	10150 1850 9750 1850
Connection ~ 9750 1400
Wire Wire Line
	9750 1400 10150 1400
Wire Wire Line
	9750 1400 9750 1850
$Comp
L 0EsseivaN_Lib:GND #PWR0105
U 1 1 5D58C790
P 9550 2000
F 0 "#PWR0105" H 9550 1700 50  0001 C CNN
F 1 "GND" H 9550 1800 50  0001 C CNN
F 2 "" H 9550 2000 50  0000 C CNN
F 3 "" H 9550 2000 50  0000 C CNN
	1    9550 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	9550 2000 9550 1950
Wire Wire Line
	9550 1500 9550 1950
Wire Wire Line
	9550 1500 10150 1500
Connection ~ 9550 1950
Wire Wire Line
	9550 1950 10150 1950
Text Label 10100 1850 2    50   ~ 0
3V3
Text Label 10100 1950 2    50   ~ 0
GND
$Comp
L 0EsseivaN_Lib:CONN_01X05 X2
U 1 1 5D606672
P 8800 4250
F 0 "X2" H 8878 4391 50  0000 L CNN
F 1 "EXTENDER_IO_1" H 8878 4300 50  0000 L CNN
F 2 "0EsseivaN_Lib:CH_05P" H 8800 4250 50  0001 C CNN
F 3 "" H 8800 4250 50  0000 C CNN
	1    8800 4250
	1    0    0    -1  
$EndComp
Text Label 7200 4650 0    50   ~ 0
D5
Text Label 7200 4750 0    50   ~ 0
D6
Text Label 7200 4850 0    50   ~ 0
D7
Text Label 7200 4950 0    50   ~ 0
D8
Text Label 7200 5050 0    50   ~ 0
D9
Text Label 7200 5150 0    50   ~ 0
D10
Text Label 7200 5250 0    50   ~ 0
D11
Text Label 8550 4650 2    50   ~ 0
D5
Text Label 8550 4750 2    50   ~ 0
D6
Text Label 8550 4850 2    50   ~ 0
D7
Text Label 8550 4950 2    50   ~ 0
D8
Text Label 8550 5050 2    50   ~ 0
D9
Text Label 8550 5150 2    50   ~ 0
D10
Text Label 8550 5250 2    50   ~ 0
D11
Wire Wire Line
	8600 3950 7900 3950
Wire Wire Line
	7900 4050 8600 4050
Wire Wire Line
	8600 4150 7150 4150
Wire Wire Line
	8600 4250 7150 4250
Wire Wire Line
	8600 4350 7150 4350
Wire Wire Line
	8600 4550 7150 4550
Wire Wire Line
	8600 4650 7150 4650
Wire Wire Line
	8600 4750 7150 4750
Wire Wire Line
	8600 4850 7150 4850
Wire Wire Line
	8600 4950 7150 4950
Wire Wire Line
	8600 5050 7150 5050
Wire Wire Line
	8600 5150 7150 5150
Wire Wire Line
	8600 5250 7150 5250
Wire Wire Line
	7150 5650 10200 5650
Wire Wire Line
	7150 5550 9950 5550
Wire Wire Line
	7150 5450 9700 5450
$Comp
L 0EsseivaN_Lib:LED P3
U 1 1 5D08D1FC
P 6500 1750
F 0 "P3" V 6447 1828 60  0000 L CNN
F 1 "Green" V 6553 1828 60  0000 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 6500 1750 60  0001 C CNN
F 3 "" H 6500 1750 60  0000 C CNN
	1    6500 1750
	0    1    1    0   
$EndComp
Wire Wire Line
	6500 1850 6500 1900
$Comp
L 0EsseivaN_Lib:R R14
U 1 1 5D0D5366
P 6500 1400
F 0 "R14" H 6570 1446 50  0000 L CNN
F 1 "270R" H 6570 1355 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 6430 1400 50  0001 C CNN
F 3 "" H 6500 1400 50  0000 C CNN
	1    6500 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 1600 6500 1650
$Comp
L 0EsseivaN_Lib:R R15
U 1 1 5D14E7A4
P 7000 1400
F 0 "R15" H 7070 1446 50  0000 L CNN
F 1 "120R" H 7070 1355 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 6930 1400 50  0001 C CNN
F 3 "" H 7000 1400 50  0000 C CNN
	1    7000 1400
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:LED P4
U 1 1 5D14EE26
P 7000 1750
F 0 "P4" V 6947 1828 60  0000 L CNN
F 1 "Green" V 7053 1828 60  0000 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 7000 1750 60  0001 C CNN
F 3 "" H 7000 1750 60  0000 C CNN
	1    7000 1750
	0    1    1    0   
$EndComp
Wire Wire Line
	7000 1600 7000 1650
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
Entry Wire Line
	700  5850 800  5750
$Comp
L 0EsseivaN_Lib:3V3 #PWR0121
U 1 1 5CB93503
P 1250 5150
F 0 "#PWR0121" H 1250 5000 50  0001 C CNN
F 1 "3V3" H 1267 5320 45  0000 C CNN
F 2 "" H 1250 5150 50  0000 C CNN
F 3 "" H 1250 5150 50  0000 C CNN
	1    1250 5150
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R5
U 1 1 5CB7D3C5
P 1250 5400
F 0 "R5" H 1181 5354 50  0000 R CNN
F 1 "1k" H 1181 5445 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 1180 5400 50  0001 C CNN
F 3 "" H 1250 5400 50  0000 C CNN
	1    1250 5400
	1    0    0    1   
$EndComp
Wire Wire Line
	800  5750 1250 5750
Wire Wire Line
	1250 5600 1250 5750
Wire Wire Line
	1250 5150 1250 5200
$Comp
L 0EsseivaN_Lib:3V3 #PWR0104
U 1 1 5D21FE29
P 3050 2050
F 0 "#PWR0104" H 3050 1900 50  0001 C CNN
F 1 "3V3" H 3067 2220 45  0000 C CNN
F 2 "" H 3050 2050 50  0000 C CNN
F 3 "" H 3050 2050 50  0000 C CNN
	1    3050 2050
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0116
U 1 1 5D220D5A
P 2150 2300
F 0 "#PWR0116" H 2150 2150 50  0001 C CNN
F 1 "3V3" H 2167 2470 45  0000 C CNN
F 2 "" H 2150 2300 50  0000 C CNN
F 3 "" H 2150 2300 50  0000 C CNN
	1    2150 2300
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0119
U 1 1 5D221C98
P 6600 3000
F 0 "#PWR0119" H 6600 2850 50  0001 C CNN
F 1 "3V3" H 6617 3170 45  0000 C CNN
F 2 "" H 6600 3000 50  0000 C CNN
F 3 "" H 6600 3000 50  0000 C CNN
	1    6600 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 3000 6600 3050
$Comp
L 0EsseivaN_Lib:3V3 #PWR0120
U 1 1 5D246C6A
P 8900 2150
F 0 "#PWR0120" H 8900 2000 50  0001 C CNN
F 1 "3V3" H 8917 2320 45  0000 C CNN
F 2 "" H 8900 2150 50  0000 C CNN
F 3 "" H 8900 2150 50  0000 C CNN
	1    8900 2150
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R8
U 1 1 5CB800DB
P 10200 4500
F 0 "R8" H 10270 4546 50  0000 L CNN
F 1 "270R" H 10270 4455 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 10130 4500 50  0001 C CNN
F 3 "" H 10200 4500 50  0000 C CNN
	1    10200 4500
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:5V #PWR0124
U 1 1 5CBB4994
P 9950 3600
F 0 "#PWR0124" H 9950 3450 50  0001 C CNN
F 1 "5V" H 9967 3770 45  0000 C CNN
F 2 "" H 9950 3600 50  0000 C CNN
F 3 "" H 9950 3600 50  0000 C CNN
	1    9950 3600
	1    0    0    -1  
$EndComp
Text Label 10100 1750 2    50   ~ 0
5V
Text Label 10100 1300 2    50   ~ 0
5V
Wire Wire Line
	10150 1750 9850 1750
Wire Wire Line
	9850 1750 9850 1300
Wire Wire Line
	10150 1300 9850 1300
Connection ~ 9850 1300
Wire Wire Line
	9850 1300 9500 1300
Wire Wire Line
	9500 1100 9500 1300
$Comp
L 0EsseivaN_Lib:5V #PWR0128
U 1 1 5CD236ED
P 9500 1100
F 0 "#PWR0128" H 9500 950 50  0001 C CNN
F 1 "5V" H 9500 1250 45  0000 C CNN
F 2 "" H 9500 1100 50  0000 C CNN
F 3 "" H 9500 1100 50  0000 C CNN
	1    9500 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1250 5750 1700 5750
Connection ~ 1250 5750
Wire Wire Line
	800  5850 1700 5850
Wire Wire Line
	800  5950 1700 5950
Wire Wire Line
	2500 5650 4150 5650
Wire Wire Line
	2500 5750 4200 5750
Wire Wire Line
	2500 5850 4100 5850
Wire Wire Line
	2950 5950 4500 5950
Wire Wire Line
	3200 6050 4500 6050
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
	7000 1100 7000 1200
Wire Wire Line
	6500 1100 6500 1200
$Comp
L 0EsseivaN_Lib:GND #PWR0122
U 1 1 5D3736D0
P 6750 2050
F 0 "#PWR0122" H 6750 1750 50  0001 C CNN
F 1 "GND" H 6750 1850 50  0001 C CNN
F 2 "" H 6750 2050 50  0000 C CNN
F 3 "" H 6750 2050 50  0000 C CNN
	1    6750 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 1900 6750 1900
Wire Wire Line
	7000 1900 7000 1850
Wire Wire Line
	6750 2050 6750 1900
Wire Wire Line
	6750 1900 7000 1900
Connection ~ 6750 1900
$Comp
L 0EsseivaN_Lib:3V3 #PWR04
U 1 1 5D40B76A
P 2400 3750
F 0 "#PWR04" H 2400 3600 50  0001 C CNN
F 1 "3V3" H 2347 3787 45  0000 R CNN
F 2 "" H 2400 3750 50  0000 C CNN
F 3 "" H 2400 3750 50  0000 C CNN
	1    2400 3750
	1    0    0    -1  
$EndComp
Connection ~ 2400 3800
Wire Wire Line
	2400 3750 2400 3800
Wire Wire Line
	5050 4950 4500 4950
$Comp
L 0EsseivaN_Lib:R R4
U 1 1 5CB6108A
P 3600 2000
F 0 "R4" H 3670 1954 50  0000 L CNN
F 1 "10k" H 3670 2045 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 3530 2000 50  0001 C CNN
F 3 "" H 3600 2000 50  0000 C CNN
	1    3600 2000
	1    0    0    1   
$EndComp
Wire Wire Line
	3600 3400 4100 3400
Wire Wire Line
	3600 3400 3550 3400
Connection ~ 3600 3400
$Comp
L 0EsseivaN_Lib:CAPA C3
U 1 1 5CB88B5C
P 4350 2450
F 0 "C3" V 4297 2342 60  0000 R CNN
F 1 "100nF" V 4403 2342 60  0000 R CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 4350 2450 60  0001 C CNN
F 3 "" H 4350 2450 60  0000 C CNN
	1    4350 2450
	0    -1   1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:CAPA C9
U 1 1 5D48D155
P 3700 2300
F 0 "C9" V 3647 2192 60  0000 R CNN
F 1 "100nF" V 3753 2192 60  0000 R CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 3700 2300 60  0001 C CNN
F 3 "" H 3700 2300 60  0000 C CNN
	1    3700 2300
	0    -1   1    0   
$EndComp
Wire Wire Line
	3600 2200 3600 3400
Connection ~ 3600 2200
Wire Wire Line
	3600 2200 3700 2200
$Comp
L 0EsseivaN_Lib:3V3 #PWR02
U 1 1 5D4EC2E7
P 3600 1800
F 0 "#PWR02" H 3600 1650 50  0001 C CNN
F 1 "3V3" H 3617 1970 45  0000 C CNN
F 2 "" H 3600 1800 50  0000 C CNN
F 3 "" H 3600 1800 50  0000 C CNN
	1    3600 1800
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR03
U 1 1 5D525930
P 3700 2400
F 0 "#PWR03" H 3700 2100 50  0001 C CNN
F 1 "GND" H 3700 2200 50  0001 C CNN
F 2 "" H 3700 2400 50  0000 C CNN
F 3 "" H 3700 2400 50  0000 C CNN
	1    3700 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 3100 4150 3100
Text Notes 3500 5500 0    50   ~ 0
3V3 MAX !
Text Notes 9550 2600 0    50   ~ 0
3V3 MAX !
Text Notes 8750 3850 0    50   ~ 0
3V3 MAX !
Text Notes 8750 5400 0    50   ~ 0
3V3 MAX !
Wire Bus Line
	1850 4500 4200 4500
Wire Bus Line
	7800 2700 7800 3950
Wire Bus Line
	700  5850 700  6700
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
