#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
}

void loop() {
    char mae[] = {'E', 'U', ' ', 'A', 'M', 'O', ' ','M','I','N','H','A',' ' , 'M','A','E'};
    int tamanho = 0;
    //Rolagem para a direita
    while(tamanho < 16)
    {
      lcd.setCursor(tamanho, 1);
      lcd.print(mae[tamanho]);
      delay(50);
      tamanho++;
    }
    delay(1000);
     while(tamanho >= 0)
    {
      lcd.setCursor(tamanho, 1);
      lcd.print(" ");
      delay(50);
      tamanho--;
    }
    delay(500);
  }
