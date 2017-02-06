int freq;
int speaker = 6;

void setup() {
  Serial.begin(9600);
  pinMode(speaker, OUTPUT);

}

void loop() {

  freq = analogRead(A0);

  int output = map(freq,0,1023, 50, 6000);

  tone(speaker, output);

  Serial.print("pot: ");
  Serial.print(freq);
  Serial.print("out put: ");
  Serial.println(output);

}

