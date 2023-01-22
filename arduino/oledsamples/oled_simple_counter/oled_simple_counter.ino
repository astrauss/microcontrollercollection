#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels


Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);
int counter = 0;
String s1 = "Iteration : ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("OLED test");
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Address 0x3C for 128x32
  Serial.println("OLED begun");
  display.display();
  delay(1000);

  // Clear the buffer.
  display.clearDisplay();
  display.display();
  Serial.println("IO test");
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.print("Hello World");
  display.display(); // actually display all of the above
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  display.setCursor(0,16);
  Serial.println(s1 + String(counter));
  display.println(s1 + String(counter));
  display.display();
  
  counter++;
  display.clearDisplay();
}
