
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
