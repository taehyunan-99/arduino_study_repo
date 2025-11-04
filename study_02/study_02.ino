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

int Switch1 = 12;
int Switch2 = 11;
int RedPin = 4;
int BluePin = 5;

void setup() {
  Serial.begin(9600);
  pinMode(Switch1, INPUT_PULLUP); 
  pinMode(Switch2, INPUT_PULLUP); 
  pinMode(RedPin, INPUT_PULLUP); 
  pinMode(BluePin, INPUT_PULLUP); 
}

void loop() {
  int SW1 = digitalRead(Switch1);
  digitalWrite(RedPin, LOW);
  int SW2 = digitalRead(Switch2);
  digitalWrite(BluePin, LOW);

  if(SW1 == LOW){
    Serial.print("Switch : ");
    Serial.println("RED");
    digitalWrite(RedPin, HIGH);
  }

  if(SW2 == LOW){
    Serial.print("Switch : ");
    Serial.println("BLUE");
    digitalWrite(BluePin, HIGH);
  }
  delay(100);
}
