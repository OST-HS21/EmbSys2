static void prvTask1(void *pvParameters);    // Prototypes of the three tasks
static void prvTask2(void *pvParameters);
static void prvTask3(void *pvParameters);
static TaskHandle_t xTask1 = NULL, xTask2 = NULL, xTask3 = NULL; // Handles for the created tasks

void main(void) {
    // Create three tasks, start RTOS scheduler.
    xTaskCreate(prvTask1, "Task1", 200, NULL, tskIDLE_PRIORITY, &xTask1);
    xTaskCreate(prvTask2, "Task2", 200, NULL, tskIDLE_PRIORITY, &xTask2);
    xTaskCreate(prvTask3, "Task3", 200, NULL, tskIDLE_PRIORITY, &xTask3);
    vTaskStartScheduler();
}

/* Task 1, Periodic */
static void prvTask1(void *pvParameters) {
    portTickType xLastWakeTime;
    TickType_t taskCycleTime = pdMS_TO_TICKS(1);    
     // Initialise the xLastWakeTime variable with the current time.
     xLastWakeTime = xTaskGetTickCount();
    while(1) {
        vTaskDelayUntil(&xLastWakeTime, taskCycleTime); // Wait for the next cycle

        // Do something inside the task, do not leave this loop
    }
}

/* Task 2, Periodic */
static void prvTask2(void *pvParameters) {
    while(1) {
        // Do something inside the task, do not leave this loop

        vTaskDelay(20); //Enter the Blocked state for 20 tick interrupts, wait for the next cycle
    }
}

/* Task 3, Aperiodic */
static void prvTask3(void *pvParameters) {
    // Do something inside the task ...

    vTaskDelete(xTask3); // Delete this task by valid handle to itself
}