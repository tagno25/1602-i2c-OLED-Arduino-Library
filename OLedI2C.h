/*
	OLedI2C.h
	OLED 1602 Library for the I2C
	OLED display from WIDE.HK
	Also my first attempt at a Library
	Phil Grant Sept 2013
	www.gadjet.co.uk
	Scrolling contributed by Nathan Chantrell http://nathan.chantrell.net/
	Updated 06/11/2013 to include the cursPos data within the sendString function.
*/
#ifndef OLedI2C_h
#define OLedI2C_h

#define LCD_5x8DOTS 0x00

#include "Arduino.h"
#include "Wire.h"
#include <inttypes.h>
#include "Print.h"

class OLedI2C : public Print{
public:
		OLedI2C();
		~OLedI2C();
		void init();
		void begin(uint8_t cols, uint8_t rows, uint8_t charsize = LCD_5x8DOTS);
		void sendCommand(unsigned char command);
		void sendString(const char *String, uint8_t col, uint8_t row);
		void sendFloat(float digit, uint8_t dec, uint8_t nad, uint8_t col, uint8_t row);
		void sendData(unsigned char data);
		void clearLcd();
		void clear();
		void cursPos(uint8_t, uint8_t); // cloumn, row
		void setCursor(uint8_t, uint8_t); // cloumn, row
		void scrollString(char* message, byte row, unsigned int time); //written by Nathan Chantrell http://nathan.chantrell.net/
		void lcdOff();
		void lcdOn();
		void noDisplay();
		void display();
		void setContrast(unsigned char contrast); // contrast should be the hex value between 0x00 and 0xFF
		virtual size_t write(uint8_t);
};
#endif
