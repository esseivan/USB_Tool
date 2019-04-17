EESchema Schematic File Version 4
LIBS:USB_Tool-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "USB_Tool"
Date "2019-04-14"
Rev "00"
Comp "EsseivaN"
Comment1 "Author : Esseiva Nicolas"
Comment2 "Description here"
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L USB_Tool-rescue:USB_B_Micro-0EsseivaN_Lib J1
U 1 1 5CB4CD34
P 1200 1000
F 0 "J1" H 1257 1467 50  0000 C CNN
F 1 "USB_B_Micro" H 1257 1376 50  0000 C CNN
F 2 "" H 1350 950 50  0001 C CNN
F 3 "~" H 1350 950 50  0001 C CNN
	1    1200 1000
	1    0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:5V-0EsseivaN_Lib #PWR0101
U 1 1 5CB5CED0
P 11050 -2150
F 0 "#PWR0101" H 11050 -2300 50  0001 C CNN
F 1 "5V" H 11067 -1980 45  0000 C CNN
F 2 "" H 11050 -2150 50  0000 C CNN
F 3 "" H 11050 -2150 50  0000 C CNN
	1    11050 -2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	11150 -1450 11050 -1450
Wire Wire Line
	11050 -1450 11050 -2100
Wire Wire Line
	10950 -2000 10950 -2100
Wire Wire Line
	10950 -2100 11050 -2100
Connection ~ 11050 -2100
Wire Wire Line
	11050 -2100 11050 -2150
Wire Wire Line
	10950 -1600 10950 -1150
Wire Wire Line
	10950 -1150 11150 -1150
Text GLabel 1800 1000 2    50   BiDi ~ 0
D+
Text GLabel 1800 1100 2    50   BiDi ~ 0
D-
Text GLabel 5200 2450 2    50   BiDi ~ 0
D+
Wire Wire Line
	1500 1000 1800 1000
Wire Wire Line
	1800 1100 1500 1100
Text GLabel 5200 2550 2    50   BiDi ~ 0
D-
$Comp
L USB_Tool-rescue:CAPA-0EsseivaN_Lib C5
U 1 1 5CB6B8DF
P 4200 1850
F 0 "C5" V 4253 1743 60  0000 R CNN
F 1 "470nF" V 4147 1743 60  0000 R CNN
F 2 "" H 4200 1850 60  0000 C CNN
F 3 "" H 4200 1850 60  0000 C CNN
	1    4200 1850
	0    1    -1   0   
$EndComp
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR0102
U 1 1 5CB6DCDC
P 4200 2000
F 0 "#PWR0102" H 4200 1700 50  0001 C CNN
F 1 "GND" H 4200 1800 50  0001 C CNN
F 2 "" H 4200 2000 50  0000 C CNN
F 3 "" H 4200 2000 50  0000 C CNN
	1    4200 2000
	1    0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR0106
U 1 1 5CB76392
P 6300 2800
F 0 "#PWR0106" H 6300 2500 50  0001 C CNN
F 1 "GND" H 6300 2600 50  0001 C CNN
F 2 "" H 6300 2800 50  0000 C CNN
F 3 "" H 6300 2800 50  0000 C CNN
	1    6300 2800
	-1   0    0    -1  
$EndComp
Wire Wire Line
	6300 2800 6300 2750
$Comp
L USB_Tool-rescue:3V3-0EsseivaN_Lib #PWR0107
U 1 1 5CB77422
P 5500 1900
F 0 "#PWR0107" H 5500 1750 50  0001 C CNN
F 1 "3V3" H 5518 2070 45  0000 C CNN
F 2 "" H 5500 1900 50  0000 C CNN
F 3 "" H 5500 1900 50  0000 C CNN
	1    5500 1900
	-1   0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:3V3-0EsseivaN_Lib #PWR0109
U 1 1 5CB794E8
P 6300 2050
F 0 "#PWR0109" H 6300 1900 50  0001 C CNN
F 1 "3V3" H 6318 2220 45  0000 C CNN
F 2 "" H 6300 2050 50  0000 C CNN
F 3 "" H 6300 2050 50  0000 C CNN
	1    6300 2050
	-1   0    0    -1  
$EndComp
NoConn ~ 11150 -1250
NoConn ~ 1500 1200
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR0110
U 1 1 5CB7DD0D
P 1200 1900
F 0 "#PWR0110" H 1200 1600 50  0001 C CNN
F 1 "GND" H 1200 1700 50  0001 C CNN
F 2 "" H 1200 1900 50  0000 C CNN
F 3 "" H 1200 1900 50  0000 C CNN
	1    1200 1900
	1    0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:R-0EsseivaN_Lib R1
U 1 1 5CB7FC9D
P 1100 1600
F 0 "R1" H 1170 1646 50  0000 L CNN
F 1 "1M" H 1170 1555 50  0000 L CNN
F 2 "" V 1030 1600 50  0000 C CNN
F 3 "" H 1100 1600 50  0000 C CNN
	1    1100 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	1100 1800 1100 1850
Wire Wire Line
	1100 1850 1200 1850
Wire Wire Line
	1200 1900 1200 1850
$Comp
L USB_Tool-rescue:CAPA-0EsseivaN_Lib C1
U 1 1 5CB83229
P 850 1600
F 0 "C1" V 903 1707 60  0000 L CNN
F 1 "4.7nF" V 797 1707 60  0000 L CNN
F 2 "" H 850 1600 60  0000 C CNN
F 3 "" H 850 1600 60  0000 C CNN
	1    850  1600
	0    -1   -1   0   
$EndComp
Wire Wire Line
	850  1500 850  1400
Wire Wire Line
	850  1400 1100 1400
Connection ~ 1100 1400
Wire Wire Line
	850  1700 850  1850
Wire Wire Line
	850  1850 1100 1850
Connection ~ 1100 1850
$Comp
L USB_Tool-rescue:CAPA-0EsseivaN_Lib C3
U 1 1 5CB88B5C
P 5700 2100
F 0 "C3" V 5647 1992 60  0000 R CNN
F 1 "100nF" V 5753 1992 60  0000 R CNN
F 2 "" H 5700 2100 60  0000 C CNN
F 3 "" H 5700 2100 60  0000 C CNN
	1    5700 2100
	0    -1   1    0   
$EndComp
Wire Wire Line
	5500 1900 5500 1950
Wire Wire Line
	5700 2000 5700 1950
Wire Wire Line
	5700 1950 5500 1950
Connection ~ 5500 1950
Wire Wire Line
	5500 1950 5500 2550
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR0111
U 1 1 5CB8C722
P 5700 2200
F 0 "#PWR0111" H 5700 1900 50  0001 C CNN
F 1 "GND" H 5700 2000 50  0001 C CNN
F 2 "" H 5700 2200 50  0000 C CNN
F 3 "" H 5700 2200 50  0000 C CNN
	1    5700 2200
	-1   0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:R-0EsseivaN_Lib R4
U 1 1 5CB6108A
P 5050 2000
F 0 "R4" H 4981 1954 50  0000 R CNN
F 1 "1k" H 4981 2045 50  0000 R CNN
F 2 "" V 4980 2000 50  0000 C CNN
F 3 "" H 5050 2000 50  0000 C CNN
	1    5050 2000
	1    0    0    1   
$EndComp
$Comp
L USB_Tool-rescue:R-0EsseivaN_Lib R3
U 1 1 5CB8D825
P 6300 2300
F 0 "R3" H 6231 2254 50  0000 R CNN
F 1 "1k" H 6231 2345 50  0000 R CNN
F 2 "" V 6230 2300 50  0000 C CNN
F 3 "" H 6300 2300 50  0000 C CNN
	1    6300 2300
	-1   0    0    1   
$EndComp
Wire Wire Line
	6300 2500 6300 2550
$Comp
L USB_Tool-rescue:CAPA_P-0EsseivaN_Lib C4
U 1 1 5CB8DCBC
P 3850 3700
F 0 "C4" V 3814 3593 60  0000 R CNN
F 1 "1uF" V 3920 3593 60  0000 R CNN
F 2 "" H 3850 3700 60  0000 C CNN
F 3 "" H 3850 3700 60  0000 C CNN
	1    3850 3700
	0    1    1    0   
$EndComp
Wire Wire Line
	11200 -2050 11200 -2100
Wire Wire Line
	11200 -2100 11050 -2100
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR0112
U 1 1 5CB918FF
P 11200 -1800
F 0 "#PWR0112" H 11200 -2100 50  0001 C CNN
F 1 "GND" H 11200 -2000 50  0001 C CNN
F 2 "" H 11200 -1800 50  0000 C CNN
F 3 "" H 11200 -1800 50  0000 C CNN
	1    11200 -1800
	1    0    0    -1  
$EndComp
Wire Wire Line
	11200 -1800 11200 -1850
Wire Wire Line
	11150 -650 10650 -650
$Comp
L USB_Tool-rescue:CONN_ICSP-0EsseivaN_Lib J2
U 1 1 5CBB0674
P 800 2400
F 0 "J2" H 858 2887 60  0000 C CNN
F 1 "CONN_ICSP" H 858 2781 60  0000 C CNN
F 2 "" H 800 2400 60  0000 C CNN
F 3 "" H 800 2400 60  0000 C CNN
	1    800  2400
	1    0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR0113
U 1 1 5CBC32A7
P 1200 2700
F 0 "#PWR0113" H 1200 2400 50  0001 C CNN
F 1 "GND" H 1200 2500 50  0001 C CNN
F 2 "" H 1200 2700 50  0000 C CNN
F 3 "" H 1200 2700 50  0000 C CNN
	1    1200 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1200 2700 1200 2400
Wire Wire Line
	1200 2400 1100 2400
Wire Wire Line
	2950 900  3050 900 
Wire Wire Line
	3450 900  3650 900 
$Comp
L USB_Tool-rescue:Fuse-0EsseivaN_Lib F1
U 1 1 5CB94C5C
P 3250 900
F 0 "F1" V 3053 900 50  0000 C CNN
F 1 "630mA" V 3144 900 50  0000 C CNN
F 2 "" V 3180 900 50  0000 C CNN
F 3 "" H 3250 900 50  0000 C CNN
	1    3250 900 
	0    1    1    0   
$EndComp
Connection ~ 3650 900 
Wire Wire Line
	3650 950  3650 900 
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR0114
U 1 1 5CB90A85
P 3650 1400
F 0 "#PWR0114" H 3650 1100 50  0001 C CNN
F 1 "GND" H 3650 1200 50  0001 C CNN
F 2 "" H 3650 1400 50  0000 C CNN
F 3 "" H 3650 1400 50  0000 C CNN
	1    3650 1400
	1    0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:CAPA_P-0EsseivaN_Lib C2
U 1 1 5CB87644
P 3650 1050
F 0 "C2" V 3614 1158 60  0000 L CNN
F 1 "10uF" V 3720 1158 60  0000 L CNN
F 2 "" H 3650 1050 60  0000 C CNN
F 3 "" H 3650 1050 60  0000 C CNN
	1    3650 1050
	0    1    1    0   
$EndComp
Wire Wire Line
	3650 850  3650 900 
$Comp
L USB_Tool-rescue:5V-0EsseivaN_Lib #PWR0115
U 1 1 5CB6770D
P 3650 850
F 0 "#PWR0115" H 3650 700 50  0001 C CNN
F 1 "5V" H 3667 1020 45  0000 C CNN
F 2 "" H 3650 850 50  0000 C CNN
F 3 "" H 3650 850 50  0000 C CNN
	1    3650 850 
	1    0    0    -1  
$EndComp
Wire Wire Line
	1200 1400 1300 1400
Wire Wire Line
	1300 1400 1300 1850
Wire Wire Line
	1300 1850 1200 1850
Connection ~ 1200 1850
$Comp
L USB_Tool-rescue:LED-0EsseivaN_Lib P1
U 1 1 5CBEA842
P 3600 2350
F 0 "P1" V 3547 2428 60  0000 L CNN
F 1 "2V" V 3653 2428 60  0000 L CNN
F 2 "" H 3600 2350 60  0000 C CNN
F 3 "" H 3600 2350 60  0000 C CNN
	1    3600 2350
	0    1    1    0   
$EndComp
$Comp
L USB_Tool-rescue:R-0EsseivaN_Lib R2
U 1 1 5CBEC042
P 3600 2050
F 0 "R2" H 3670 2096 50  0000 L CNN
F 1 "560R" H 3670 2005 50  0000 L CNN
F 2 "" V 3530 2050 50  0000 C CNN
F 3 "" H 3600 2050 50  0000 C CNN
	1    3600 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	11150 -750 9400 -750
$Comp
L USB_Tool-rescue:5V-0EsseivaN_Lib #PWR0116
U 1 1 5CBEEF46
P 3600 1850
F 0 "#PWR0116" H 3600 1700 50  0001 C CNN
F 1 "5V" H 3617 2020 45  0000 C CNN
F 2 "" H 3600 1850 50  0000 C CNN
F 3 "" H 3600 1850 50  0000 C CNN
	1    3600 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	11150 -850 10600 -850
Text Label 3950 2950 2    50   ~ 0
~USBCFG
Text Label 3950 2650 2    50   ~ 0
~SSPND
Wire Wire Line
	11150 -550 10700 -550
Text Label 3950 2850 2    50   ~ 0
~LOWPWR
Text Label 3950 2750 2    50   ~ 0
SPI_LED
Text Label 6900 4300 2    50   ~ 0
SCK
Text Label 6900 4400 2    50   ~ 0
SDI
Text Label 6900 4200 2    50   ~ 0
SDO
Text Label 3500 900  0    50   ~ 0
5V
Text Label 1550 800  0    50   ~ 0
VBus
Text Label 1550 1000 0    50   ~ 0
D+
Text Label 1550 1100 0    50   ~ 0
D-
Wire Wire Line
	3650 1150 3650 1350
Text Label 5050 3450 0    50   ~ 0
SDI
NoConn ~ 11150 -1050
NoConn ~ 11150 -950
Wire Wire Line
	6300 2050 6300 2100
Text GLabel 1400 2500 2    50   BiDi ~ 0
ICSPDAT
Text GLabel 1400 2600 2    50   BiDi ~ 0
ICSPCLK
Wire Wire Line
	1400 2500 1100 2500
Text GLabel 1400 2200 2    50   BiDi ~ 0
VPP
Text GLabel 6850 4900 0    50   BiDi ~ 0
ICSPDAT
Text GLabel 6850 4800 0    50   BiDi ~ 0
ICSPCLK
Wire Wire Line
	1100 2200 1400 2200
Wire Wire Line
	1100 2600 1400 2600
Text Label 6900 4600 2    50   ~ 0
SCL
Text Label 6900 4700 2    50   ~ 0
SDA
Text Label 5050 3350 0    50   ~ 0
SDO
Text Label 5050 3250 0    50   ~ 0
SCK
Wire Wire Line
	10650 -150 10650 -650
Text Label 6900 3300 2    50   ~ 0
BRR
Text Label 6900 3400 2    50   ~ 0
BRA
Wire Wire Line
	7000 4300 5950 4300
NoConn ~ 7000 5300
NoConn ~ 7000 5400
Wire Wire Line
	6850 4900 7000 4900
Wire Wire Line
	6850 4800 7000 4800
NoConn ~ 7000 5100
NoConn ~ 7000 5200
$Comp
L 0EsseivaN_Lib_2:PIC18F45K40_44 U?
U 1 1 5CB7FF60
P 7800 4400
F 0 "U?" H 8400 5850 50  0000 C CNN
F 1 "PIC18F45K40_44" H 8300 5750 50  0000 C CNN
F 2 "" H 7800 4700 50  0001 C CNN
F 3 "https://www.digikey.ch/product-detail/en/microchip-technology/PIC18F45K40-I-PT/PIC18F45K40-I-PT-ND/6208274" H 7800 4700 50  0001 C CNN
	1    7800 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	8700 5400 8600 5400
Text GLabel 8700 5400 2    50   BiDi ~ 0
VPP
Wire Wire Line
	7800 5900 7900 5900
Connection ~ 7800 5900
Wire Wire Line
	7800 5950 7800 5900
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR?
U 1 1 5CBB7C21
P 7800 5950
F 0 "#PWR?" H 7800 5650 50  0001 C CNN
F 1 "GND-0EsseivaN_Lib" H 7800 5750 50  0001 C CNN
F 2 "" H 7800 5950 50  0000 C CNN
F 3 "" H 7800 5950 50  0000 C CNN
	1    7800 5950
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 5900 7900 5800
Wire Wire Line
	7700 5900 7800 5900
Wire Wire Line
	7700 5800 7700 5900
Wire Wire Line
	7900 2900 7900 2400
Connection ~ 7900 2900
Wire Wire Line
	7700 2900 7900 2900
Wire Wire Line
	7700 3000 7700 2900
Wire Wire Line
	8200 2400 8200 2550
Wire Wire Line
	7900 2400 8200 2400
Wire Wire Line
	7900 3000 7900 2900
Wire Wire Line
	8200 2800 8200 2750
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR?
U 1 1 5CB97922
P 8200 2800
F 0 "#PWR?" H 8200 2500 50  0001 C CNN
F 1 "GND-0EsseivaN_Lib" H 8200 2600 50  0001 C CNN
F 2 "" H 8200 2800 50  0000 C CNN
F 3 "" H 8200 2800 50  0000 C CNN
	1    8200 2800
	1    0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:CAPA-0EsseivaN_Lib C?
U 1 1 5CB96E3E
P 8200 2650
F 0 "C?" V 8147 2758 60  0000 L CNN
F 1 "100nF" V 8253 2758 60  0000 L CNN
F 2 "" H 8200 2650 60  0000 C CNN
F 3 "" H 8200 2650 60  0000 C CNN
	1    8200 2650
	0    1    1    0   
$EndComp
Text Label 3950 3250 2    50   ~ 0
BRR
Text Label 3950 3150 2    50   ~ 0
BRA
Text Label 6900 3500 2    50   ~ 0
~USBCFG
Wire Wire Line
	10700 -550 10700 -300
Wire Wire Line
	10600 -850 10600 -400
Text Label 6900 3700 2    50   ~ 0
~SSPND
Text Label 6900 3600 2    50   ~ 0
~LOWPWR
Wire Wire Line
	6000 4200 7000 4200
Text Label 950  3150 0    50   ~ 0
5V
$Comp
L USB_Tool-rescue:5V-0EsseivaN_Lib #PWR?
U 1 1 5CC49943
P 8200 2300
F 0 "#PWR?" H 8200 2150 50  0001 C CNN
F 1 "5V" H 8217 2470 45  0000 C CNN
F 2 "" H 8200 2300 50  0000 C CNN
F 3 "" H 8200 2300 50  0000 C CNN
	1    8200 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	8200 2300 8200 2400
Connection ~ 8200 2400
$Comp
L USB_Tool-rescue:5V-0EsseivaN_Lib #PWR?
U 1 1 5CC4CF73
P 1200 3000
F 0 "#PWR?" H 1200 2850 50  0001 C CNN
F 1 "5V" H 1217 3170 45  0000 C CNN
F 2 "" H 1200 3000 50  0000 C CNN
F 3 "" H 1200 3000 50  0000 C CNN
	1    1200 3000
	1    0    0    -1  
$EndComp
Text GLabel 1500 3450 2    50   BiDi ~ 0
SCL
Text GLabel 6650 4700 0    50   BiDi ~ 0
SDA
Wire Wire Line
	6650 4700 7000 4700
Text GLabel 6650 4600 0    50   BiDi ~ 0
SCL
Wire Wire Line
	6650 4600 7000 4600
$Comp
L 0EsseivaN_Lib_2:MRF89XAM8A U?
U 1 1 5CCB5FB4
P 3550 5500
F 0 "U?" H 3300 6050 50  0000 C CNN
F 1 "MRF89XAM8A" H 3200 5950 50  0000 C CNN
F 2 "" H 3550 5500 50  0001 C CNN
F 3 "" H 3550 5500 50  0001 C CNN
	1    3550 5500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 5300 6000 5300
Wire Wire Line
	3950 5500 6050 5500
Wire Wire Line
	3950 5400 5950 5400
Wire Wire Line
	3450 6100 3450 6200
Wire Wire Line
	3450 6200 3550 6200
Wire Wire Line
	3650 6200 3650 6100
Wire Wire Line
	3550 6100 3550 6200
Connection ~ 3550 6200
Wire Wire Line
	3550 6200 3650 6200
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR?
U 1 1 5CCD241E
P 3550 6250
F 0 "#PWR?" H 3550 5950 50  0001 C CNN
F 1 "GND-0EsseivaN_Lib" H 3550 6050 50  0001 C CNN
F 2 "" H 3550 6250 50  0000 C CNN
F 3 "" H 3550 6250 50  0000 C CNN
	1    3550 6250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3550 6200 3550 6250
$Comp
L USB_Tool-rescue:3V3-0EsseivaN_Lib #PWR?
U 1 1 5CCDE1A2
P 3550 4750
F 0 "#PWR?" H 3550 4600 50  0001 C CNN
F 1 "3V3" H 3567 4920 45  0000 C CNN
F 2 "" H 3550 4750 50  0000 C CNN
F 3 "" H 3550 4750 50  0000 C CNN
	1    3550 4750
	1    0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:CAPA-0EsseivaN_Lib C?
U 1 1 5CB772E2
P 3950 4900
F 0 "C?" V 3897 5008 60  0000 L CNN
F 1 "4.7uF" V 4003 5008 60  0000 L CNN
F 2 "" H 3950 4900 60  0000 C CNN
F 3 "" H 3950 4900 60  0000 C CNN
	1    3950 4900
	0    1    1    0   
$EndComp
Wire Wire Line
	3550 4750 3550 4800
Wire Wire Line
	3550 4800 3950 4800
Connection ~ 3550 4800
Wire Wire Line
	3550 4800 3550 5000
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR?
U 1 1 5CB84231
P 3950 5000
F 0 "#PWR?" H 3950 4700 50  0001 C CNN
F 1 "GND-0EsseivaN_Lib" H 3950 4800 50  0001 C CNN
F 2 "" H 3950 5000 50  0000 C CNN
F 3 "" H 3950 5000 50  0000 C CNN
	1    3950 5000
	1    0    0    -1  
$EndComp
Text Label 6900 3800 2    50   ~ 0
~CSCON
Text Label 6900 3900 2    50   ~ 0
~CSDAT
Wire Wire Line
	7000 3800 6200 3800
Wire Wire Line
	6200 5700 3950 5700
Wire Wire Line
	7000 3900 6250 3900
Wire Wire Line
	6250 5600 3950 5600
Wire Wire Line
	3150 5400 2700 5400
Wire Wire Line
	6300 4450 6300 4000
Wire Wire Line
	6300 4000 7000 4000
Text Label 6900 4500 2    50   ~ 0
RESET_USB
Wire Wire Line
	10500 -50  10500 -1000
Wire Wire Line
	10950 -1000 10950 -1150
Connection ~ 10950 -1150
Text Label 6900 4000 2    50   ~ 0
RESET_RF
Wire Wire Line
	6000 5300 6000 4200
Wire Wire Line
	5950 4300 5950 5400
Wire Wire Line
	6050 5500 6050 4400
Wire Wire Line
	6050 4400 7000 4400
Wire Wire Line
	6250 5600 6250 3900
Wire Wire Line
	6200 3800 6200 5700
Wire Wire Line
	3150 5600 2750 5600
Wire Wire Line
	2750 5600 2750 6350
Wire Wire Line
	2750 6350 9000 6350
Wire Wire Line
	9000 6350 9000 5100
Wire Wire Line
	9000 5100 8600 5100
Wire Wire Line
	8600 5200 8950 5200
Wire Wire Line
	8950 5200 8950 6400
Wire Wire Line
	8950 6400 2700 6400
Wire Wire Line
	2700 6400 2700 5500
Wire Wire Line
	2700 5500 3150 5500
Text Label 3100 5500 2    50   ~ 0
IRQ0
Text Label 3100 5600 2    50   ~ 0
IRQ1
Text Label 3100 5400 2    50   ~ 0
RESET_RF
Wire Wire Line
	10500 -1000 10950 -1000
Text Notes 5750 2400 0    50   ~ 0
12MHz\noscillator
$Comp
L 0EsseivaN_Lib_2:NCP114 U?
U 1 1 5CC9D2C7
P 4500 1000
F 0 "U?" H 4700 1350 50  0000 C CNN
F 1 "NCP114" H 4700 1250 50  0000 C CNN
F 2 "" H 4400 1000 50  0001 C CNN
F 3 "" H 4400 1000 50  0001 C CNN
	1    4500 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 900  4000 900 
Wire Wire Line
	3650 1350 4500 1350
Wire Wire Line
	4500 1350 4500 1300
Connection ~ 3650 1350
Wire Wire Line
	3650 1400 3650 1350
Wire Wire Line
	4900 1000 5150 1000
$Comp
L USB_Tool-rescue:3V3-0EsseivaN_Lib #PWR?
U 1 1 5CCD0867
P 5150 950
F 0 "#PWR?" H 5150 800 50  0001 C CNN
F 1 "3V3" H 5167 1120 45  0000 C CNN
F 2 "" H 5150 950 50  0000 C CNN
F 3 "" H 5150 950 50  0000 C CNN
	1    5150 950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 950  5150 1000
$Comp
L USB_Tool-rescue:CAPA_P-0EsseivaN_Lib C?
U 1 1 5CCD94D7
P 5150 1150
F 0 "C?" V 5114 1258 60  0000 L CNN
F 1 "1uF" V 5220 1258 60  0000 L CNN
F 2 "" H 5150 1150 60  0000 C CNN
F 3 "" H 5150 1150 60  0000 C CNN
	1    5150 1150
	0    1    1    0   
$EndComp
Wire Wire Line
	4500 1350 5150 1350
Wire Wire Line
	5150 1350 5150 1250
Connection ~ 4500 1350
Wire Wire Line
	5150 1000 5150 1050
Connection ~ 5150 1000
Text Label 4950 1000 0    50   ~ 0
3V3
Text Label 4200 1350 0    50   ~ 0
GND
Text Notes 3850 700  0    50   ~ 0
5V TO 3V3 LDO
Wire Wire Line
	4100 1100 4000 1100
Wire Wire Line
	4000 1100 4000 900 
Connection ~ 4000 900 
Wire Wire Line
	4000 900  3650 900 
$Comp
L Connector_Generic:Conn_01x05 J?
U 1 1 5CD07818
P 650 3350
F 0 "J?" H 568 3767 50  0000 C CNN
F 1 "Extender 1" H 568 3676 50  0000 C CNN
F 2 "" H 650 3350 50  0001 C CNN
F 3 "~" H 650 3350 50  0001 C CNN
	1    650  3350
	-1   0    0    -1  
$EndComp
Wire Wire Line
	850  3350 1300 3350
Wire Wire Line
	850  3450 1350 3450
Wire Wire Line
	850  3150 1200 3150
Wire Wire Line
	1200 3150 1200 3000
$Comp
L USB_Tool-rescue:3V3-0EsseivaN_Lib #PWR?
U 1 1 5CD41FD0
P 1350 3000
F 0 "#PWR?" H 1350 2850 50  0001 C CNN
F 1 "3V3" H 1367 3170 45  0000 C CNN
F 2 "" H 1350 3000 50  0000 C CNN
F 3 "" H 1350 3000 50  0000 C CNN
	1    1350 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	850  3250 1250 3250
Wire Wire Line
	1350 3250 1350 3000
Text Label 950  3250 0    50   ~ 0
3V3
Text Label 950  3350 0    50   ~ 0
SDA
Text Label 950  3450 0    50   ~ 0
SCL
Text Label 950  3550 0    50   ~ 0
GND
$Comp
L Connector_Generic:Conn_01x05 J?
U 1 1 5CD4A4FD
P 650 4100
F 0 "J?" H 568 4517 50  0000 C CNN
F 1 "Extender 2" H 568 4426 50  0000 C CNN
F 2 "" H 650 4100 50  0001 C CNN
F 3 "~" H 650 4100 50  0001 C CNN
	1    650  4100
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x05 J?
U 1 1 5CD4ABB8
P 650 4850
F 0 "J?" H 568 5267 50  0000 C CNN
F 1 "Extender 3" H 568 5176 50  0000 C CNN
F 2 "" H 650 4850 50  0001 C CNN
F 3 "~" H 650 4850 50  0001 C CNN
	1    650  4850
	-1   0    0    -1  
$EndComp
Wire Wire Line
	850  3900 1200 3900
Wire Wire Line
	1200 3900 1200 3150
Connection ~ 1200 3150
Wire Wire Line
	850  4000 1250 4000
Connection ~ 1250 3250
Wire Wire Line
	1250 3250 1350 3250
Wire Wire Line
	850  4100 1300 4100
Wire Wire Line
	1300 4100 1300 3350
Connection ~ 1300 3350
Wire Wire Line
	1300 3350 1500 3350
Wire Wire Line
	850  4200 1350 4200
Wire Wire Line
	1350 4200 1350 3450
Connection ~ 1350 3450
Wire Wire Line
	1350 3450 1500 3450
Wire Wire Line
	850  4300 1400 4300
Wire Wire Line
	1400 4300 1400 3550
Wire Wire Line
	850  3550 1400 3550
Wire Wire Line
	1400 3550 1550 3550
Connection ~ 1400 3550
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR?
U 1 1 5CD7F211
P 1550 3600
F 0 "#PWR?" H 1550 3300 50  0001 C CNN
F 1 "GND" H 1550 3400 50  0001 C CNN
F 2 "" H 1550 3600 50  0000 C CNN
F 3 "" H 1550 3600 50  0000 C CNN
	1    1550 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 3600 1550 3550
Wire Wire Line
	850  4650 1200 4650
Wire Wire Line
	1200 4650 1200 3900
Connection ~ 1200 3900
Wire Wire Line
	850  4750 1250 4750
Wire Wire Line
	1250 3250 1250 4000
Connection ~ 1250 4000
Wire Wire Line
	1250 4000 1250 4750
Wire Wire Line
	850  4850 1300 4850
Wire Wire Line
	1300 4850 1300 4100
Connection ~ 1300 4100
Wire Wire Line
	850  4950 1350 4950
Wire Wire Line
	1350 4950 1350 4200
Connection ~ 1350 4200
Wire Wire Line
	850  5050 1400 5050
Wire Wire Line
	1400 5050 1400 4300
Connection ~ 1400 4300
$Comp
L 0EsseivaN_Lib_2:SW_2TO1 SW?
U 1 1 5CDC9373
P 2750 900
F 0 "SW?" H 2750 1181 50  0000 C CNN
F 1 "SW_2TO1" H 2750 1090 50  0000 C CNN
F 2 "" H 2750 900 50  0001 C CNN
F 3 "" H 2750 900 50  0001 C CNN
	1    2750 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 800  2550 800 
Wire Wire Line
	2050 2300 2050 1000
Wire Wire Line
	1100 2300 2050 2300
Wire Wire Line
	2050 1000 2550 1000
Text GLabel 1500 3350 2    50   BiDi ~ 0
SDA
$Comp
L USB_Tool-rescue:R-0EsseivaN_Lib R?
U 1 1 5CB7D3C5
P 2700 4550
F 0 "R?" H 2631 4504 50  0000 R CNN
F 1 "1k" H 2631 4595 50  0000 R CNN
F 2 "" V 2630 4550 50  0000 C CNN
F 3 "" H 2700 4550 50  0000 C CNN
	1    2700 4550
	1    0    0    1   
$EndComp
Wire Wire Line
	2700 4300 2700 4350
$Comp
L USB_Tool-rescue:3V3-0EsseivaN_Lib #PWR?
U 1 1 5CB93503
P 2700 4300
F 0 "#PWR?" H 2700 4150 50  0001 C CNN
F 1 "3V3" H 2717 4470 45  0000 C CNN
F 2 "" H 2700 4300 50  0000 C CNN
F 3 "" H 2700 4300 50  0000 C CNN
	1    2700 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2700 4850 3450 4850
Wire Wire Line
	3450 4850 3450 4450
Connection ~ 2700 4850
Wire Wire Line
	2700 4850 2700 5400
Wire Wire Line
	3450 4450 6300 4450
Wire Wire Line
	2700 4750 2700 4850
$Comp
L 0EsseivaN_Lib_2:MCP2210 U?
U 1 1 5CBE857C
P 4500 2950
F 0 "U?" H 4500 4031 50  0000 C CNN
F 1 "MCP2210" H 4500 3940 50  0000 C CNN
F 2 "Housings_SSOP:SSOP-20_5.3x7.2mm_Pitch0.65mm" H 4500 2950 50  0001 C CNN
F 3 "" H 4100 2550 50  0001 C CNN
	1    4500 2950
	-1   0    0    -1  
$EndComp
$Comp
L USB_Tool-rescue:DSC6003JI2A-0EsseivaN_Lib Y1
U 1 1 5CB74EB9
P 5900 2650
F 0 "Y1" H 5900 2375 50  0000 C CNN
F 1 "DSC6003JI2A" H 5900 2284 50  0000 C CNN
F 2 "" H 5900 2650 50  0001 C CNN
F 3 "https://www.digikey.ch/product-detail/en/microchip-technology/DSC6003JI2A-012.0000T/DSC6003JI2A-012.0000TCT-ND/8042515" H 5900 2650 50  0001 C CNN
	1    5900 2650
	-1   0    0    -1  
$EndComp
NoConn ~ 5000 2850
Wire Wire Line
	3850 3600 3850 3450
Wire Wire Line
	3850 3450 4000 3450
Wire Wire Line
	3850 3800 3850 3900
Wire Wire Line
	3850 3900 4500 3900
Wire Wire Line
	4500 3900 4500 3850
Wire Wire Line
	4500 3900 4500 3950
Connection ~ 4500 3900
Wire Wire Line
	4000 2750 3600 2750
Wire Wire Line
	3600 2450 3600 2750
NoConn ~ 4000 3050
Wire Wire Line
	5200 2550 5000 2550
Wire Wire Line
	5200 2450 5000 2450
Wire Wire Line
	4200 1950 4200 2000
Wire Wire Line
	4500 2050 4500 1750
Wire Wire Line
	4500 1750 4200 1750
Wire Wire Line
	5050 2200 5050 3050
Wire Wire Line
	5050 3050 5000 3050
Wire Wire Line
	4500 1750 5050 1750
Wire Wire Line
	5050 1750 5050 1800
Connection ~ 4500 1750
$Comp
L USB_Tool-rescue:5V-0EsseivaN_Lib #PWR?
U 1 1 5CE9F6D1
P 4500 1700
F 0 "#PWR?" H 4500 1550 50  0001 C CNN
F 1 "5V" H 4517 1870 45  0000 C CNN
F 2 "" H 4500 1700 50  0000 C CNN
F 3 "" H 4500 1700 50  0000 C CNN
	1    4500 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 1700 4500 1750
NoConn ~ 4000 2450
NoConn ~ 4000 2550
Wire Wire Line
	5000 2750 5500 2750
Wire Wire Line
	5000 3250 5950 3250
Wire Wire Line
	5950 3250 5950 4300
Connection ~ 5950 4300
Wire Wire Line
	5000 3350 6050 3350
Wire Wire Line
	6050 3350 6050 4400
Connection ~ 6050 4400
Wire Wire Line
	5000 3450 6000 3450
Wire Wire Line
	6000 3450 6000 4200
Connection ~ 6000 4200
$Comp
L USB_Tool-rescue:GND-0EsseivaN_Lib #PWR?
U 1 1 5CF8B611
P 4500 3950
F 0 "#PWR?" H 4500 3650 50  0001 C CNN
F 1 "GND" H 4500 3750 50  0001 C CNN
F 2 "" H 4500 3950 50  0000 C CNN
F 3 "" H 4500 3950 50  0000 C CNN
	1    4500 3950
	-1   0    0    -1  
$EndComp
Wire Wire Line
	4000 3250 3550 3250
Wire Wire Line
	3550 3250 3550 4050
Wire Wire Line
	3550 4050 6150 4050
Wire Wire Line
	6150 4050 6150 3300
Wire Wire Line
	6150 3300 7000 3300
Wire Wire Line
	3950 3150 3500 3150
Wire Wire Line
	3500 3150 3500 4100
Wire Wire Line
	3500 4100 6100 4100
Wire Wire Line
	6100 4100 6100 3400
Wire Wire Line
	6100 3400 7000 3400
Wire Wire Line
	4000 2950 3450 2950
Wire Wire Line
	3450 2950 3450 4150
Wire Wire Line
	3450 4150 5900 4150
Wire Wire Line
	5900 4150 5900 3500
Wire Wire Line
	5900 3500 7000 3500
Wire Wire Line
	4000 2850 3400 2850
Wire Wire Line
	3400 2850 3400 4200
Wire Wire Line
	3400 4200 5850 4200
Wire Wire Line
	5850 4200 5850 3600
Wire Wire Line
	5850 3600 7000 3600
Wire Wire Line
	3350 2650 3350 4250
Wire Wire Line
	3350 4250 5800 4250
Wire Wire Line
	5800 4250 5800 3700
Wire Wire Line
	5800 3700 7000 3700
Wire Wire Line
	3350 2650 4000 2650
Text Notes 7100 3050 0    50   ~ 0
Ajouter led
Text Notes 4650 3750 0    50   ~ 0
USB to SPI
$EndSCHEMATC
