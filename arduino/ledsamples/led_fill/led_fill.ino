//define GPIO Pins as variables

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;

void setup() {
  //set all used pins to be output pins
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {
  //calling method to pull pins high and light LEDs
  pullHigh();
  //calling method to pull pins low and dim off LEDs
  pullLow();
  delay(200);
}


void pullHigh()
{
  // start pulling all pins high
  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led4, HIGH);
  delay(200);
  digitalWrite(led5, HIGH);
  delay(200);
  digitalWrite(led6, HIGH);
  delay(200);
}

void pullLow()
{
  // start pulling all pins low
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}
