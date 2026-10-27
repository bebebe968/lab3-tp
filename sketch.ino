// Объявление переменных для 3-х светодиодов (Вариант 1)
const int led1 = 13;
const int led2 = 12;
const int led3 = 14;
const int led4 = 26;
const int led5 = 25;
const int led6 = 33;
const int led7 = 32;
// Кнопка для запуска состояния 1
const int btnState1 = 23;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  
  // Внутренняя подтяжка кнопки к VCC (HIGH по умолчанию)
  pinMode(btnState1, INPUT_PULLUP);
}

void loop() {
  // Проверяем, удерживается ли кнопка (при нажатии значение LOW)
  if (digitalRead(btnState1) == LOW) {
    // Выполняем мигание светодиодов с задержкой 0.25 сек (250 мс)
    digitalWrite(led1, HIGH);
    delay(250);
    digitalWrite(led1, LOW);

    digitalWrite(led2, HIGH);
    delay(250);
    digitalWrite(led2, LOW);

    digitalWrite(led3, HIGH);
    delay(250);
    digitalWrite(led3, LOW);

    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led4, LOW);

    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led5, LOW);

    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led6, LOW);

    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led7, LOW);
  } else {
    // Если кнопка отпущена — гарантированно гасим все светодиоды
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
  }
}
