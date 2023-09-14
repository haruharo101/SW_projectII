#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial) {
    continue;
  }
  Serial.println("Hello World!");
  digitalWrite(PIN_LED, toggle);
  count = toggle = 0;
}

unsigned int toggle_state(unsigned toggle) {
  return toggle == 0 ? 1 : 0;
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}