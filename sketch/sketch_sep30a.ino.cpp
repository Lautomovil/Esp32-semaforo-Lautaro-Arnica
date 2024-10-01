#include <Arduino.h>
#line 1 "C:\\Users\\Lautaro\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2024830-5772-6e4v8q.dayk4\\sketch_sep30a\\sketch_sep30a.ino"
const int LED1 = 1;
const int LED0 = 0;
const int LED2 = 2;
const int Button = 3;
int EstadoBoton;
int ActualizarBoton;

#line 8 "C:\\Users\\Lautaro\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2024830-5772-6e4v8q.dayk4\\sketch_sep30a\\sketch_sep30a.ino"
void setup();
#line 16 "C:\\Users\\Lautaro\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2024830-5772-6e4v8q.dayk4\\sketch_sep30a\\sketch_sep30a.ino"
void loop();
#line 8 "C:\\Users\\Lautaro\\AppData\\Local\\Temp\\.arduinoIDE-unsaved2024830-5772-6e4v8q.dayk4\\sketch_sep30a\\sketch_sep30a.ino"
void setup() {
  pinMode(Button, INPUT_PULLUP);
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  EstadoBoton = digitalRead(Button);
}

void loop() {
  EstadoBoton = ActualizarBoton;
  ActualizarBoton = digitalRead(Button);
  if(EstadoBoton == HIGH && ActualizarBoton == LOW){

    delay(900);
    digitalWrite(LED0, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(1500);
    digitalWrite(LED0, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(3000);
    
  }else{
    digitalWrite(LED0, HIGH);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
  delay(100);
}

