// 1초마다 LED 깜빡거리게 하기

int R_Pin = 12;
int G_Pin = 11;
int B_Pin = 10;

void setup() {
  pinMode(R_Pin, OUTPUT);
  pinMode(G_Pin, OUTPUT);
  pinMode(B_Pin, OUTPUT);
}

void loop() {
  digitalWrite(R_Pin, HIGH);
  delay(500);
  digitalWrite(G_Pin, HIGH);
  delay(500);
  digitalWrite(B_Pin, HIGH);
  delay(500);  

  digitalWrite(R_Pin, LOW);
  delay(500);  
  digitalWrite(G_Pin, LOW);
  delay(500);  
  digitalWrite(B_Pin, LOW);
  delay(500);  
}
