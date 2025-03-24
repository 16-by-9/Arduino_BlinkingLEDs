void setup() {
  // put your setup code here, to run once:
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);

#define LED1 5
#define LED2 6

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (5, HIGH);

delay(100);

digitalWrite (5, LOW);

digitalWrite (6, HIGH);

delay(100);

digitalWrite (6, LOW);
}
