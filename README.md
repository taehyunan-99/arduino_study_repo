# 📚 Arduino Study Repository

아두이노 학습을 위한 레포지토리입니다.

## 📂 폴더 구조
```
arduino_study_repo/
├── study_01/          # 기본 LED 제어
└── study_02/          # PWM, 센서, 입출력 제어
```

## 📂 학습 내용

### ⚡ PWM (Pulse Width Modulation)
- **analogWrite()**: PWM을 이용한 LED 밝기 제어 (0~255)
- **for 문 활용**: 반복문으로 LED 페이드 인/아웃 구현
- **map() 함수**: 센서 입력값을 PWM 출력값으로 변환

<br/>

### 🔘 디지털 입력
#### 택트 스위치
- **digitalRead()**: 스위치 상태 읽기 (HIGH/LOW)
- **INPUT_PULLUP**: 내부 풀업 저항 활성화
- **스위치 제어**: 버튼을 눌러 LED 켜기/부저 작동

<br/>

### 🔊 출력 장치
- **능동 부저**: digitalWrite()로 ON/OFF 제어
- **스위치 연동**: 버튼 입력에 따른 부저 작동

<br/>

### 📊 아날로그 센서
#### 가변저항 모듈
- **analogRead()**: 아날로그 값 읽기 (0~1023)
- **전압 분배**: VCC, GND, OUT 핀 연결
- **LED 밝기 조절**: 가변저항 값으로 LED 밝기 제어

<br/>

#### 조도 센서
- **분압 회로**: 고정저항과 조도센서를 이용한 전압 분배
- **빛 감지**: 조도에 따른 저항값 변화 측정
- **자동 LED 제어**: 어두워지면 LED 자동 점등

<br/>

### 🌡️ 온습도 센서 (DHT11)
- **DHT 라이브러리**: `#include "DHT.h"` 사용
- **센서 초기화**: `dht.begin()`으로 센서 시작
- **데이터 읽기**:
  - `dht.readHumidity()`: 습도 측정
  - `dht.readTemperature()`: 온도 측정 (섭씨/화씨)
- **에러 처리**: `isnan()` 함수로 센서 읽기 실패 감지

<br/>

### 📡 시리얼 통신
- **Serial.begin(9600)**: 시리얼 통신 초기화 (baud rate 설정)
- **Serial.print()**: 줄바꿈 없이 데이터 출력
- **Serial.println()**: 줄바꿈과 함께 데이터 출력
- **디버깅**: 센서 값 모니터링 및 상태 확인

<br/>

### 📏 초음파 센서 (HC-SR04)
- **pulseIn()**: 초음파 반사 시간 측정
- **거리 계산**: `거리(cm) = ((34000 * duration) / 1000000) / 2`
- **TRIG 핀**: 초음파 발신 트리거
- **ECHO 핀**: 반사파 수신 및 시간 측정
- **응용**: 거리 기반 LED/부저 제어

<br/>

### 💨 가스 센서 (MQ-2)
- **아날로그 출력**: `analogRead()`로 가스 농도 측정 (0~1023)
- **디지털 출력**: `digitalRead()`로 임계값 초과 여부 확인
- **히터 예열**: 센서 정확도를 위한 초기 가열 시간 필요
- **응용**: 가스 감지 시 경보 시스템 구현

<br/>

### 🔄 서보 모터
- **Servo 라이브러리**: `#include <Servo.h>` 사용
- **servo.attach(pin)**: 서보 모터 핀 연결
- **servo.write(angle)**: 각도 제어 (0~180°)
- **응용**: 가변저항으로 서보 각도 조절

<br/>

### 📺 LCD 디스플레이 (I2C)
- **LiquidCrystal_I2C 라이브러리**: I2C 통신으로 LCD 제어
- **lcd.init()**: LCD 초기화
- **lcd.backlight()**: 백라이트 켜기
- **lcd.setCursor(x, y)**: 커서 위치 설정 (16x2 LCD)
- **lcd.print()**: 텍스트 출력
- **lcd.write(0xDF)**: 특수 문자 출력 (° 기호)
- **lcd.clear()**: 화면 전체 지우기 (깜빡임 발생)
- **조건부 업데이트**: 값 변경 시에만 LCD 갱신하여 깜빡임 방지

<br/>

### 🕐 타이밍 제어
- **delay()**: 전체 프로그램 일시 정지 (ms 단위)
- **millis()**: 프로그램 시작 후 경과 시간 (ms 단위)
- **비동기 제어**: `millis()`를 사용한 non-blocking 타이머 구현
- **응용**: LCD는 실시간 업데이트, Serial은 1초마다 출력하는 독립적 제어

<br/>

---
*마지막 업데이트: 2025-11-06*
