#include "app.h"
#include "bsp.h"

bool app_init(void) {
  bool rtn = true;

  rtn &= bsp_led_dimm_init();

  return rtn;
}

void app_main(void) {
  for (;;) {
    for (int i = 0; i < 100; i++) {
      bsp_led_dimm_set(i);
      bsp_delay(10);
    }
    for (int i = 100; i > 0; i--) {
      bsp_led_dimm_set(i);
      bsp_delay(10);
    }
  }
}