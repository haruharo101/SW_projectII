int bright =  0;
int fade = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bright += fade;
  if(bright == 0 || bright >= 255) {
    fade = -fade;
  }
  analogWrite(9, bright);
  delay(30);
}
