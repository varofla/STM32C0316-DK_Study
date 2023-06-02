#ifndef BSP_LED_H_
#define BSP_LED_H_

#include <stdbool.h>

bool bsp_led_init(void);

void bsp_led_on(void);
void bsp_led_off(void);
void bsp_led_set(bool set);

#endif