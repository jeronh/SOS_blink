int pin=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  flash(200);
  flash(200);
  flash(200);
  delay(1000);
  flash(500);
  flash(500);
  flash(500);
  delay(1000);
  flash(200);
  flash(200);
  flash(200);
  delay(10000);
}

void flash(int duration) {
  //turns the led on for the duration passed to the method
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
  delay(duration); 
}

