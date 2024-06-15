TimerHandle_t xIntervalTimer[TIMERPWM_LAST_PERIPHERIE];

xIntervalTimer[TIMERPWM_LED_RED] = xTimerCreate("IntervalTimerRedLed", INTERVAL_TIMER_PERIOD, pdTRUE,
    (void *)(TIMERPWM_LED_RED), pxIntervalTimerCallback);

static void pxIntervalTimerCallback(TimerHandle_t xTimer){
    timerPWMPeripheral_t i = (timerPWMPeripheral_t)(pvTimerGetTimerID(xTimer));
    _update_ledValue(i);
}