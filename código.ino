int pirPin = 2;
int estado = LOW;
unsigned long tempoMovimento = 0;
bool movimentoAtivo = false;

void setup() {
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = digitalRead(pirPin);

  if (leitura == HIGH && !movimentoAtivo) {
    Serial.println("Movimento detectado");
    movimentoAtivo = true;
    tempoMovimento = millis();
  }

  // Simula fim do movimento após 5 segundos
  if (movimentoAtivo && millis() - tempoMovimento > 5000) {
    Serial.println("Fim do movimento (simulado)");
    movimentoAtivo = false;
  }

  delay(100);
}
