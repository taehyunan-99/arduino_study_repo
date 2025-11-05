// PWM 활용

// int R_Pin = 3;

// void setup() {
//   pinMode(R_Pin, OUTPUT);
// }

// void loop() {
//   analogWrite(3, 255); // 3번 핀 최대 출력
//   delay(500);
//   analogWrite(3, 128); // 3번 핀 50% 출력
//   delay(500);
//   analogWrite(3, 0); // 3번 핀 0% 출력
//   delay(500);
// }

// =============================================

// PWM For 문 활용

// int ledPin = 3;
// int brightness = 0;
// void setup() {
//   pinMode(ledPin, OUTPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   for (brightness = 0; brightness < 255; brightness++) {
//     analogWrite(ledPin, brightness);
//     delay(10);
//     Serial.println(brightness);
//   }
// }

// =============================================

// 택트 스위치 실습 1

// int pushButton = 2; // 연결 핀 변수 선언

// void setup() {
//   Serial.begin(9600); // PC와 시리얼 통신 시작, 통신 속도 = 9600 baud
//   pinMode(pushButton, INPUT); // 2핀에 연결된 스위치가 눌렸는지 읽어들이기 위해 INPUT 모드 설정
// }

// void loop() {
//   int buttonState = digitalRead(pushButton);
//   Serial.println(buttonState);
//   delay(1);
// }

// =============================================

// 택트 스위치 실습 2

// int Switch1 = 12;
// int Switch2 = 11;
// int RedPin = 4;
// int BluePin = 5;

// void setup() {
//   Serial.begin(9600);
//   pinMode(Switch1, INPUT_PULLUP); 
//   pinMode(Switch2, INPUT_PULLUP); 
//   pinMode(RedPin, INPUT_PULLUP); 
//   pinMode(BluePin, INPUT_PULLUP); 
// }

// void loop() {
//   int SW1 = digitalRead(Switch1);
//   digitalWrite(RedPin, LOW);
//   int SW2 = digitalRead(Switch2);
//   digitalWrite(BluePin, LOW);

//   if(SW1 == LOW){
//     Serial.print("Switch : ");
//     Serial.println("RED");
//     digitalWrite(RedPin, HIGH);
//   }

//   if(SW2 == LOW){
//     Serial.print("Switch : ");
//     Serial.println("BLUE");
//     digitalWrite(BluePin, HIGH);
//   }
//   delay(100);
// }

// =============================================

// 능동 부저
// void setup() {
//   pinMode(13, OUTPUT);
// }

// void loop() {
//   digitalWrite(13, LOW);
//   delay(1000);
//   digitalWrite(13, LOW);
//   delay(1000);
// }

// =============================================

// 스위치 사용해서 부저 소리 내기

// int Switch = 12;
// int Buzzer = 13;

// void setup() {
//   Serial.begin(9600);
//   pinMode(Switch, INPUT_PULLUP); 
//   pinMode(Buzzer, OUTPUT); 
// }

// void loop() {
//   int SW = digitalRead(Switch);
//   digitalWrite(Buzzer, LOW);

//   if(SW == LOW) {
//   digitalWrite(Buzzer, HIGH);
//   }
// }

// =============================================

// 가변 저항 모듈 사용

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   int readValue = analogRead(A0);
//   Serial.println(readValue);
// }

// =============================================

// 가변 저항 모듈로 LED 밝기 조절하기
// int LED = 3;

// void setup() {
//   Serial.begin(9600);
//   pinMode(LED, OUTPUT);
// }

// void loop() {
//   int resistor = analogRead(A0);
//   Serial.println(resistor);
//   resistor = map(resistor, 0, 1023, 0, 255); // 입력값을 출력값으로 변경
//   analogWrite(3, resistor);
//   delay(100);
// }

// =============================================

// 조도 센서

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   int photoresistor = analogRead(A0);
//   Serial.println(photoresistor);
//   delay(100);
// }

// =============================================

// 조도 센서 사용해서 LED 작동

// int LED = 3;

// void setup() {
//   Serial.begin(9600);
//   pinMode(LED, OUTPUT);
// }

// void loop() {
//   int photoresistor = analogRead(A0);
//   Serial.println(photoresistor);

//   digitalWrite(LED, LOW);

//   if(photoresistor > 940) {
//   digitalWrite(LED, HIGH);
//   }

//   delay(100);
// }

// =============================================

// 온습도 센서

#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float c = dht.readTemperature();
  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(c) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor");
    return;
  }

  Serial.print("Humidity : ");
  Serial.print(h);
  Serial.println(" % ");
  Serial.print("Temperature : ");
  Serial.print(c);
  Serial.print(" °C / ");
  Serial.print(f);
  Serial.println(" °F ");
  Serial.println("");
}