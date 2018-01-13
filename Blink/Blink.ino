int led = 9;

void setup() {
  // put your setup code here, to run once:
  //initialize the digital pin as output.
  //pinMode takes two arguments -> the number of the pin and the mode
  pinMode(led, OUTPUT);
}

//a void loop does not return anything
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); //turn the LED on (HIGH is the voltage level)
  delay(1000);            //wait one second
  digitalWrite(led, LOW); //turn the LED off
  delay(1000);            //wait one second
}
