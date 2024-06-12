BaseType_t xTaskNotify(xTaskToNotify, ulValue, eAction);
BaseType_t xTaskNotifyGive(xTaskToNotify);
uint32_t ulTaskNotifyTake(xClearCountOnExit, xTicksToWait);
void vTaskNotifyGiveFromISR(xTaskToNotify, *pxHigherPriorityTaskWoken);