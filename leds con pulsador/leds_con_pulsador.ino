int ledPin1 = 13;
int ledPin2 = 8;
int botonPin = 7;
int tiempoDelay = 1000;
bool botonPresionado = false;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(botonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(botonPin) == LOW && !botonPresionado) {
    botonPresionado = true;
    tiempoDelay = (tiempoDelay == 1000) ? 2000 : 1000;
  }

  if (digitalRead(botonPin) == HIGH) {
    botonPresionado = false;
  }

  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(tiempoDelay);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  delay(tiempoDelay);
}
