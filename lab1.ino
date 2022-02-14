#define LED_PIN     3
#define ADC_PIN     A0
 
void setup() {
 
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
 
 
}
 
void loop() {
 
  task1();        // comment out after demo to TA
  // task 2();    // un-comment after finishing task 1, comment out after demo to TA
  // bonusTask(); // complete the task at your discretion
 
}
 
// Complete the function so that the board:
// - turns on the LED connected to pin 3
// - read the voltage across the series resistor and ground
// - calculates the current flowing through the LED and resistor
// - prints the calculated current through the serial monitor
// - waits 1 second
// - turns off the LED
// - waits 1 second
void task1() {
 
  // Turn on LED
  digitalWrite();
 
  // Read from analog pin 0
  int val = analogRead();
 
  // Calculate current flowing through LED, 
  // given the series resistor is 2000 ohms
  // analogRead gives a value from 0 - 1023 with voltage input from 0v to 5v
  // and ohms law V = I * R
  float current = ;
 
  // Print current flowing through LED
 
  // Wait 1 second
  delay();
 
  // Turn off LED
 
  // Wait 1 second
}
 
// Complete the function so that the board :
// starting with the LED fully off, 
// increase the LED brightness by 1 / 256 with analogWrite() every 5 msec, 
// until the LED is fully on, 
// then decrease the LED brightness by 1 / 256 with analogWrite() every 10 msec,
// until the LED is fully off
void task2() {
 
  int i;
  for ( ; ; ) {       // start from 0, increase i by 1 every cycle, until i = 255
    analogWrite( , ); // set intensity of LED to i
    delay();          // delay 5 msec
  }
  for ( ; ; ) {       // start from 255, decrease i by 1 every cycle, until i = 0
    analogWrite( , ); // set intensity of LED to i
    delay();          // delay 10 msec
  }
 
}
 
// Complete the function so that the board :
// receives a value from 0 - 255 from the serial monitor
// and sets the LED intensity accordingly
void bonusTask() {
 
 
 
}
