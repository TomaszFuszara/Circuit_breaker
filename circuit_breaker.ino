/**
 * @file circuit_breaker.ino
 * @brief Simple AVR-based circuit breaker for automotive testing.
 *
 * Controls power flow to the device under test using a button input and two-state logic.
 * When the button is pressed, the system toggles between power ON (transistors active)
 * and power OFF (transistors cut off). Two LEDs (green and red) can indicate states externally.
 */

int stan = 0; ///< State variable: 0 = OFF, 1 = ON

/**
 * @brief Setup function initializes pin modes.
 * Pin 4 - Output to transistor control (power on/off).
 * Pin 7 - Input with internal pull-up for button/switch.
 */
 
void setup(){
  pinMode(4, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

/**
 * @brief Main loop toggles the power state on button press.
 * Includes simple software debounce via delay.
 */
void loop(){
  if(digitalRead(7) == LOW){
    delay(200);
    stan++;
    if(stan > 1){
      stan = 0;
    }
  }
  switch(stan){
    case 0:
    digitalWrite(4, LOW); ///< Power OFF
    break;  

   case 1:
    digitalWrite(4,HIGH); ///< Power ON
    break;
  }
}
