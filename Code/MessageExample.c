struct AMessage
{
    char ucMessageID;
    char ucData[20];
} xMessage;

QueueHandle_t xQueue;

void vATask(void *pvParameters) { // Task to create a queue and post a value
    struct AMessage *pxMessage;
    xQueue = xQueueCreate(10, sizeof(struct Amessage *)); // Create queue for 10 pointers to AMessage structures 
    // ...
    pxMessage = &xMessage;        // Send a pointer to a struct AMessage object
    xQueueSend(xQueue, (void *)&pxMessage, (TickType_t)0); // Don't block if the queue is already full

    // ... rest of task code
}
void vADifferentTask(void *pvParameters) { // Task to receive from the queue
    struct AMessage *pxRxedMessage;
    if (xQueueReceive(xQueue, &(pxRxedMessage), (TickType_t)10)) {
        // pcRxedMessage now points to the struct AMessage variable posted by vATask
    }
    // ... rest of task code
}