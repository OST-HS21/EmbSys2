TimerHandle_t xTimerCreate(*pcTimerName, xTimerPeriod, uxAutoReload, pvTimerID,	pxCallbackFunction);

BaseType_t xTimerDelete(xTimer, xTicksToWait);
BaseType_t xTimerReset(xTimer, xBlockTime);
BaseType_t xTimerStart(xTimer, xBlockTime);
BaseType_t xTimerStop(xTimer, xBlockTime);
BaseType_t xTimerChangePeriod(xTimer, xNewPeriod, xBlockTime);
BaseType_t xTimerIsTimerActive(xTimer);
BaseType_t xTimerPendFunctionCall(xFunctionToPend, *pvParameter1, ulParameter2, xTicksToWait);