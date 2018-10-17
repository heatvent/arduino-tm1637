
#include "SevenSegmentDecimal.h"

bool  SevenSegmentDecimal::getDecimalOn(void) {
  return (_decimalOn);
};

void  SevenSegmentDecimal::setDecimalOn(bool setToOn, uint8_t position) {
    if (position <=4) {
      _decimalOn = setToOn;
      _decimalPosition = position;
    }
}

void  SevenSegmentDecimal::setDecimalPosition(uint8_t position) {
    if (position <=4) {
      _decimalPosition = position;
    }
}
