// Ссылка на симуляцию в Tinkercad: https://www.tinkercad.com/things/tuled-pimeduses-naitena
// Источники: https://www.arduino.cc/, https://circuitdigest.com, https://randomnerdtutorials.com

int sensorPin = A0;      // Фоторезистор подключен к A0
int ledPin = 2;          // Светодиод подключен к D2
int valgustase;          // Переменная для хранения уровня освещения
int piir = 600;          // Пороговое значение для определения темноты

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);    // Запуск монитора порта
}

void loop() {
  valgustase = analogRead(sensorPin); // Считываем уровень освещённости
  Serial.print("Уровень освещения: ");
  Serial.println(valgustase);

  if (valgustase < piir) {
    digitalWrite(ledPin, HIGH);
    Serial.println("ТЕМНО - СВЕТОДИОД ВКЛЮЧЕН");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("СВЕТЛО - СВЕТОДИОД ВЫКЛЮЧЕН");
  }

  delay(1000); // Небольшая задержка между считываниями
}
