#include <LiquidCrystal_I2C.h>

int lcdColumns = 16;
int lcdRows = 2;

LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

char scene1[8] = {
  0b01110,
  0b01110,
  0b00101,
  0b11111,
  0b10100,
  0b00100,
  0b01010,
  0b10001
};

char scene2[8] = {
  0b01110,
  0b01110,
  0b10100,
  0b11111,
  0b00101,
  0b00100,
  0b01010,
  0b10001
};

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("Hello!");
  lcd.setCursor(2, 1);
  lcd.print("12bit.vn");
}

void loop()
{
  lcd.createChar(0, scene1);
  lcd.home();
  lcd.write(0);
  delay(500);
  lcd.createChar(0, scene2);
  lcd.home();
  lcd.write(0);
  delay(500);
}