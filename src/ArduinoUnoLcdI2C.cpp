#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
   pinMode(LED_BUILTIN, OUTPUT);
  // Iniciar LCD
  //lcd.begin(20, 4);
  lcd.init();
  lcd.backlight(); // Agregar brillo
  // Limpiar
  lcd.clear();
  // Imprimir
  lcd.setCursor(0, 0);
  lcd.print("LCD i2c Arduino ");
  lcd.setCursor(0, 1); // Segunda fila
  lcd.print("cantone.com.ar  ");
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
