#include <avr/io.h>

#define F_CPU 16000000
#define BLINK_DELAY_MS 100

#include <util/delay.h>

int main (void)
{
  // Arduino digital pin 13 (pin 5 of PORTB) for output
  DDRB |= (1<<DDB5); // PORTB5  | 0B100000

  while(1) {
    // turn LED on
    PORTB |= (1<<DDB5); // PORTB5 
    _delay_ms(BLINK_DELAY_MS);

    // turn LED off
    PORTB &= ~ (1<<DDB5); // PORTB5
    _delay_ms(BLINK_DELAY_MS);
  }
}