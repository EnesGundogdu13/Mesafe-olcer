#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
  lcd.begin(16, 2);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);
}
void loop() 
{
  lcd.setCursor(0, 0);
  lcd.print("Mesafe");
  digitalWrite(6,1); delay(1);
  digitalWrite(6,0);
  int sure=pulseIn(7,1);
  int mesafe=(sure/2)/28.97;
  delay(10);
  lcd.setCursor(0, 1);
  lcd.print(mesafe);
  lcd.setCursor(5, 1);
  lcd.print("cm");
}