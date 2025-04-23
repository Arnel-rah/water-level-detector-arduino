
int bas = 2;
int moyen = 3;
int haut = 4;
int led = 13;

void setup() {
  pinMode(bas, INPUT);
  pinMode(moyen, INPUT);
  pinMode(haut, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool niveauBas = digitalRead(bas);
  bool niveauMoyen = digitalRead(moyen);
  bool niveauHaut = digitalRead(haut);

  if (!niveauBas) {
    Serial.println("Niveau critique : très bas !");
    digitalWrite(led, HIGH);
  } else if (!niveauMoyen) {
    Serial.println("Niveau moyen");
    digitalWrite(led, LOW);
  } else if (!niveauHaut) {
    Serial.println("Niveau élevé");
    digitalWrite(led, LOW);
  } else {
    Serial.println("Tous les niveaux remplis");
    digitalWrite(led, LOW);
  }

  delay(1000);
}
