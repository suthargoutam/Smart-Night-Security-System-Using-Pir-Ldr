#define LDR A0
#define PIR D7
#define BUZZER D6
#define R_LED D5
#define G_LED D4

int ldrValue;
int pirValue;

void setup() {
  Serial.begin(115200);

  pinMode(LDR, INPUT);
  pinMode(PIR, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(R_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);

  digitalWrite(BUZZER, LOW);
  digitalWrite(R_LED, LOW);
  digitalWrite(G_LED, HIGH);
}

void loop() {
  ldrValue = analogRead(LDR);
  pirValue = digitalRead(PIR);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  Serial.print("PIR Value: ");
  Serial.println(pirValue);

  if (ldrValue < 50) {
    if (pirValue == 1) {
      Serial.println("Someone detected.....");
      digitalWrite(BUZZER, HIGH);
      digitalWrite(R_LED, HIGH);
      digitalWrite(G_LED, LOW);
    } else {
      Serial.println("No one detected.....");
      digitalWrite(BUZZER, LOW);
      digitalWrite(R_LED, LOW);
      digitalWrite(G_LED, HIGH);
    }
  } else {
    Serial.println("System is off during day time");
    digitalWrite(BUZZER, LOW);
    digitalWrite(R_LED, LOW);
    digitalWrite(G_LED, HIGH);
  }

  delay(500);
}
