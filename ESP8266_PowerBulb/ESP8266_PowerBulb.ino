/*
ESP8266 Blink
Blink the blue LED on the ESP8266 module
Board: NodeMCU 1.0 ESP-12E Module
*/

#define LED 2 //Define blinking LED pin
#define LED2 D2 //LED at GP104 D2

void setup() {
  pinMode(LED, OUTPUT); // Initialize the LED pin as an output
  pinMode(LED2, OUTPUT);

  digitalWrite(LED, LOW); // Turn the LED on (Note that LOW is the voltage level) - Leave it on
}
// the loop function runs over and over again forever
void loop() {

  digitalWrite(LED2, LOW); // Turn the LED on (Note that LOW is the voltage level)
  delay(1000); // Wait
  digitalWrite(LED2, HIGH); // Turn the LED on (Note that LOW is the voltage level)
  delay(1000); // Wait 
}
