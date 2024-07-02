struct rgb {
  int red;
  int green;
  int blue;
};

struct rgb led = {9, 10, 11};
struct rgb values = {0, 0, 0};
struct rgb inputs = {A2, A1, A0};

void setup() {
  // put your setup code here, to run once:
  pinMode(led.red, OUTPUT);
  pinMode(led.blue, OUTPUT);
  pinMode(led.green, OUTPUT);
  digitalWrite(led.red, LOW);
  digitalWrite(led.green, LOW);
  digitalWrite(led.blue, LOW);

}

void loop() {
 values.red = analogRead(inputs.red);
 values.green = analogRead(inputs.green);
 values.blue = analogRead(inputs.blue);

 values.red = map(values.red, 0, 1023, 0, 255);
 values.green = map(values.green, 0, 1023, 0, 255);
 values.blue = map(values.blue, 0, 1023, 0, 255);

 analogWrite(led.red, values.red);
 analogWrite(led.green, values.green);
 analogWrite(led.blue, values.blue);

}
