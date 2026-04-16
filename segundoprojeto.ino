int vermelho = 2;
int verde = 3;
int azul = 4;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  digitalWrite(vermelho, HIGH);
  delay(500);
  digitalWrite(vermelho, LOW);

  digitalWrite(verde, HIGH);
  delay(500);
  digitalWrite(verde, LOW);

  digitalWrite(azul, HIGH);
  delay(500);
  digitalWrite(azul, LOW);
}