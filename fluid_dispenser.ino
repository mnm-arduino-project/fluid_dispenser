//INFRA_in and RELAY_out denote the pins connected to the infrared sensor and
//the relay module respectively.
//will add values here according to which pins I connect each to
#define INFRA_in
#define RELAY_out

//initialization, INFRA_in is HIGH by default, goes LOW on detecting obstacle
//RELAY_out will activate the pump when made HIGH
void setup() {
  pinMode(INFRA_in, INPUT);
  pinMode(RELAY_out, OUTPUT);
  Serial.begin(9600);
}

void loop() {
//add your  l o g i n c  here
}
