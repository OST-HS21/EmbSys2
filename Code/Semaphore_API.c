SemaphoreHandle_t xSemaphoreCreateBinary(void);
SemaphoreHandle_t xSemaphoreCreateCounting(uxMaxCount, uxInitialCount);
SemaphoreHandle_t xSemaphoreCreateMutex(void);
SemaphoreHandle_t xSemaphoreCreateRecursiveMutex(void);
void vSemaphoreDelete(xSemaphore);

BaseType_t xSemaphoreGive(xSemaphore);                    // V-Operation
BaseType_t xSemaphoreTake(xSemaphore, xTicksToWait);      // P-Operation
BaseType_t xSemaphoreGiveRecursive(xMutex);               // V-Operation
BaseType_t xSemaphoreTakeRecursive(xMutex, xTicksToWait); // P-Operation

TaskHandle_t xSemaphoreGetMutexHolder(xMutex); 