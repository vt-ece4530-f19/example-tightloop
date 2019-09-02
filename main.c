#include "omsp_system.h"

void delay() {
  volatile int k = 0;
  k = k + 1;
}

int main(void) {
  P1DIR = 0xFF;              // initialize for output
  WDTCTL = WDTPW | WDTHOLD;  // Disable watchdog timer

  P1OUT = 0xFF;
  while (1) {
    P1OUT = ~P1OUT;
    delay();
  }

  return 0;
}
