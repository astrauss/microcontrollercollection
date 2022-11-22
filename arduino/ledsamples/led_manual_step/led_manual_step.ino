#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define ledCount 8
#define dataPin 10


int dataRead = 0;
int counter = 0;
bool overflow = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(dataPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  dataRead = digitalRead(dataPin);
  if(dataRead && !overflow) {
    counter = counter + 1;
    pullPinHigh(counter);
    delay(300);
  } else if(dataRead && overflow) {
    counter = counter + 1;
    pullPinLow(counter);
    delay(300);
  }
}

void pullPinHigh(int led) {
  switch (counter) {
      case 1:
        digitalWrite(led1, HIGH);
        break;
      case 2:
        digitalWrite(led2, HIGH);
        break;
      case 3:
        digitalWrite(led3, HIGH);
        break;
      case 4:
        digitalWrite(led4, HIGH);
        break;
      case 5:
        digitalWrite(led5, HIGH);
        break;
      case 6:
        digitalWrite(led6, HIGH);
        break;
      case 7:
        digitalWrite(led7, HIGH);
        break;
      case 8:
        digitalWrite(led8, HIGH);
        overflow = true;
        counter = 0;
        break;
      default:
        break;
    }
}

void pullPinLow(int led) {
  switch (led) {
      case 1:
        digitalWrite(led8, LOW);
        break;
      case 2:
        digitalWrite(led7, LOW);
        break;
      case 3:
        digitalWrite(led6, LOW);
        break;
      case 4:
        digitalWrite(led5, LOW);
        break;
      case 5:
        digitalWrite(led4, LOW);
        break;
      case 6:
        digitalWrite(led3, LOW);
        break;
      case 7:
        digitalWrite(led2, LOW);
        break;
      case 8:
        digitalWrite(led1, LOW);
        overflow = false;
        counter = 0;
        break;
      default:
        break;
    }
}
