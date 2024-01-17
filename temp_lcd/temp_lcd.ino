/*
This is a very simple temperature monitoring project.
I have used LM35 & a LCD_I2C 16x4 display
*/

#include <LiquidCrystal_I2C.h>

// For LM35
#define ADC_VREF_mV    5000.0 
#define ADC_RESOLUTION 1024.0
#define PIN_LM35       A0

// Library for LCD_I2C Display
LiquidCrystal_I2C lcd(0x27, 16, 4); // I2C address 0x27, 16 column and 2 rows

float tempC = 0;
float adcVal = 0;
float milliVolt = 0;

void setup()
{
  Serial.begin(9600);
  lcd.init(); // initialize the lcd
  lcd.backlight();
  
  // LCD
  lcd.clear();
  delay(500);
  lcd.setCursor(2, 0);
  lcd.print("Temperature");


}

void loop() {
// LM35 Temperature in °C
  // get the ADC value from the temperature sensor
  adcVal = analogRead(PIN_LM35);
  // convert the ADC value to voltage in millivolt
  milliVolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);
  // convert the voltage to the temperature in Celsius
  tempC = milliVolt / 10;

  Serial.println("Temperature ");
  Serial.println(tempC);
  Serial.print("°C");
  lcd.setCursor(5, 2);
  delay(100);
  lcd.print(tempC);
  lcd.print(" C");
  delay(1000);
}
