EESchema Schematic File Version 4
LIBS:USB_Tool-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "USB_Tool"
Date "2019-08-12"
Rev "5"
Comp "EsseivaN"
Comment1 "Author : Esseiva Nicolas"
Comment2 "USB Tool"
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L 0EsseivaN_Lib:GND #PWR0102
U 1 1 5CB6DCDC
P 2350 4050
F 0 "#PWR0102" H 2350 3750 50  0001 C CNN
F 1 "GND" H 2350 3850 50  0001 C CNN
F 2 "" H 2350 4050 50  0000 C CNN
F 3 "" H 2350 4050 50  0000 C CNN
	1    2350 4050
	1    0    0    -1  
$EndComp
NoConn ~ 1300 1250
$Comp
L 0EsseivaN_Lib:CAPA C1
U 1 1 5CB83229
P 900 1750
F 0 "C1" V 953 1642 60  0000 R CNN
F 1 "4.7nF" V 847 1642 60  0000 R CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 900 1750 60  0001 C CNN
F 3 "" H 900 1750 60  0000 C CNN
	1    900  1750
	0    -1   -1   0   
$EndComp
$Comp
L 0EsseivaN_Lib:LED P8
U 1 1 5CBEA842
P 9900 5050
F 0 "P8" V 10050 5100 60  0000 L CNN
F 1 "Blue" V 9953 5128 60  0001 L CNN
F 2 "0EsseivaN_Lib:D_0805_HandSoldering" H 9900 5050 60  0001 C CNN
F 3 "" H 9900 5050 60  0000 C CNN
	1    9900 5050
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R2
U 1 1 5CBEC042
P 9900 4750
F 0 "R2" V 9800 4750 50  0000 L CNN
F 1 "150R" V 9900 4650 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 9830 4750 50  0001 C CNN
F 3 "" H 9900 4750 50  0000 C CNN
	1    9900 4750
	1    0    0    -1  
$EndComp
Text Label 1350 850  0    50   ~ 0
VBus
Text Label 1350 1050 0    50   ~ 0
D+
Text Label 1350 1150 0    50   ~ 0
D-
Text Label 5850 4750 2    50   ~ 0
SCL
Wire Wire Line
	6800 2700 6800 2500
Connection ~ 6800 2700
Wire Wire Line
	6600 2700 6800 2700
Wire Wire Line
	6600 2800 6600 2700
Wire Wire Line
	6800 2500 6950 2500
Wire Wire Line
	6800 2800 6800 2700
$Comp
L 0EsseivaN_Lib:GND #PWR0103
U 1 1 5CB97922
P 6950 2700
F 0 "#PWR0103" H 6950 2400 50  0001 C CNN
F 1 "GND" H 6950 2500 50  0001 C CNN
F 2 "" H 6950 2700 50  0000 C CNN
F 3 "" H 6950 2700 50  0000 C CNN
	1    6950 2700
	1    0    0    -1  
$EndComp
Connection ~ 6950 2500
Text Label 7550 3200 0    50   ~ 0
~RESET_USB
Wire Wire Line
	2350 4000 2350 4050
Wire Wire Line
	2650 3800 2350 3800
Wire Wire Line
	2650 3750 2650 3800
$Comp
L 0EsseivaN_Lib:R R7
U 1 1 5CB7F98F
P 10600 5350
F 0 "R7" V 10500 5350 50  0000 L CNN
F 1 "330R" V 10600 5250 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 10530 5350 50  0001 C CNN
F 3 "" H 10600 5350 50  0000 C CNN
	1    10600 5350
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:R R6
U 1 1 5CB8029A
P 10350 5350
F 0 "R6" V 10250 5450 50  0000 R CNN
F 1 "330R" V 10350 5450 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 10280 5350 50  0001 C CNN
F 3 "" H 10350 5350 50  0000 C CNN
	1    10350 5350
	1    0    0    -1  
$EndComp
Text Label 4050 4700 2    50   ~ 0
SSPND
Text Label 4050 4900 2    50   ~ 0
USBCFG
Text Label 5850 5200 2    50   ~ 0
USBCFG
Text Label 7550 3650 0    50   ~ 0
SSPND
$Comp
L 0EsseivaN_Lib:CAPA C8
U 1 1 5CB96E3E
P 6950 2600
F 0 "C8" V 6897 2708 60  0000 L CNN
F 1 "100nF" V 7003 2708 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 6950 2600 60  0001 C CNN
F 3 "" H 6950 2600 60  0000 C CNN
	1    6950 2600
	0    1    1    0   
$EndComp
Text Label 4050 5200 2    50   ~ 0
~RESET_USB
$Comp
L 0EsseivaN_Lib:SW_2TO1 SW1
U 1 1 5CDC9373
P 2400 950
F 0 "SW1" H 2400 1231 50  0000 C CNN
F 1 "SW_2TO1" H 2400 1140 50  0000 C CNN
F 2 "0EsseivaN_Lib:SLB12814" H 2400 950 50  0001 C CNN
F 3 "" H 2400 950 50  0001 C CNN
	1    2400 950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 950  3400 950 
Connection ~ 3650 950 
Wire Wire Line
	3650 1150 3650 950 
Wire Wire Line
	3750 1150 3650 1150
Text Label 3850 1400 0    50   ~ 0
GND
Text Label 4600 1050 0    50   ~ 0
3V3
Connection ~ 4800 1050
Wire Wire Line
	4800 1050 4800 1100
Connection ~ 4150 1400
Wire Wire Line
	4800 1400 4800 1300
Wire Wire Line
	4150 1400 4800 1400
$Comp
L 0EsseivaN_Lib:CAPA_P C7
U 1 1 5CCD94D7
P 4800 1200
F 0 "C7" V 4764 1308 60  0000 L CNN
F 1 "1uF" V 4870 1308 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 4800 1200 60  0001 C CNN
F 3 "" H 4800 1200 60  0000 C CNN
	1    4800 1200
	0    1    1    0   
$EndComp
Wire Wire Line
	4800 1000 4800 1050
$Comp
L 0EsseivaN_Lib:3V3 #PWR0118
U 1 1 5CCD0867
P 4800 1000
F 0 "#PWR0118" H 4800 850 50  0001 C CNN
F 1 "3V3" H 4817 1170 45  0000 C CNN
F 2 "" H 4800 1000 50  0000 C CNN
F 3 "" H 4800 1000 50  0000 C CNN
	1    4800 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4550 1050 4800 1050
Wire Wire Line
	3300 1450 3300 1400
Connection ~ 3300 1400
Wire Wire Line
	4150 1400 4150 1350
Wire Wire Line
	3300 1400 4150 1400
Wire Wire Line
	3750 950  3650 950 
$Comp
L 0EsseivaN_Lib:NCP114 U2
U 1 1 5CC9D2C7
P 4150 1050
F 0 "U2" H 4350 1400 50  0000 C CNN
F 1 "NCP114" H 4350 1300 50  0000 C CNN
F 2 "0EsseivaN_Lib:SOT-23-5_HandSoldering" H 4050 1050 50  0001 C CNN
F 3 "" H 4050 1050 50  0001 C CNN
	1    4150 1050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 1200 3300 1400
Text Label 3150 950  0    50   ~ 0
5V
$Comp
L 0EsseivaN_Lib:5V #PWR0115
U 1 1 5CB6770D
P 3300 900
F 0 "#PWR0115" H 3300 750 50  0001 C CNN
F 1 "5V" H 3317 1070 45  0000 C CNN
F 2 "" H 3300 900 50  0000 C CNN
F 3 "" H 3300 900 50  0000 C CNN
	1    3300 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 900  3300 950 
$Comp
L 0EsseivaN_Lib:CAPA_P C2
U 1 1 5CB87644
P 3300 1100
F 0 "C2" V 3264 1208 60  0000 L CNN
F 1 "10uF" V 3370 1208 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_0805_HandSoldering" H 3300 1100 60  0001 C CNN
F 3 "" H 3300 1100 60  0000 C CNN
	1    3300 1100
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR0114
U 1 1 5CB90A85
P 3300 1450
F 0 "#PWR0114" H 3300 1150 50  0001 C CNN
F 1 "GND" H 3300 1250 50  0001 C CNN
F 2 "" H 3300 1450 50  0000 C CNN
F 3 "" H 3300 1450 50  0000 C CNN
	1    3300 1450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 1000 3300 950 
Connection ~ 3300 950 
$Comp
L 0EsseivaN_Lib:Fuse F1
U 1 1 5CB94C5C
P 2900 950
F 0 "F1" V 2703 950 50  0000 C CNN
F 1 "250mA" V 2794 950 50  0000 C CNN
F 2 "0EsseivaN_Lib:Fuse_SMD2410_HandSoldering" V 2830 950 50  0001 C CNN
F 3 "" H 2900 950 50  0000 C CNN
	1    2900 950 
	0    1    1    0   
$EndComp
Wire Wire Line
	3100 950  3300 950 
Wire Wire Line
	2600 950  2700 950 
Wire Wire Line
	2050 1050 2200 1050
Wire Wire Line
	1300 850  2200 850 
$Comp
L 0EsseivaN_Lib:LED_RGB P2
U 1 1 5CC311F2
P 10700 4900
F 0 "P2" V 10522 5128 60  0000 L CNN
F 1 "RGB" V 10628 5128 60  0000 L CNN
F 2 "0EsseivaN_Lib:LED_RGB_1411" H 10700 5050 60  0001 C CNN
F 3 "" H 10700 5050 60  0000 C CNN
	1    10700 4900
	0    1    1    0   
$EndComp
Wire Wire Line
	10350 5150 10350 5050
Wire Wire Line
	10600 5050 10600 5150
Wire Wire Line
	10850 5150 10850 5050
$Comp
L 0EsseivaN_Lib:PWR_FLAG-power #FLG0101
U 1 1 5CD92D9E
P 3400 750
F 0 "#FLG0101" H 3400 825 50  0001 C CNN
F 1 "PWR_FLAG-power" H 3400 923 50  0001 C CNN
F 2 "" H 3400 750 50  0001 C CNN
F 3 "~" H 3400 750 50  0001 C CNN
	1    3400 750 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 750  3400 950 
Connection ~ 3400 950 
Wire Wire Line
	3400 950  3300 950 
$Comp
L 0EsseivaN_Lib:5V #PWR0136
U 1 1 5CD3EE7C
P 2400 1350
F 0 "#PWR0136" H 2400 1200 50  0001 C CNN
F 1 "5V" H 2417 1520 45  0000 C CNN
F 2 "" H 2400 1350 50  0000 C CNN
F 3 "" H 2400 1350 50  0000 C CNN
	1    2400 1350
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0137
U 1 1 5CD3F192
P 2900 1350
F 0 "#PWR0137" H 2900 1200 50  0001 C CNN
F 1 "3V3" H 2917 1520 45  0000 C CNN
F 2 "" H 2900 1350 50  0000 C CNN
F 3 "" H 2900 1350 50  0000 C CNN
	1    2900 1350
	1    0    0    -1  
$EndComp
Text Label 7550 5700 0    50   ~ 0
LEDRGB_B
Text Label 7550 5850 0    50   ~ 0
LEDRGB_G
Text Label 7550 6000 0    50   ~ 0
LEDRGB_R
$Comp
L 0EsseivaN_Lib:R R12
U 1 1 5CF64F77
P 5500 2550
F 0 "R12" V 5500 2250 50  0000 R CNN
F 1 "3k3" V 5500 2625 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 5430 2550 50  0001 C CNN
F 3 "" H 5500 2550 50  0000 C CNN
	1    5500 2550
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:R R13
U 1 1 5CF8F027
P 5600 2550
F 0 "R13" V 5600 2850 50  0000 L CNN
F 1 "3k3" V 5600 2475 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 5530 2550 50  0001 C CNN
F 3 "" H 5600 2550 50  0000 C CNN
	1    5600 2550
	-1   0    0    -1  
$EndComp
Wire Wire Line
	10600 4450 10600 4500
$Comp
L 0EsseivaN_Lib:LED P3
U 1 1 5D08D1FC
P 2400 2000
F 0 "P3" V 2347 2078 60  0000 L CNN
F 1 "Green" V 2453 2078 60  0000 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 2400 2000 60  0001 C CNN
F 3 "" H 2400 2000 60  0000 C CNN
	1    2400 2000
	0    1    1    0   
$EndComp
Wire Wire Line
	2400 2100 2400 2150
$Comp
L 0EsseivaN_Lib:R R14
U 1 1 5D0D5366
P 2400 1650
F 0 "R14" H 2470 1696 50  0000 L CNN
F 1 "270R" H 2470 1605 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 2330 1650 50  0001 C CNN
F 3 "" H 2400 1650 50  0000 C CNN
	1    2400 1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 1850 2400 1900
$Comp
L 0EsseivaN_Lib:R R15
U 1 1 5D14E7A4
P 2900 1650
F 0 "R15" H 2970 1696 50  0000 L CNN
F 1 "120R" H 2970 1605 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 2830 1650 50  0001 C CNN
F 3 "" H 2900 1650 50  0000 C CNN
	1    2900 1650
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:LED P4
U 1 1 5D14EE26
P 2900 2000
F 0 "P4" V 2847 2078 60  0000 L CNN
F 1 "Green" V 2953 2078 60  0000 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 2900 2000 60  0001 C CNN
F 3 "" H 2900 2000 60  0000 C CNN
	1    2900 2000
	0    1    1    0   
$EndComp
Wire Wire Line
	2900 1850 2900 1900
$Comp
L 0EsseivaN_Lib:3V3 #PWR0104
U 1 1 5D21FE29
P 2650 3750
F 0 "#PWR0104" H 2650 3600 50  0001 C CNN
F 1 "3V3" H 2667 3920 45  0000 C CNN
F 2 "" H 2650 3750 50  0000 C CNN
F 3 "" H 2650 3750 50  0000 C CNN
	1    2650 3750
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0116
U 1 1 5D220D5A
P 9900 4550
F 0 "#PWR0116" H 9900 4400 50  0001 C CNN
F 1 "3V3" H 9917 4720 45  0000 C CNN
F 2 "" H 9900 4550 50  0000 C CNN
F 3 "" H 9900 4550 50  0000 C CNN
	1    9900 4550
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0119
U 1 1 5D221C98
P 6950 2450
F 0 "#PWR0119" H 6950 2300 50  0001 C CNN
F 1 "3V3" H 6967 2620 45  0000 C CNN
F 2 "" H 6950 2450 50  0000 C CNN
F 3 "" H 6950 2450 50  0000 C CNN
	1    6950 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	6950 2450 6950 2500
$Comp
L 0EsseivaN_Lib:5V #PWR0124
U 1 1 5CBB4994
P 10600 4450
F 0 "#PWR0124" H 10600 4300 50  0001 C CNN
F 1 "5V" H 10617 4620 45  0000 C CNN
F 2 "" H 10600 4450 50  0000 C CNN
F 3 "" H 10600 4450 50  0000 C CNN
	1    10600 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2900 1350 2900 1450
Wire Wire Line
	2400 1350 2400 1450
$Comp
L 0EsseivaN_Lib:GND #PWR0122
U 1 1 5D3736D0
P 2650 2300
F 0 "#PWR0122" H 2650 2000 50  0001 C CNN
F 1 "GND" H 2650 2100 50  0001 C CNN
F 2 "" H 2650 2300 50  0000 C CNN
F 3 "" H 2650 2300 50  0000 C CNN
	1    2650 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 2150 2650 2150
Wire Wire Line
	2900 2150 2900 2100
Wire Wire Line
	2650 2300 2650 2150
Wire Wire Line
	2650 2150 2900 2150
Connection ~ 2650 2150
$Comp
L 0EsseivaN_Lib:R R4
U 1 1 5CB6108A
P 3350 4400
F 0 "R4" H 3420 4354 50  0000 L CNN
F 1 "10k" H 3420 4445 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 3280 4400 50  0001 C CNN
F 3 "" H 3350 4400 50  0000 C CNN
	1    3350 4400
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:CAPA C9
U 1 1 5D48D155
P 3350 5350
F 0 "C9" V 3297 5457 60  0000 L CNN
F 1 "100nF" V 3403 5457 60  0000 L CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 3350 5350 60  0001 C CNN
F 3 "" H 3350 5350 60  0000 C CNN
	1    3350 5350
	0    -1   1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR02
U 1 1 5D4EC2E7
P 3350 4200
F 0 "#PWR02" H 3350 4050 50  0001 C CNN
F 1 "3V3" H 3367 4370 45  0000 C CNN
F 2 "" H 3350 4200 50  0000 C CNN
F 3 "" H 3350 4200 50  0000 C CNN
	1    3350 4200
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR03
U 1 1 5D525930
P 3350 5450
F 0 "#PWR03" H 3350 5150 50  0001 C CNN
F 1 "GND" H 3350 5250 50  0001 C CNN
F 2 "" H 3350 5450 50  0000 C CNN
F 3 "" H 3350 5450 50  0000 C CNN
	1    3350 5450
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:LED P5
U 1 1 5D29750F
P 7750 2750
F 0 "P5" V 7697 2828 60  0000 L CNN
F 1 "Blue" V 7803 2828 60  0000 L CNN
F 2 "0EsseivaN_Lib:D_0805_HandSoldering" V 7856 2828 60  0001 L CNN
F 3 "" H 7750 2750 60  0000 C CNN
	1    7750 2750
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R16
U 1 1 5D2F3FB9
P 7750 2450
F 0 "R16" H 7681 2404 50  0000 R CNN
F 1 "120R" H 7681 2495 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 7680 2450 50  0001 C CNN
F 3 "" H 7750 2450 50  0000 C CNN
	1    7750 2450
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR08
U 1 1 5D327A41
P 7750 2200
F 0 "#PWR08" H 7750 2050 50  0001 C CNN
F 1 "3V3" H 7750 2350 45  0000 C CNN
F 2 "" H 7750 2200 50  0000 C CNN
F 3 "" H 7750 2200 50  0000 C CNN
	1    7750 2200
	-1   0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:LED P6
U 1 1 5D104E29
P 8200 2750
F 0 "P6" V 8147 2828 60  0000 L CNN
F 1 "Green" V 8253 2828 60  0000 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" V 8306 2828 60  0001 L CNN
F 3 "" H 8200 2750 60  0000 C CNN
	1    8200 2750
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R17
U 1 1 5D104E33
P 8200 2450
F 0 "R17" H 8131 2404 50  0000 R CNN
F 1 "270R" H 8131 2495 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 8130 2450 50  0001 C CNN
F 3 "" H 8200 2450 50  0000 C CNN
	1    8200 2450
	1    0    0    1   
$EndComp
Wire Wire Line
	2550 4100 2550 4050
Wire Wire Line
	2550 4050 2650 4050
Wire Wire Line
	2750 4050 2750 4100
Wire Wire Line
	2650 4050 2650 3800
Connection ~ 2650 4050
Wire Wire Line
	2650 4050 2750 4050
Connection ~ 2650 3800
$Comp
L 0EsseivaN_Lib:GND #PWR0106
U 1 1 5D5F8829
P 2650 5550
F 0 "#PWR0106" H 2650 5250 50  0001 C CNN
F 1 "GND" H 2650 5350 50  0001 C CNN
F 2 "" H 2650 5550 50  0000 C CNN
F 3 "" H 2650 5550 50  0000 C CNN
	1    2650 5550
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 5550 2650 5500
$Comp
L 0EsseivaN_Lib:MCP2221A U3
U 1 1 5D4620ED
P 2650 4850
F 0 "U3" H 2400 5550 50  0000 C CNN
F 1 "MCP2221A" H 2300 5450 50  0000 C CNN
F 2 "0EsseivaN_Lib:TSSOP-14_4.4x5mm_Pitch0.65mm" H 2650 4700 50  0001 C CNN
F 3 "" H 2250 4500 50  0001 C CNN
	1    2650 4850
	1    0    0    -1  
$EndComp
NoConn ~ 3150 5000
Wire Wire Line
	750  1550 750  1500
Wire Wire Line
	750  1950 750  2000
Wire Wire Line
	900  2000 900  2050
$Comp
L 0EsseivaN_Lib:R R1
U 1 1 5CB7FC9D
P 750 1750
F 0 "R1" H 681 1796 50  0000 R CNN
F 1 "1M" H 681 1705 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 680 1750 50  0001 C CNN
F 3 "" H 750 1750 50  0000 C CNN
	1    750  1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  1500 900  1500
Wire Wire Line
	900  1500 900  1650
Wire Wire Line
	900  1850 900  2000
$Comp
L 0EsseivaN_Lib:USB_B_Micro J1
U 1 1 5CB4CD34
P 1000 1050
F 0 "J1" H 1057 1517 50  0000 C CNN
F 1 "USB_B_Micro" H 1057 1426 50  0000 C CNN
F 2 "0EsseivaN_Lib:micro_usb" H 1150 1000 50  0001 C CNN
F 3 "~" H 1150 1000 50  0001 C CNN
	1    1000 1050
	1    0    0    -1  
$EndComp
Wire Wire Line
	900  1450 900  1500
Connection ~ 900  1500
Wire Wire Line
	1000 1450 1000 2000
Wire Wire Line
	1000 2000 900  2000
Connection ~ 900  2000
Wire Wire Line
	750  2000 900  2000
Text Label 5850 4450 2    50   ~ 0
Rx
Text Label 5850 4600 2    50   ~ 0
Tx
Text Label 5850 5350 2    50   ~ 0
ICSPCLK
Text Label 5850 3500 2    50   ~ 0
DAC_OUT
Text Label 5850 3800 2    50   ~ 0
~INT0
Text Label 7550 3500 0    50   ~ 0
USB_IOC
Text Label 4050 4800 2    50   ~ 0
USB_IOC
Text Label 7550 3350 0    50   ~ 0
D0
Text Label 7550 3800 0    50   ~ 0
D1
Text Label 5850 3950 2    50   ~ 0
~INT1
Text Label 5850 4100 2    50   ~ 0
~INT2
Wire Wire Line
	3150 5200 3350 5200
Wire Wire Line
	3350 5200 3350 4600
Wire Wire Line
	3350 5250 3350 5200
Connection ~ 3350 5200
Text Label 7550 6150 0    50   ~ 0
~MCLR
Wire Wire Line
	10350 5550 10350 5700
$Comp
L 0EsseivaN_Lib:R R18
U 1 1 5F2B5BB1
P 9650 4750
F 0 "R18" V 9550 4700 50  0000 L CNN
F 1 "150R" V 9650 4650 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 9580 4750 50  0001 C CNN
F 3 "" H 9650 4750 50  0000 C CNN
	1    9650 4750
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0109
U 1 1 5F2B5BBB
P 9650 4550
F 0 "#PWR0109" H 9650 4400 50  0001 C CNN
F 1 "3V3" H 9667 4720 45  0000 C CNN
F 2 "" H 9650 4550 50  0000 C CNN
F 3 "" H 9650 4550 50  0000 C CNN
	1    9650 4550
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:LED P7
U 1 1 5F2C2BD9
P 9650 5050
F 0 "P7" V 9800 5100 60  0000 L CNN
F 1 "Green" V 9703 5128 60  0001 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 9650 5050 60  0001 C CNN
F 3 "" H 9650 5050 60  0000 C CNN
	1    9650 5050
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:LED P1
U 1 1 5F2C2BE3
P 9400 5050
F 0 "P1" V 9550 5100 60  0000 L CNN
F 1 "RED" V 9453 5128 60  0001 L CNN
F 2 "0EsseivaN_Lib:D_0603_HandSoldering" H 9400 5050 60  0001 C CNN
F 3 "" H 9400 5050 60  0000 C CNN
	1    9400 5050
	0    1    1    0   
$EndComp
$Comp
L 0EsseivaN_Lib:R R3
U 1 1 5F2C2BED
P 9400 4750
F 0 "R3" V 9300 4850 50  0000 R CNN
F 1 "150R" V 9400 4850 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 9330 4750 50  0001 C CNN
F 3 "" H 9400 4750 50  0000 C CNN
	1    9400 4750
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0111
U 1 1 5F2C2BF7
P 9400 4550
F 0 "#PWR0111" H 9400 4400 50  0001 C CNN
F 1 "3V3" H 9417 4720 45  0000 C CNN
F 2 "" H 9400 4550 50  0000 C CNN
F 3 "" H 9400 4550 50  0000 C CNN
	1    9400 4550
	1    0    0    -1  
$EndComp
Text Label 7550 5200 0    50   ~ 0
LED0
Text Label 7550 5350 0    50   ~ 0
LED1
Text Label 7550 5500 0    50   ~ 0
LED2
Wire Wire Line
	9400 5150 9400 5200
Wire Wire Line
	9650 5350 9650 5150
Wire Wire Line
	9900 5500 9900 5150
Wire Wire Line
	2150 5200 2050 5200
Wire Wire Line
	2050 5200 2050 5650
Wire Wire Line
	2150 5100 2000 5100
Wire Wire Line
	2000 5100 2000 5750
Text Label 5850 3200 2    50   ~ 0
D10
Text Label 5850 3350 2    50   ~ 0
D11
Text Label 5850 3650 2    50   ~ 0
TBD
$Comp
L 0EsseivaN_Lib:R R20
U 1 1 5E5F3CD1
P 1700 5350
F 0 "R20" H 1770 5304 50  0000 L CNN
F 1 "4k7" H 1770 5395 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 1630 5350 50  0001 C CNN
F 3 "" H 1700 5350 50  0000 C CNN
	1    1700 5350
	1    0    0    1   
$EndComp
$Comp
L 0EsseivaN_Lib:R R19
U 1 1 5E5F496F
P 1550 5350
F 0 "R19" H 1480 5304 50  0000 R CNN
F 1 "4k7" H 1480 5395 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 1480 5350 50  0001 C CNN
F 3 "" H 1550 5350 50  0000 C CNN
	1    1550 5350
	1    0    0    1   
$EndComp
Wire Wire Line
	1700 5150 1700 4900
Wire Wire Line
	1700 4900 2150 4900
Wire Wire Line
	1550 5150 1550 4800
Wire Wire Line
	1550 4800 2150 4800
$Comp
L 0EsseivaN_Lib:GND #PWR04
U 1 1 5E627D46
P 1700 5650
F 0 "#PWR04" H 1700 5350 50  0001 C CNN
F 1 "GND" H 1700 5450 50  0001 C CNN
F 2 "" H 1700 5650 50  0000 C CNN
F 3 "" H 1700 5650 50  0000 C CNN
	1    1700 5650
	1    0    0    -1  
$EndComp
Wire Wire Line
	1700 5650 1700 5600
Wire Wire Line
	1550 5550 1550 5600
Wire Wire Line
	1550 5600 1700 5600
Connection ~ 1700 5600
Wire Wire Line
	1700 5600 1700 5550
$Comp
L 0EsseivaN_Lib:3V3 #PWR0123
U 1 1 5D1FF18B
P 1550 2000
F 0 "#PWR0123" H 1550 1850 50  0001 C CNN
F 1 "3V3" H 1567 2170 45  0000 C CNN
F 2 "" H 1550 2000 50  0000 C CNN
F 3 "" H 1550 2000 50  0000 C CNN
	1    1550 2000
	1    0    0    -1  
$EndComp
Text Notes 9750 2700 0    79   ~ 0
3V3 MAX !
$Comp
L 0EsseivaN_Lib:3V3 #PWR0125
U 1 1 5D18A9D1
P 5100 2250
F 0 "#PWR0125" H 5100 2100 50  0001 C CNN
F 1 "3V3" H 5117 2420 45  0000 C CNN
F 2 "" H 5100 2250 50  0000 C CNN
F 3 "" H 5100 2250 50  0000 C CNN
	1    5100 2250
	1    0    0    -1  
$EndComp
Connection ~ 5200 2300
Wire Wire Line
	5200 2300 5200 2350
$Comp
L 0EsseivaN_Lib:R R21
U 1 1 5D11C311
P 5200 2550
F 0 "R21" V 5200 2250 50  0000 R CNN
F 1 "4k7" V 5200 2625 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 5130 2550 50  0001 C CNN
F 3 "" H 5200 2550 50  0000 C CNN
	1    5200 2550
	-1   0    0    1   
$EndComp
Connection ~ 5300 2300
Wire Wire Line
	5200 2300 5300 2300
Wire Wire Line
	5300 2350 5300 2300
$Comp
L 0EsseivaN_Lib:R R22
U 1 1 5D11E549
P 5300 2550
F 0 "R22" V 5300 2250 50  0000 R CNN
F 1 "4k7" V 5300 2625 50  0000 R CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 5230 2550 50  0001 C CNN
F 3 "" H 5300 2550 50  0000 C CNN
	1    5300 2550
	-1   0    0    1   
$EndComp
Wire Wire Line
	5300 2300 5400 2300
Wire Wire Line
	5400 2300 5400 2350
$Comp
L 0EsseivaN_Lib:R R23
U 1 1 5D11EF23
P 5400 2550
F 0 "R23" V 5400 2850 50  0000 L CNN
F 1 "4k7" V 5400 2475 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 5330 2550 50  0001 C CNN
F 3 "" H 5400 2550 50  0000 C CNN
	1    5400 2550
	1    0    0    -1  
$EndComp
Text Label 5850 5500 2    50   ~ 0
ICSPDAT
$Comp
L 0EsseivaN_Lib:PIC18F46K40_44 U4
U 1 1 5CB7FF60
P 6700 4750
F 0 "U4" H 6100 6750 50  0000 C CNN
F 1 "PIC18F46K40_44" H 6100 6650 50  0000 C CNN
F 2 "0EsseivaN_Lib:TQFP-44_10x10mm_Pitch0.8mm" H 6700 5050 50  0001 C CNN
F 3 "https://www.digikey.ch/product-detail/en/microchip-technology/PIC18F45K40-I-PT/PIC18F45K40-I-PT-ND/6208274" H 6700 5050 50  0001 C CNN
	1    6700 4750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 6550 6600 6650
Wire Wire Line
	6600 6650 6700 6650
Wire Wire Line
	6800 6650 6800 6550
$Comp
L 0EsseivaN_Lib:GND #PWR0101
U 1 1 5CBB7C21
P 6700 6700
F 0 "#PWR0101" H 6700 6400 50  0001 C CNN
F 1 "GND" H 6700 6500 50  0001 C CNN
F 2 "" H 6700 6700 50  0000 C CNN
F 3 "" H 6700 6700 50  0000 C CNN
	1    6700 6700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 6700 6700 6650
Connection ~ 6700 6650
Wire Wire Line
	6700 6650 6800 6650
NoConn ~ 5900 5700
NoConn ~ 5900 5850
NoConn ~ 5900 6000
NoConn ~ 5900 6150
Wire Wire Line
	5900 3200 5100 3200
Wire Wire Line
	5900 3350 5100 3350
Wire Wire Line
	5900 3500 5100 3500
Wire Wire Line
	5100 3650 5900 3650
Wire Wire Line
	5900 3800 5100 3800
Wire Wire Line
	5100 3950 5200 3950
Wire Wire Line
	5900 4100 5300 4100
Wire Wire Line
	5100 4250 5400 4250
Wire Wire Line
	5900 4450 4950 4450
Wire Wire Line
	4950 4600 5900 4600
Wire Wire Line
	5900 4750 5500 4750
Wire Wire Line
	4950 4900 5600 4900
Wire Wire Line
	4950 5200 5900 5200
Entry Wire Line
	5000 3100 5100 3200
Entry Wire Line
	5000 3250 5100 3350
Entry Wire Line
	5000 3400 5100 3500
Entry Wire Line
	5000 3550 5100 3650
Entry Wire Line
	5000 3700 5100 3800
Entry Wire Line
	5000 3850 5100 3950
Entry Wire Line
	5000 4000 5100 4100
Entry Wire Line
	5000 4150 5100 4250
Entry Wire Line
	4850 4550 4950 4450
Entry Wire Line
	4850 4700 4950 4600
Entry Wire Line
	4850 5300 4950 5200
Wire Bus Line
	5000 2000 8800 2000
Entry Wire Line
	8700 4100 8800 4000
Entry Wire Line
	8700 4250 8800 4150
Wire Wire Line
	7500 4250 8700 4250
Wire Wire Line
	7500 4100 8700 4100
Wire Wire Line
	2050 2550 2050 1050
Wire Wire Line
	2150 4500 1900 4500
Wire Wire Line
	1900 1050 1300 1050
Wire Wire Line
	1900 1050 1900 4500
Wire Wire Line
	1300 1150 1850 1150
Wire Wire Line
	1850 1150 1850 4600
Wire Wire Line
	1850 4600 2150 4600
Wire Wire Line
	4450 2850 4450 5500
Wire Wire Line
	4450 5500 5900 5500
Wire Wire Line
	4550 5350 4550 2750
Wire Wire Line
	4550 5350 5900 5350
Entry Wire Line
	4100 4700 4200 4800
Entry Wire Line
	4100 4800 4200 4900
Entry Wire Line
	4100 4900 4200 5000
Entry Wire Line
	4100 5200 4200 5300
Entry Wire Line
	4100 5650 4200 5750
Entry Wire Line
	4100 5750 4200 5850
Text Label 4050 5650 2    50   ~ 0
Rx
Text Label 4050 5750 2    50   ~ 0
Tx
Entry Wire Line
	4850 4850 4950 4750
Entry Wire Line
	4850 5000 4950 4900
Wire Bus Line
	4850 5950 4200 5950
Wire Bus Line
	4850 1850 8950 1850
Wire Wire Line
	7500 3200 8850 3200
Wire Wire Line
	7500 3500 8850 3500
Wire Wire Line
	7500 3650 8850 3650
Entry Wire Line
	8850 3200 8950 3100
Entry Wire Line
	8850 3500 8950 3400
Entry Wire Line
	8850 3650 8950 3550
Entry Wire Line
	5000 4950 5100 5050
Wire Wire Line
	5100 5050 5900 5050
Text Notes 6300 2000 0    50   ~ 0
EXTENSION BUS
Text Notes 6300 1850 0    50   ~ 0
USB BRIDGE BUS
Wire Wire Line
	7500 5700 10350 5700
Wire Wire Line
	10600 5550 10600 5850
Wire Wire Line
	7500 5850 10600 5850
Wire Wire Line
	7500 6000 10850 6000
Wire Wire Line
	10850 5550 10850 6000
Wire Wire Line
	7500 5200 9400 5200
Wire Wire Line
	7500 5350 9650 5350
Wire Wire Line
	7500 5500 9900 5500
$Comp
L 0EsseivaN_Lib:CAPA C5
U 1 1 5CB6B8DF
P 2350 3900
F 0 "C5" V 2403 3793 60  0000 R CNN
F 1 "100nF" V 2297 3793 60  0000 R CNN
F 2 "0EsseivaN_Lib:C_1206_HandSoldering" H 2350 3900 60  0001 C CNN
F 3 "" H 2350 3900 60  0000 C CNN
	1    2350 3900
	0    1    -1   0   
$EndComp
Wire Wire Line
	1100 2750 4550 2750
Wire Wire Line
	1100 2850 4450 2850
Connection ~ 1550 2550
Wire Wire Line
	1550 2550 2050 2550
Wire Wire Line
	1550 2400 1550 2550
Wire Wire Line
	1100 2550 1550 2550
Text Label 1150 2450 0    50   ~ 0
~MCLR
Text Label 1150 2650 0    50   ~ 0
GND
Text Label 1150 2850 0    50   ~ 0
ICSPCLK
Text Label 1150 2750 0    50   ~ 0
ICSPDAT
Wire Wire Line
	1550 2650 1100 2650
Wire Wire Line
	1550 3000 1550 2650
Text Label 1150 2550 0    50   ~ 0
ICSP_VCC
$Comp
L 0EsseivaN_Lib:R R11
U 1 1 5CBC69D8
P 1550 2200
F 0 "R11" H 1620 2246 50  0000 L CNN
F 1 "27k" H 1620 2155 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 1480 2200 50  0001 C CNN
F 3 "" H 1550 2200 50  0000 C CNN
	1    1550 2200
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR0113
U 1 1 5CBC32A7
P 1550 3000
F 0 "#PWR0113" H 1550 2700 50  0001 C CNN
F 1 "GND" H 1550 2800 50  0001 C CNN
F 2 "" H 1550 3000 50  0000 C CNN
F 3 "" H 1550 3000 50  0000 C CNN
	1    1550 3000
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:CONN_ICSP X12
U 1 1 5CBB0674
P 800 2800
F 0 "X12" H 822 3412 60  0000 C CNN
F 1 "CONN_ICSP" H 822 3306 60  0000 C CNN
F 2 "0EsseivaN_Lib:Pin_Header_Straight_1x05_Pitch2.54mm" H 800 2800 60  0001 C CNN
F 3 "" H 800 2800 60  0000 C CNN
	1    800  2800
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:GND #PWR0110
U 1 1 5CB7DD0D
P 900 2050
F 0 "#PWR0110" H 900 1750 50  0001 C CNN
F 1 "GND" H 900 1850 50  0001 C CNN
F 2 "" H 900 2050 50  0000 C CNN
F 3 "" H 900 2050 50  0000 C CNN
	1    900  2050
	1    0    0    -1  
$EndComp
Text Label 7550 3950 0    50   ~ 0
D2
Text Label 7550 4100 0    50   ~ 0
D3
Text Label 7550 4250 0    50   ~ 0
D4
Wire Wire Line
	7500 3800 8700 3800
Wire Wire Line
	7500 3950 8700 3950
Wire Wire Line
	7500 3350 8700 3350
Entry Wire Line
	8700 3350 8800 3250
Entry Wire Line
	8700 3800 8800 3700
Entry Wire Line
	8700 3950 8800 3850
Wire Wire Line
	7500 4450 8700 4450
Wire Wire Line
	7500 4600 8700 4600
Wire Wire Line
	7500 4750 8700 4750
Wire Wire Line
	7500 4900 8700 4900
Wire Wire Line
	7500 5050 8700 5050
Entry Wire Line
	8700 4450 8800 4350
Entry Wire Line
	8700 4600 8800 4500
Entry Wire Line
	8700 4750 8800 4650
Entry Wire Line
	8700 4900 8800 4800
Entry Wire Line
	8700 5050 8800 4950
Text Label 7550 4450 0    50   ~ 0
D5
Text Label 7550 4600 0    50   ~ 0
D6
Text Label 7550 4750 0    50   ~ 0
D7
Text Label 7550 4900 0    50   ~ 0
D8
Text Label 7550 5050 0    50   ~ 0
D9
Wire Wire Line
	3150 4700 4100 4700
Wire Wire Line
	3150 4800 4100 4800
Wire Wire Line
	3150 4900 4100 4900
Wire Wire Line
	3350 5200 4100 5200
Wire Wire Line
	2050 5650 4100 5650
Wire Wire Line
	2000 5750 4100 5750
$Comp
L 0EsseivaN_Lib:Conn_02x08_Odd_Even J2
U 1 1 5DDCCCA4
P 10050 1900
F 0 "J2" H 10050 2467 50  0000 C CNN
F 1 "EXT" H 10050 2376 50  0000 C CNN
F 2 "" H 10000 1950 50  0001 C CNN
F 3 "~" H 10000 1950 50  0001 C CNN
	1    10050 1900
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:Conn_02x08_Odd_Even J3
U 1 1 5DDCEBCD
P 10050 3500
F 0 "J3" H 10050 4067 50  0000 C CNN
F 1 "EXT" H 10050 3976 50  0000 C CNN
F 2 "" H 10000 3550 50  0001 C CNN
F 3 "~" H 10000 3550 50  0001 C CNN
	1    10050 3500
	1    0    0    -1  
$EndComp
$Comp
L 0EsseivaN_Lib:3V3 #PWR0105
U 1 1 5DDFED0F
P 9750 1500
F 0 "#PWR0105" H 9750 1350 50  0001 C CNN
F 1 "3V3" H 9767 1670 45  0000 C CNN
F 2 "" H 9750 1500 50  0000 C CNN
F 3 "" H 9750 1500 50  0000 C CNN
	1    9750 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	9750 1500 9750 1550
Wire Wire Line
	9750 1550 9800 1550
$Comp
L 0EsseivaN_Lib:3V3 #PWR0107
U 1 1 5DE0B5F9
P 9750 3100
F 0 "#PWR0107" H 9750 2950 50  0001 C CNN
F 1 "3V3" H 9767 3270 45  0000 C CNN
F 2 "" H 9750 3100 50  0000 C CNN
F 3 "" H 9750 3100 50  0000 C CNN
	1    9750 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	9750 3100 9750 3150
Wire Wire Line
	9750 3150 9800 3150
$Comp
L 0EsseivaN_Lib:5V #PWR0108
U 1 1 5DE16BCA
P 10350 1500
F 0 "#PWR0108" H 10350 1350 50  0001 C CNN
F 1 "5V" H 10367 1670 45  0000 C CNN
F 2 "" H 10350 1500 50  0000 C CNN
F 3 "" H 10350 1500 50  0000 C CNN
	1    10350 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 1500 10350 1550
Wire Wire Line
	10350 1550 10300 1550
$Comp
L 0EsseivaN_Lib:5V #PWR0112
U 1 1 5DE23311
P 10350 3100
F 0 "#PWR0112" H 10350 2950 50  0001 C CNN
F 1 "5V" H 10367 3270 45  0000 C CNN
F 2 "" H 10350 3100 50  0000 C CNN
F 3 "" H 10350 3100 50  0000 C CNN
	1    10350 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 3100 10350 3150
Wire Wire Line
	10350 3150 10300 3150
Wire Bus Line
	9100 900  11000 900 
Wire Wire Line
	5400 2300 5500 2300
Wire Wire Line
	5500 2300 5500 2350
Connection ~ 5400 2300
Wire Wire Line
	5500 2300 5600 2300
Wire Wire Line
	5600 2300 5600 2350
Connection ~ 5500 2300
Wire Wire Line
	5100 2250 5100 2300
Wire Wire Line
	5100 2300 5200 2300
Wire Wire Line
	5200 2750 5200 3950
Connection ~ 5200 3950
Wire Wire Line
	5200 3950 5900 3950
Wire Wire Line
	5300 2750 5300 4100
Connection ~ 5300 4100
Wire Wire Line
	5300 4100 5100 4100
Wire Wire Line
	5400 2750 5400 4250
Connection ~ 5400 4250
Wire Wire Line
	5400 4250 5900 4250
Wire Wire Line
	5500 2750 5500 4750
Connection ~ 5500 4750
Wire Wire Line
	5500 4750 4950 4750
Wire Wire Line
	5600 2750 5600 4900
Connection ~ 5600 4900
Wire Wire Line
	5600 4900 5900 4900
Entry Wire Line
	9100 3850 9200 3750
Entry Wire Line
	9100 3350 9200 3250
Entry Wire Line
	9100 3450 9200 3350
Entry Wire Line
	9100 3550 9200 3450
Entry Wire Line
	9100 3650 9200 3550
Entry Wire Line
	9100 3750 9200 3650
Wire Wire Line
	9200 3350 9800 3350
Wire Wire Line
	9200 3450 9800 3450
Wire Wire Line
	9200 3650 9800 3650
Wire Wire Line
	9200 3750 9800 3750
Entry Wire Line
	11000 3850 10900 3750
Entry Wire Line
	11000 3350 10900 3250
Entry Wire Line
	11000 3450 10900 3350
Entry Wire Line
	11000 3550 10900 3450
Entry Wire Line
	11000 3650 10900 3550
Entry Wire Line
	11000 3750 10900 3650
Wire Wire Line
	10900 3350 10300 3350
Wire Wire Line
	10900 3450 10300 3450
Wire Wire Line
	10900 3550 10300 3550
Wire Wire Line
	10900 3650 10300 3650
Wire Wire Line
	10900 3750 10300 3750
Entry Wire Line
	9100 2250 9200 2150
Entry Wire Line
	9100 1750 9200 1650
Entry Wire Line
	9100 1850 9200 1750
Entry Wire Line
	9100 1950 9200 1850
Entry Wire Line
	9100 2050 9200 1950
Entry Wire Line
	9100 2150 9200 2050
Wire Wire Line
	9200 1650 9800 1650
Wire Wire Line
	9200 1750 9800 1750
Wire Wire Line
	9200 1850 9800 1850
Wire Wire Line
	9200 1950 9800 1950
Wire Wire Line
	9200 2050 9800 2050
Wire Wire Line
	9200 2150 9800 2150
Entry Wire Line
	11000 2250 10900 2150
Entry Wire Line
	11000 1750 10900 1650
Entry Wire Line
	11000 1850 10900 1750
Entry Wire Line
	11000 1950 10900 1850
Entry Wire Line
	11000 2050 10900 1950
Entry Wire Line
	11000 2150 10900 2050
Wire Wire Line
	10900 1650 10300 1650
Wire Wire Line
	10900 1750 10300 1750
Wire Wire Line
	10900 1850 10300 1850
Wire Wire Line
	10900 1950 10300 1950
Wire Wire Line
	10900 2050 10300 2050
Wire Wire Line
	10900 2150 10300 2150
Text Label 9750 1650 2    50   ~ 0
D0
Text Label 10350 1650 0    50   ~ 0
D1
Text Label 9750 1750 2    50   ~ 0
D2
Text Label 10350 1750 0    50   ~ 0
D3
Text Label 9750 1850 2    50   ~ 0
D4
Text Label 10350 1850 0    50   ~ 0
D5
Text Label 9750 1950 2    50   ~ 0
D6
Text Label 10350 1950 0    50   ~ 0
D7
Text Label 9750 2050 2    50   ~ 0
D8
Text Label 10350 2050 0    50   ~ 0
D9
Text Label 9650 2150 0    50   ~ 0
D10
Text Label 10350 2150 0    50   ~ 0
D11
$Comp
L 0EsseivaN_Lib:R R8
U 1 1 5CB800DB
P 10850 5350
F 0 "R8" V 10750 5350 50  0000 L CNN
F 1 "560R" V 10850 5250 50  0000 L CNN
F 2 "0EsseivaN_Lib:R_0603_HandSoldering" V 10780 5350 50  0001 C CNN
F 3 "" H 10850 5350 50  0000 C CNN
	1    10850 5350
	1    0    0    -1  
$EndComp
Text Label 9750 3550 2    50   ~ 0
DAC_OUT
Text Label 9750 3350 2    50   ~ 0
~INT0
Text Label 10350 3350 0    50   ~ 0
~INT1
Text Label 9750 3450 2    50   ~ 0
~INT2
Text Label 10350 3450 0    50   ~ 0
~INT3
Text Label 5850 4250 2    50   ~ 0
~INT3
Wire Wire Line
	9800 2250 9700 2250
Wire Wire Line
	9700 2250 9700 2400
Wire Wire Line
	9700 2400 10050 2400
Wire Wire Line
	10400 2400 10400 2250
Wire Wire Line
	10400 2250 10300 2250
$Comp
L 0EsseivaN_Lib:GND #PWR0117
U 1 1 5E162414
P 10050 2450
F 0 "#PWR0117" H 10050 2150 50  0001 C CNN
F 1 "GND" H 10050 2250 50  0001 C CNN
F 2 "" H 10050 2450 50  0000 C CNN
F 3 "" H 10050 2450 50  0000 C CNN
	1    10050 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	10050 2450 10050 2400
Connection ~ 10050 2400
Wire Wire Line
	10050 2400 10400 2400
Wire Wire Line
	9800 3850 9700 3850
Wire Wire Line
	9700 3850 9700 4000
Wire Wire Line
	9700 4000 10050 4000
Wire Wire Line
	10400 4000 10400 3850
Wire Wire Line
	10400 3850 10300 3850
$Comp
L 0EsseivaN_Lib:GND #PWR0120
U 1 1 5E187031
P 10050 4050
F 0 "#PWR0120" H 10050 3750 50  0001 C CNN
F 1 "GND" H 10050 3850 50  0001 C CNN
F 2 "" H 10050 4050 50  0000 C CNN
F 3 "" H 10050 4050 50  0000 C CNN
	1    10050 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	10050 4050 10050 4000
Connection ~ 10050 4000
Wire Wire Line
	10050 4000 10400 4000
Text Notes 9750 2800 0    50   ~ 0
50mm separation
Text Label 5850 4900 2    50   ~ 0
SDA
Text Label 5850 5050 2    50   ~ 0
CLKR
Text Label 10350 3550 0    50   ~ 0
CLKR
Text Label 9750 3250 2    50   ~ 0
SDA
Text Label 10350 3250 0    50   ~ 0
SCL
Text Label 10350 3650 0    50   ~ 0
~MCLR
Text Label 9750 3650 2    50   ~ 0
TBD
Text Label 9750 3750 2    50   ~ 0
EXT_LED_G
Text Label 10350 3750 0    50   ~ 0
EXT_LED_B
Wire Wire Line
	7750 2200 7750 2250
Wire Wire Line
	7750 2250 8200 2250
Connection ~ 7750 2250
Wire Wire Line
	8200 2850 8200 2950
Wire Wire Line
	8200 2950 8700 2950
Wire Wire Line
	7750 2850 7750 3050
Wire Wire Line
	7750 3050 8700 3050
Entry Wire Line
	8700 2950 8800 2850
Entry Wire Line
	8700 3050 8800 2950
Text Label 8650 3050 2    50   ~ 0
EXT_LED_B
Text Label 8650 2950 2    50   ~ 0
EXT_LED_G
Entry Wire Line
	4900 2450 5000 2350
Wire Bus Line
	8800 6150 9100 6150
Entry Wire Line
	8700 6150 8800 6050
Wire Wire Line
	7500 6150 8700 6150
Wire Wire Line
	1100 2450 4900 2450
Text Label 4800 2450 2    50   ~ 0
~MCLR
Wire Wire Line
	9800 3550 9200 3550
Wire Wire Line
	9800 3250 9200 3250
Wire Wire Line
	10900 3250 10300 3250
Wire Bus Line
	8950 1850 8950 3550
Wire Bus Line
	4850 1850 4850 5950
Wire Bus Line
	4200 4800 4200 5950
Wire Bus Line
	5000 2000 5000 4950
Wire Bus Line
	8800 2000 8800 6150
Wire Bus Line
	9100 900  9100 6150
Wire Bus Line
	11000 900  11000 3850
$EndSCHEMATC
