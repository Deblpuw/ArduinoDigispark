#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT); //touche windows
DigiKeyboard.delay(100); //delais de 2 seconde
DigiKeyboard.print("protection"); // on ecrit 
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER); // appuis sur entrer
DigiKeyboard.delay(1000);
ecrire("\t",100); //tabulation
ecrire("\t",100);
ecrire("\t",100);
ecrire("\t",100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT | MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
ecrire("\t",100);
ecrire("\t",100);
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void ecrire(String chaine,int delais){
  DigiKeyboard.print(chaine);
  DigiKeyboard.delay(delais);
}
