1602-OLED-Arduino-Library
=========================

wide.HK 1602 I2C OLED Library

This Library is intended for the Wide.HK OLED 1602 display, which is similar to the ASI-V-22616204P-IWI/M.
Should work with any display using the US2066 controller in I2C mode.

Writen by Nathan Chantrell http://nathan.chantrell.net
Modified by Tagno25

Updated sendString to include cursPos data. sendString("String", col, row)
Updated Library by adding sendFloat function, this allows a float value to be
sent to the LCD, the float is converted to a string and sent using the sendString function
