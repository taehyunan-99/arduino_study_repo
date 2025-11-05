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

---
*마지막 업데이트: 2025-11-05*
