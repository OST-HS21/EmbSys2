BaseType_t xTaskCreate(pvTaskCode, pcName, usStackDepth, *pvParameters, uxPriority, *pxCreatedTask);

void vTaskDelete(xTask);
void vTaskDelay(xTicksToDelay);
void vTaskDelayUntil(*pxPreviousWakeTime, xTimeIncrement);
void taskYIELD(void);

void vTaskSuspend(xTaskToSuspend);
void vTaskResume(xTaskToResume);

UBaseType_t uxTaskPriorityGet(xTask);
void vTaskPrioritySet(xTask, uxNewPriority);