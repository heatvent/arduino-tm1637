/*
  SevenSegmentTM1637 - class to add decimal control
  Created by Heatvent, October 16, 2018
  Released into the public domain.
  Licence: GNU GENERAL PUBLIC LICENSE V2.0
  # Changelog
  v1.0  16-10-2018
  * First release
*/

#ifndef SevenSegmentDecimal_H
#define SevenSegmentDecimal_H

#if ARDUINO >= 100
 #include <Arduino.h>
#else
 #include <WProgram.h>
#endif

#include "SevenSegmentTM1637.h"

// Default values //////////////////////////////////////////////////////////////
#define TM1637_DEFAULT_DECIMAL_ON     false   //
#define TM1637_DECIMAL_BIT      B10000000

class SevenSegmentDecimal : public SevenSegmentDecimal {

public:
    /* Turn the decimal on or off	
 * When turning the decimal on, the next displayed text/numbers will have a decimal
 @param [in] setToOn       sets the decimal to on or off
 @param [in] position      sets the position/character to write to; if not identified when turning on decimals, defaults to 1 / first character printed
 */
  void    setDecimalOn(bool setToOn, uint8_t position = 1);
     /* Set the decimal position only
  * Decimal position is in relation to the position being printed.  So if you select 2 for example, the decimal will be added to the second character printed, regardless of it's actual position on the LCD
  @param [in] position      sets/changes the position/character to write to, defautls to 1 / first character printed
  */
  void    setDecimalPosition(uint8_t position = 1);
  /* Get the current decimal setting
  */
  bool    getDecimalOn(void);
  /* Sets the delay for scrolling text
  * When printing more than four characters/ the display will scroll, this setting determines the scrolling speed in ms
  @param [in] printDelay    the print delay in ms
  */  

protected:
  uint8_t   _decimalOn;               // decimal bit if set
  uint8_t   _decimalPosition;         // position of decimal 1, 2, 3, 4 based on position printed
};

#endif
