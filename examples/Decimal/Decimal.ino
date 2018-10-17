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

  display.setDecimalOn(true,1);
  
  // First, lets print 1234 and try to move the decimal position each time
  display.print("1234");
  delay(1000);
  display.setDecimalPosition(2);
  delay(1000);
  display.setDecimalPosition(3);
  delay(1000);
  display.setDecimalPosition(4);
  delay(1000);
  display.clear();
  delay(1000);
  
  //Next lets try keeping the decimal position at 1 and moving 1234
  display.setDecimalPosition(1);
  display.print("1234");
  delay(1000);
  display.print("123");
  delay(1000);
  display.print("1");
  delay(1000);
  display.print("1");
  delay(1000);
  display.clear();
  delay(1000);
  
};
