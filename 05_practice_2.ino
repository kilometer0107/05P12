int ledPin = 7;  // GPIO 7번 핀에 LED 연결

void setup() {
  pinMode(ledPin, OUTPUT);  // LED 핀을 출력 모드로 설정
}

void loop() {
  // 1. 처음 1초 동안 LED 켜기
  digitalWrite(ledPin, LOW);  // LED 켜기
  delay(1000);                 // 1초 대기

  // 2. 1초 동안 5회 깜빡이기 (0.2초 간격으로 깜빡임)
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);  // LED 끄기
    delay(100);                 // 0.1초 대기
    digitalWrite(ledPin, LOW); // LED 켜기
    delay(100);                 // 0.1초 대기
  }

  // 3. 깜빡인 후 LED 끄기
  digitalWrite(ledPin, HIGH);  // LED 끄기

  // 4. 무한 루프로 종료
  while (1) {
    // 아무것도 하지 않음, LED 꺼진 상태 유지
  }
}
