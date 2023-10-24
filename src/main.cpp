#include <Arduino.h>

void setup() {
  Serial1.begin(9600);
  Serial1.println("Hello, world! - setup()");
  pinMode(LED_BUILTIN, OUTPUT);
}

int loopIndex = 0;

void loop() {
  Serial1.print("Hello, world! - loop() ");
  Serial1.println(loopIndex++);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
