#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  setup_default_uart();
  printf("Hello, world!\n");
  return 0;
}

/*
 9 int main() {
10 #ifndef PICO_DEFAULT_LED_PIN
11 #warning blink example requires a board with a regular LED
12 #else
13 const uint LED_PIN = PICO_DEFAULT_LED_PIN;
14 gpio_init(LED_PIN);
15 gpio_set_dir(LED_PIN, GPIO_OUT);
16 while (true) {
17 gpio_put(LED_PIN, 1);
18 sleep_ms(250);
19 gpio_put(LED_PIN, 0);
20 sleep_ms(250);
21 }
22 #end

 */
