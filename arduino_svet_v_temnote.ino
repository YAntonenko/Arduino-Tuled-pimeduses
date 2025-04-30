int sensorPin = A0;      
int ledPin = 2;          
int valgustase;         
int piir = 600;         

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);    // Запуск монитора порта
}

void loop() {
  valgustase = analogRead(sensorPin); 
  Serial.print("Уровень освещения: ");
  Serial.println(valgustase);

  if (valgustase < piir) {
    digitalWrite(ledPin, HIGH);
    Serial.println("ТЕМНО - СВЕТОДИОД ВКЛЮЧЕН");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("СВЕТЛО - СВЕТОДИОД ВЫКЛЮЧЕН");
  }

  delay(1000); 
}
