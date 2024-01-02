#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 4); // I2C address 0x27, 16 column and 2 rows

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
}

void loop()
{
  lcd.clear();             // clear display
  delay(500);
  lcd.setCursor(3, 0);         // move cursor to   (0, 0)
  lcd.print("Happy New Year");        // print message at (0, 0)
  lcd.setCursor(8, 1);        // move cursor to   (2, 1)
  delay(1000); 
  lcd.print("2024"); // print message at (2, 1)
  delay(1000);                 // display the above for two seconds
  lcd.setCursor(9, 3);          // move cursor t 0)
  lcd.print("- CraftLabs");
  delay(2500);                  // display the above for two seconds

  lcd.clear();
  delay(500);
  lcd.setCursor(5,0);
  lcd.print("10% off");
  delay(1000);
  lcd.setCursor(3, 2);
  lcd.print("Till 30 January");
  lcd.setCursor(8, 3);
  lcd.print("2024");
  delay(2000);
}
