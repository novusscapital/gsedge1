# Projeto: [RiverSafe]

## 📝 Descrição do Problema
O projeto RiverSafe surge como uma resposta inovadora ao crescente desafio das enchentes urbanas. Por meio de um dispositivo acessível, de baixo custo e tecnologicamente avançado, a iniciativa visa ampliar a capacidade de monitoramento e resposta em áreas de risco. A proposta é oferecer um sistema preciso e de amplo alcance, capaz de antecipar cenários de inundação e apoiar ações de evacuação e preparação, contribuindo diretamente para a preservação de vidas e a redução de danos materiais.

---

## 💡 Visão Geral da Solução
### 🛠 Componentes Utilizados:
- 1x Arduino UNO
- 1x Sensor PIR (HC-SR501 ou similar)
- 1x Protoboard
- 3x Cabos jumper (macho-macho)

### 🖼 Ilustração da Solução:
![Diagrama do Circuito](./RIVERSAFE.png)

---

## 🔧 Instruções de Montagem e Funcionamento
1 - Conecte o sensor PIR à protoboard
  - Posicione o sensor PIR com os três pinos voltados para a frente:
    - VCC (ou +)
    - OUT (ou sinal)
    - GND (ou –)

2 - Ligue o GND do sensor ao GND do Arduino
  - Use um jumper preto para conectar o pino GND do sensor à porta GND do Arduino.

3- Ligue o VCC do sensor ao 5V do Arduino
  - Use um jumper vermelho para conectar o pino VCC ao pino 5V do Arduino.

4 - Ligue o pino de sinal do sensor ao pino digital 2 do Arduino
  - Use um jumper verde (ou outra cor) para conectar o pino OUT do sensor ao pino digital 2 do Arduino.

5 - Alimente o Arduino via USB ou fonte externa
  - Conecte o cabo USB ao computador para teste ou use uma fonte externa 9V/12V.

---

## 🧪 Simulação do Projeto

### 👉 Wokwi:
- Link direto: ([(https://wokwi.com/projects/432962548923110401)](https://wokwi.com/projects/432962548923110401))

---

## ▶️ Vídeo Demonstrativo
[(https://youtu.be/klh_VZ6_kas)](https://youtu.be/klh_VZ6_kas)

---

## 📁 Arquivos do Projeto
- `código.ino` – Código-fonte do Arduino
- `RIVERSAFE.png` – Imagem do circuito
- `README.md` – Documentação
