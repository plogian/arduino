int led =9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digital write can only output a high or low value, but analogWrite
  //can output a value from 0 to 255. This  corresponds to the duty cycle,
  //which is the ratio of time that output is high:low
  //100% of the time high is 255.
  //50% of the time high is 177. 
  //Two ways to control brightness:
  //1. Control voltage, but Arduino Uno has no way of controlling voltage at a pin
  //2. PWM: Pulse Width Modulation: a technique that allows us to control the
  //amount of time a signal is at HIGH (5V) or LOW (GND, 0V). 
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  //double equals tests for equality
  if(brightness == 255 || brightness == 255) 
    { fadeAmount = -fadeAmount ; }
    delay(20);
}
