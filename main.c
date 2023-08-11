// Blink an LED connected to pin 1.4

#include <ch554.h>
#include <debug.h>

#define LED_PIN 4
SBIT(LED, 0x90, LED_PIN);

void main() {
    
    CfgFsys();
    // Configure pin 1.4 as GPIO output
    P1_MOD_OC = P1_MOD_OC & ~(1<<LED_PIN);
    P1_DIR_PU = P1_DIR_PU |	(1<<LED_PIN);

    while (1) {
    	mDelaymS(100);
        LED = !LED;
    }
}
