#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(37, OUTPUT);
  Serial.begin(115200);
}

void zeroon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(33, HIGH);
  Serial.println("zero!");
}

void oneon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  Serial.println("one!");
}

void twoon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(29, HIGH);
  Serial.println("two!");
}

void threeon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  Serial.println("three!");
}

void fouron() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(33, HIGH);
  Serial.println("four!");
}

void fiveon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  Serial.println("five!");
}

void sixon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(31, HIGH);
  Serial.println("six!");
}

void sevenon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  Serial.println("seven!");
}

void eighton() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(35, HIGH);
  Serial.println("eight!");
}

void nineon() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(35, HIGH);
  Serial.println("nine!");
}

void globallo() {
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(23, LOW);
  digitalWrite(25, LOW);
  digitalWrite(27, LOW);
  digitalWrite(29, LOW);
  digitalWrite(31, LOW);
  digitalWrite(33, LOW);
  digitalWrite(35, LOW);
  digitalWrite(37, LOW);
  Serial.println("off!");
}

void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(37, HIGH);
  Serial.println("on!");
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(23, LOW);
  digitalWrite(25, LOW);
  digitalWrite(27, LOW);
  digitalWrite(29, LOW);
  digitalWrite(31, LOW);
  digitalWrite(33, LOW);
  digitalWrite(35, LOW);
  digitalWrite(37, LOW);
  Serial.println("off!");
  delay(500);
}

void loop() {
  zeroon();
  delay(500);
  globallo();
  oneon();
  delay(500);
  globallo();
  twoon();
  delay(500);
  globallo();
  threeon();
  delay(500);
  globallo();
  fouron();
  delay(500);
  globallo();
  fiveon();
  delay(500);
  globallo();
  sixon();
  delay(500);
  globallo();
  sevenon();
  delay(500);
  globallo();
  eighton();
  delay(500);
  globallo();
  nineon();
  delay(500);
  globallo();

}