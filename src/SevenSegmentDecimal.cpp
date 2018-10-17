
#include "SevenSegmentDecimal.h"

bool  SevenSegmentTM1637::getDecimalOn(void) {
  return (_decimalOn);
};

void  SevenSegmentTM1637::setDecimalOn(bool setToOn, uint8_t position) {
    if (position <=4) {
      _decimalOn = setToOn;
      _decimalPosition = position;
    }
}

void  SevenSegmentTM1637::setDecimalPosition(uint8_t position) {
    if (position <=4) {
      _decimalPosition = position;
    }
}
