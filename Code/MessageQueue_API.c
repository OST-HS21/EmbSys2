QueueHandle_t xQueueCreate (uxQueueLength, uxItemSize);

void vQueueDelete (pxQueueToDelete);

BaseType_t xQueueSendToBack (xQueue, *pvItemToQueue, xTicksToWait);
BaseType_t xQueueSendToFront (xQueue, *pvItemToQueue, xTicksToWait);
BaseType_t xQueueOverwrite (xQueue, *pvItemToQueue);

BaseType_t xQueueReceive (xQueue, void *pvBuffer, xTicksToWait);

BaseType_t xQueueReset (xQueue);

BaseType_t xQueueSendFromISR (xQueue, *pvItemToQueue, *pxHigherPriorityTaskWoken);
BaseType_t xQueueSendToFrontFromISR (xQueue,*pvItemToQueue, *pxHigherPriorityTaskWoken);
BaseType_t xQueueOverwriteFromISR (xQueue, *pvItemToQueue,*pxHigherPriorityTaskWoken);