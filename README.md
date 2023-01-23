# Arduino-Text-Manipilation
Arduino with LiquidCrystal_I2C easy text manipulation

## Hookup:
Wiring is simple:
Wire the Ground of the Arduino to ground on the LCD_I2C display

Wire the VCC of the LCD to 5 volt on the Arduino

Wire the SDA to A4 of the Arduino

Wire the SCL to A5 of the Arduino


## Programs:
There are 2 programs used A Main program CenterPlace.ino and Setup.h
CenterPlace.ino is the main program that runs and loads the Setup.h file with the added commands.

// Setup.h
#define dlay 2000
#define COLS 20 // Adjust for Columns in your display
#define ROWS 4  // Adjust for Rows in your display
LiquidCrystal_I2C lcd(0x27, COLS, ROWS);

        // resetFunc() Used to reset the Arduino from anywhere in the sketch.
        void (*resetFunc)(void) = 0;

        // Center usage:
        // center(<row>,<quoted text>)
        // Example:
        // center(1,"hello there"); // displays hello there on line 1

        int center(int b, String c)
        {
          int i = ((COLS - c.length()) / 2);
          b = b - 1;
          lcd.setCursor(i, b);
          lcd.print(c);
        }
        // Place Usage:
        // place(<row>,<column>,<text>)
        // Example:
        // place(1,1,"Line1")

        int place(int a, int b, String c)
        {
          a = a - 1;
          b = b - 1;
          lcd.setCursor(a, b);
          lcd.print(c);
        }

        void clr(int x)
        {
          delay(1000);
          lcd.setCursor(0, x - 1);
          lcd.print("                    ");
        }
