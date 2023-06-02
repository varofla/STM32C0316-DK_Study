#include "stm32c0xx_hal.h"

#include "delay.h"

void bsp_delay(uint32_t delay_ms) {
  HAL_Delay(delay_ms);
}
