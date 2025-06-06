// Define o pino digital onde o sensor PIR está conectado
int pirPin = 2;  

// Variável para armazenar o estado atual do movimento
int estado = LOW;  

// Armazena o tempo em que o movimento foi detectado
unsigned long tempoMovimento = 0;

// Flag para indicar se o movimento está sendo considerado ativo
bool movimentoAtivo = false;

void setup() {
  // Configura o pino do sensor como entrada (recebe sinais do PIR)
  pinMode(pirPin, INPUT);

  // Inicializa a comunicação serial a 9600 bps (para monitorar o status via Serial Monitor)
  Serial.begin(9600);
}

void loop() {
  // Lê o valor atual do pino do sensor (HIGH = movimento detectado, LOW = sem movimento)
  int leitura = digitalRead(pirPin);

  // Se o sensor detectar movimento E ainda não estiver marcado como ativo
  if (leitura == HIGH && !movimentoAtivo) {
    Serial.println("Movimento detectado");   // Mostra no monitor serial
    movimentoAtivo = true;                   // Marca que há movimento ativo
    tempoMovimento = millis();               // Registra o tempo em que o movimento começou
  }

  // Verifica se o movimento está ativo e se já se passaram 5 segundos
  // Isso simula o "fim do movimento" para efeitos de teste ou lógica posterior
  if (movimentoAtivo && millis() - tempoMovimento > 5000) {
    Serial.println("Fim do movimento (simulado)");  // Mostra mensagem de fim
    movimentoAtivo = false;                         // Reseta o estado de movimento
  }

  // Aguarda 100ms antes da próxima leitura (evita leituras excessivas)
  delay(100);
}
