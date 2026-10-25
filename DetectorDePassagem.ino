const int pinoLDR = A0;
const int pinoBuzzer = 8;

const int limiar = 1010;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(pinoLDR);

  // Mostra a leitura no Monitor Serial para facilitar o ajuste
  Serial.println(leitura);

  // Nesta montagem, leitura baixa indica que o feixe foi bloqueado
  if (leitura <= limiar) {
    tone(pinoBuzzer, 1000);  // Som de 1000 Hz
  } else {
    noTone(pinoBuzzer);
  }

  delay(50);
}
