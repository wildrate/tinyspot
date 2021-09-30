#include <stdio.h>
#include "pico/stdlib.h"
/**
 *
 *
 * https://github.com/sandeepmistry/pico-microphone/blob/main/src/analog_microphone.c
 */

 int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else
  const uint LED_PIN = PICO_DEFAULT_LED_PIN;
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
  while (true) {
    gpio_put(LED_PIN, 1);
    sleep_ms(550);
    gpio_put(LED_PIN, 0);
    sleep_ms(100);
    gpio_put(LED_PIN, 1);
    sleep_ms(100);
    gpio_put(LED_PIN, 0);
    sleep_ms(250);
  }
  #include <stdio.h>
#include "hardware/rtc.h"
#include "pico/stdlib.h"
#include "pico/util/datetime.h"

  int main() {
    stdio_init_all();
    printf("Hello RTC!\n");

    char datetime_buf[256];
    char *datetime_str = &datetime_buf[0];

    // Start on Friday 5th of June 2020 15:45:00
    datetime_t t = {
        .year  = 2020,
        .month = 06,
        .day   = 05,
        .dotw  = 5, // 0 is Sunday, so 5 is Friday
        .hour  = 15,
        .min   = 45,
        .sec   = 00
    };

    // Start the RTC
    rtc_init();
    rtc_set_datetime(&t);

    // Print the time
    while (true) {
      rtc_get_datetime(&t);
      datetime_to_str(datetime_str, sizeof(datetime_buf), &t);
      printf("\r%s      ", datetime_str);
      sleep_ms(100);
    }

    return 0;
  }

#endif
}
