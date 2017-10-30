#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int lm35=A0;
int adc=0;
int temp=0;
const int cooler=8;


void setup() {
  analogReference(INTERNAL);
  lcd.begin(16, 2);
  pinMode(cooler,OUTPUT);
  
}

void loop() {
  adc=analogRead(lm35);
  temp=adc*0.1075268817204301;
  lcd.setCursor(0,0);
  
  
  lcd.print("Temperatura=");
  lcd.print(temp);
  lcd.print(" C*");
  if(temp>1){
    digitalWrite(cooler,HIGH);
  }else{
    digitalWrite(cooler,LOW);
  }
  lcd.setCursor(0,1);
  lcd.print("TI");
  lcd.write(62);
  lcd.print("ADM                    ");
  delay(1500);
  lcd.setCursor(0,1);
  lcd.print("NAO TOQUE");
  delay(1500);
  lcd.setCursor(0,1);
  lcd.print("Equipe 6 Midia 2        ");
  delay(1500);
  lcd.setCursor(0,1);
  lcd.print("Colegio SESI       ");
  delay(1500);
  lcd.setCursor(0,1);
  lcd.print("Ionizacao do gas             ");
  delay(1500);
 
  
 
 
  

}
