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

// #include "DHT.h"

// #define DHTPIN 2
// #define DHTTYPE DHT11
// DHT dht(DHTPIN, DHTTYPE);

// void setup() {
//   Serial.begin(9600);
//   dht.begin();
// }

// void loop() {
//   delay(2000);
//   float h = dht.readHumidity();
//   float c = dht.readTemperature();
//   float f = dht.readTemperature(true);

//   if (isnan(h) || isnan(c) || isnan(f)) {
//     Serial.println("Failed to read from DHT sensor");
//     return;
//   }

//   Serial.print("Humidity : ");
//   Serial.print(h);
//   Serial.println(" % ");
//   Serial.print("Temperature : ");
//   Serial.print(c);
//   Serial.print(" °C / ");
//   Serial.print(f);
//   Serial.println(" °F ");
//   Serial.println("");
// }

// =============================================

// 초음파 센서

// #define TRIG 9
// #define ECHO 8

// void setup() {
//   Serial.begin(9600);
//   pinMode(TRIG, OUTPUT);
//   pinMode(ECHO, INPUT);
// }

// void loop() {
//   digitalWrite(TRIG, HIGH);
//   delay(10);
//   digitalWrite(TRIG, LOW);
//   float duration = pulseIn(ECHO, HIGH);
//   float distance = ((34000*duration)/1000000)/2;
//   Serial.print(distance);
//   Serial.println("cm");
//   delay(100);
// }

// =============================================

// 초음파 센서로 부저와 LED 작동

// #define TRIG 9
// #define ECHO 8
// #define BUZZER 13
// #define LED 3

// void setup() {
//   Serial.begin(9600);
//   pinMode(TRIG, OUTPUT);
//   pinMode(ECHO, INPUT);
//   pinMode(LED, OUTPUT); 
//   pinMode(BUZZER, OUTPUT); 
// }

// void loop() {
//   digitalWrite(TRIG, HIGH);
//   delay(10);
//   digitalWrite(TRIG, LOW);

//   float duration = pulseIn(ECHO, HIGH);
//   float distance = ((34000*duration)/1000000)/2;

//   if(distance < 300) {
//     digitalWrite(BUZZER, HIGH);
//     digitalWrite(LED, HIGH);
//   } else {
//     digitalWrite(BUZZER, LOW);
//     digitalWrite(LED, LOW);
//   }

//   Serial.print(distance);
//   Serial.println("cm");
//   delay(100);
// }

// =============================================

// 가스 센서

// #define GAS_A A0
// #define GAS_D 8
// #define BUZZER 13
// #define LED 3

// void setup() {
//   Serial.begin(9600);
//   pinMode(LED, OUTPUT); 
//   pinMode(BUZZER, OUTPUT); 
//   Serial.println("히터 가열");
//   delay(1000);
// }

// void loop() {
//   float sensorValue = analogRead(GAS_A);
//   float sensorDValue = digitalRead(GAS_D);
//   Serial.println("");
//   Serial.print("센서 입력 : ");
//   Serial.println(sensorValue);

//   if(sensorValue > 300) {
//     Serial.print(" |연기감지!");
//     Serial.println("");
//     digitalWrite(BUZZER, HIGH);
//     digitalWrite(LED, HIGH);
//   } else {
//     digitalWrite(BUZZER, LOW);
//     digitalWrite(LED, LOW);
//   }

//   Serial.print("센서 디지털 : ");
//   Serial.print(sensorDValue);
//   Serial.println("");

//   delay(1000);
// }

// =============================================

// 서브 모터

// #include <Servo.h>

// Servo servo;

// void setup() {
//   Serial.begin(9600);
//   servo.attach(10);
// }

// void loop() {
//   for (int angle=0; angle<=180; angle ++) {
//     servo.write(angle);
//     Serial.print("angle : ");
//     Serial.print(angle);
//     Serial.println("");
//     delay(100);
//   }
// }

// =============================================

// LCD 디스플레이

// #include <LiquidCrystal_I2C.h>
// LiquidCrystal_I2C lcd(0x27, 16, 2);

// void setup() {
//   lcd.init();
//   lcd.backlight();
// }

// void loop() {
//   lcd.setCursor(0, 0);
//   lcd.print("Hello, World!");
//   delay(1000);

//   lcd.setCursor(0, 1);
//   lcd.print("Posco X Codingon");
//   delay(1000);

//   lcd.clear();
//   delay(1000);
// }

// =============================================
// LCD 가변저항 서브모터 사용

// #include <LiquidCrystal_I2C.h>
// #include <Servo.h>
// LiquidCrystal_I2C lcd(0x27, 16, 2);
// Servo servo;

// int prevResistor = -1;

// void setup() {
//   lcd.init();
//   lcd.backlight();
//   Serial.begin(9600);
//   servo.attach(10);
//   lcd.setCursor(0, 0);
//   lcd.print("Current Angle");
// }

// void loop() {
//   int resistor = analogRead(A0);
//   Serial.println(resistor);
//   resistor = map(resistor, 0, 1023, 0, 180);
//   servo.write(resistor);

//   if(resistor != prevResistor) {
//     lcd.setCursor(0, 1);
//     lcd.print("   ");
//     lcd.setCursor(0, 1);
//     lcd.print(resistor);
//     lcd.write(0xDF);

//     prevResistor = resistor;
//   }
//   Serial.println("");
//   Serial.print(resistor);
//   Serial.println(" °");
// }

// =============================================

// RFID 사용
// 하얀색 3777252
// 파란색 1722392051

// #include <SPI.h>
// #include <MFRC522.h>

// #define RST_PIN 9
// #define SS_PIN 10
// #define BUZZER 8
// #define R_LED 2
// #define B_LED 3
// #define W_CARD "3777252"
// #define B_CARD "1722392051"

// MFRC522 mfrc(SS_PIN, RST_PIN);

// void setup() {
//   Serial.begin(9600);
//   SPI.begin();
//   mfrc.PCD_Init();

//   pinMode(BUZZER, OUTPUT);
//   pinMode(R_LED, OUTPUT);
//   pinMode(B_LED, OUTPUT);
// }

// void loop() {
//   if(!mfrc.PICC_IsNewCardPresent() || !mfrc.PICC_ReadCardSerial()) {
//     delay(500);
//     return;
//   }

//   digitalWrite(BUZZER, LOW);
//   digitalWrite(R_LED, LOW);
//   digitalWrite(B_LED, LOW);

//   String cardUID = "";

//   for(byte i = 0; i < 4; i++) { 
//     cardUID += String(mfrc.uid.uidByte[i]);
//     Serial.println("")
//   }

//   if(cardUID == W_CARD) {
//     digitalWrite(B_LED, HIGH);
//     digitalWrite(BUZZER, HIGH);
//     delay(100);
//     digitalWrite(BUZZER, LOW);
//     digitalWrite(B_LED, LOW);
//   }

//   if(cardUID == B_CARD) {
//   digitalWrite(R_LED, HIGH);
//   digitalWrite(BUZZER, HIGH);
//   delay(100);
//   digitalWrite(BUZZER, LOW);
//   digitalWrite(R_LED, LOW);
//   delay(100);
//   digitalWrite(R_LED, HIGH);
//   digitalWrite(BUZZER, HIGH);
//   delay(100);
//   digitalWrite(BUZZER, LOW);
//   digitalWrite(R_LED, LOW);
//   }
// }

// =============================================









