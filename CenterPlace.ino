#include <LiquidCrystal_I2C.h>
#include "Setup.h"


void setup() {
  // Initialize the I2C display
  lcd.init();
  lcd.backlight();
  //Clear the screen
  lcd.clear();
  // Center Text on the first line (row 0)
  center(1, "Menu Bar");
  delay(dlay * 2);
  // lcd.clear();
  // Center Text on the first line (row 0)
  center(2, "Top Centered");
  delay(dlay);
  clr(2);
  // Center Text on the second line (row 1)
  center(3, "Center Centered");
  delay(dlay);
  // Clear lines 2 and 3
  clr(2); clr(3);
  // Center Text on the Last line (row 3)
  center(4, "Centered Bottom");
  delay(dlay);
  // clear line 4
  clr(4);
  center(3, "Centered Middle");
  delay(dlay);
  // clear line 3
  clr(3);
  //Place text on line 1 column 2
  place(0, 2, "Placed");
  delay(dlay);
  clr(2);
  place(9, 3, "Placed Right");
  delay(dlay);
  clr(3);
  place(1, 3, "Placed Left");
  delay(dlay*2);
  lcd.clear();
  center(1, "Resetting...");
  delay(dlay*3);
  resetFunc();  //call reset
}
void loop() {
}
