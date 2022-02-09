/*              KONTROL  MONOEGONKORRA

   Programa honek arduinora aginteak bidaltzen ditu eta joystick baten bidez elektrobalbulak kontrolatzea lortzen dugu
   Modified By 3 Taldea 2022
   CC. Creatives Commons.
*/

// Aldagaien deklarazioa

int botoiaA = 3;
int relayA = 11;
int balioaA = 0;

// Aldagaien deklarazioa

int botoiaB = 2;
int relayB = 12;
int balioaB = 0;

// Aldagaien deklarazioa

int botoiaC = 4;
int relayC = 13;
int balioaC = 00;



// Sarrera-Irteeren Inizializazioa

void setup()
{
  Serial.begin (9600);
  pinMode (botoiaA, INPUT);
  pinMode (relayA, OUTPUT);

  // Sarrera-Irteeren Inizializazioa


  Serial.begin (9600);
  pinMode (botoiaB, INPUT);
  pinMode (relayB, OUTPUT);

  // Sarrera-Irteeren Inizializazioa

  Serial.begin (9600);
  pinMode (botoiaC, INPUT);
  pinMode (relayC, OUTPUT);
}

// Programa nagusia

void loop()
{
  balioaA = digitalRead(botoiaA); //Pultsadorea irakurri
  Serial.print ("A Pultsagailuaren balioa=  ");
  Serial.println (balioaA);
  if (balioaA == 0) {
    digitalWrite(relayA, LOW);
  }
  else {
    digitalWrite(relayA, HIGH);
  }
  delay (0);


  // Programa nagusia

  balioaB = digitalRead(botoiaB); //Pultsadorea irakurri
  Serial.print ("B Pultsagailuaren balioa=  ");
  Serial.println (balioaB);
  if (balioaB == 0) {
    digitalWrite(relayB, LOW);
  }
  else {
    digitalWrite(relayB, HIGH);
  }
  delay (0);


  // Programa nagusia

  balioaC = digitalRead(botoiaC); //Pultsadorea irakurri
  Serial.print ("C Pultsagailuaren balioa=  ");
  Serial.println (balioaC);
  if (balioaC == 0) {
    digitalWrite(relayC, LOW);
  }
  else {
    digitalWrite(relayC, HIGH);
  }
  delay (0);
}
