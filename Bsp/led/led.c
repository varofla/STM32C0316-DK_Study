#include "stm32c0xx_hal.h"

#include "led.h"
#include "main.h"

bool bsp_led_init(void) {
  HAL_GPIO_WritePin(Led_GPIO_Port, Led_Pin, GPIO_PIN_RESET);
  return true;
}

void bsp_led_on(void) {
  HAL_GPIO_WritePin(Led_GPIO_Port, Led_Pin, GPIO_PIN_SET);
}

void bsp_led_off(void) {
  HAL_GPIO_WritePin(Led_GPIO_Port, Led_Pin, GPIO_PIN_RESET);
}

void bsp_led_set(bool set) {
  if (set) {
    bsp_led_on();
  } else {
    bsp_led_off();
  }
}