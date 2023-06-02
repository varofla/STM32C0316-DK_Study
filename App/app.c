#include "app.h"
#include "bsp.h"

bool app_init(void) {
  bool rtn = true;

  rtn &= bsp_led_init();

  return rtn;
}

void app_main(void) {
  for (;;) {
    bsp_led_on();
    bsp_delay(1000);
    bsp_led_off();
    bsp_delay(1000);
  }
}