// include the SevenSegmentTM1637 library
#include "SevenSegmentTM1637.h"

/* initialize global TM1637 Display object
*  The constructor takes two arguments, the number of the clock pin and the digital output pin:
* SevenSegmentTM1637(byte pinCLK, byte pinDIO);
*/
const byte PIN_CLK = 5;   // define CLK pin (any digital pin)
const byte PIN_DIO = 6;   // define DIO pin (any digital pin)
SevenSegmentTM1637    display(PIN_CLK, PIN_DIO);

// run setup code
void setup() {
  Serial.begin(9600);         // initializes the Serial connection @ 9600 baud
  display.begin();            // initializes the display
  display.setBacklight(100);  // set the brightness to 100 %
  display.print("INIT");      // display INIT on the display
  delay(1000);                // wait 1000 ms
};

// run loop (forever)
void loop() {
  
  // First, lets print 1234 and try to move the decimal position each time
  // In this example with 4 characters the 1 is in position 1, 2 in position 2, etc.  Really its printint the the character number.  So the first character is 1, the 2 and soforth.
  display.setDecimalOn(true,1);
  display.print("1234");
  delay(1000);
  display.setDecimalPosition(2);
  display.print("1234");
  delay(1000);
  display.setDecimalPosition(3);
  display.print("1234");
  delay(1000);
  display.setDecimalPosition(4);
  display.print("1234");
  delay(1000);
  display.setDecimalOn(false);
  display.clear();
  delay(1000);
  
  //Next lets try keeping the decimal position at 1 and moving 5678
  display.setDecimalOn(true, 1);
  display.print("5678");
  delay(1000);
  display.print("678 ");
  delay(1000);
  display.print("78  ");
  delay(1000);
  display.print("8   ");
  delay(1000);
  display.setDecimalOn(false);
  display.print("    "); // you have to print to the position to get the decimal to actually turn off, otherwise it stays on even when cleared
  display.clear();
  delay(1000);

};
