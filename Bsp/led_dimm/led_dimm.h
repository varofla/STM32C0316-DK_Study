#ifndef BSP_LED_DIMM_H_
#define BSP_LED_DIMM_H_

#include <stdbool.h>
#include <stdint.h>

#define PWM_MAX 1000

bool bsp_led_dimm_init(void);
bool bsp_led_dimm_deinit(void);

void bsp_led_dimm_set(uint8_t percentage);

#endif