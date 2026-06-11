#include <LiquidCrystal.h>

// LCD Pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorPin = A0;
int sensorValue = 0;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);

  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("UNDERGROUND CABLE");
  lcd.setCursor(0, 1);
  lcd.print("FAULT DETECTOR");

  delay(2000);
}

void loop()
{
  lcd.clear();

  // R Phase
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);

  delay(350);

  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue >= 1000)
  {
    lcd.setCursor(0, 0);
    lcd.print("R - NF");
    Serial.print("R - NF");
  }
  else if (sensorValue >= 890 && sensorValue <= 920)
  {
    lcd.setCursor(0, 0);
    lcd.print("R - 2KM");
    Serial.print("R - 2KM");
  }
  else if (sensorValue >= 860 && sensorValue <= 880)
  {
    lcd.setCursor(0, 0);
    lcd.print("R - 4KM");
    Serial.print("R - 4KM");
  }
  else if (sensorValue >= 800 && sensorValue <= 825)
  {
    lcd.setCursor(0, 0);
    lcd.print("R - 6KM");
    Serial.print("R - 6KM");
  }
  else if (sensorValue >= 670 && sensorValue <= 688)
  {
    lcd.setCursor(0, 0);
    lcd.print("R - 8KM");
    Serial.print("R - 8KM");
  }

  delay(1500);

  // Y Phase
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);

  delay(350);

  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue >= 1000)
  {
    lcd.setCursor(8, 0);
    lcd.print("Y-NF");
    Serial.print("Y-NF");
  }
  else if (sensorValue >= 890 && sensorValue <= 920)
  {
    lcd.setCursor(8, 0);
    lcd.print("Y-2KM");
    Serial.print("Y-2KM");
  }
  else if (sensorValue >= 860 && sensorValue <= 880)
  {
    lcd.setCursor(8, 0);
    lcd.print("Y-4KM");
    Serial.print("Y-4KM");
  }
  else if (sensorValue >= 800 && sensorValue <= 825)
  {
    lcd.setCursor(8, 0);
    lcd.print("Y-6KM");
    Serial.print("Y-6KM");
  }
  else if (sensorValue >= 670 && sensorValue <= 688)
  {
    lcd.setCursor(8, 0);
    lcd.print("Y-8KM");
    Serial.print("Y-8KM");
  }

  delay(1500);

  // B Phase
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

  delay(350);

  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue >= 1000)
  {
    lcd.setCursor(5, 1);
    lcd.print("B-NF");
    Serial.println("B-NF");
  }
  else if (sensorValue >= 890 && sensorValue <= 920)
  {
    lcd.setCursor(5, 1);
    lcd.print("B-2KM");
    Serial.println("B-2KM");
  }
  else if (sensorValue >= 860 && sensorValue <= 880)
  {
    lcd.setCursor(5, 1);
    lcd.print("B-4KM");
    Serial.println("B-4KM");
  }
  else if (sensorValue >= 800 && sensorValue <= 825)
  {
    lcd.setCursor(5, 1);
    lcd.print("B-6KM");
    Serial.println("B-6KM");
  }
  else if (sensorValue >= 670 && sensorValue <= 688)
  {
    lcd.setCursor(5, 1);
    lcd.print("B-8KM");
    Serial.println("B-8KM");
  }

  delay(1500);
}