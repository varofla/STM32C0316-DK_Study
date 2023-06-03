#include "stm32c0xx_hal.h"

#include "led_dimm.h"

extern TIM_HandleTypeDef htim1;

#ifndef min
#define min(a, b) (((a) < (b)) ? (a) : (b))
#endif

static long s_map(long x, long in_min, long in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

bool bsp_led_dimm_init(void) {
  HAL_StatusTypeDef rtn = HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);

  return (rtn == HAL_OK) ? true : false;
}

bool bsp_led_dimm_deinit(void) {
  HAL_StatusTypeDef rtn = HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);

  return (rtn == HAL_OK) ? true : false;
}

void bsp_led_dimm_set(uint8_t percentage) {
  percentage = 100 - percentage;
  percentage = min(percentage, 100);

  htim1.Instance->CCR1 = s_map(percentage, 0, 100, 0, PWM_MAX);
}
