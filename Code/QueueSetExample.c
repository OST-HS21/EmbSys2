void vAFunction(void)
{
    static QueueSetHandle_t xQueueSet;
    QueueHandle_t xQueue1, xQueue2, xSemaphore;
    QueueSetMemberHandle_t xActivatedMember;
    SomeMessage_t xReceivedFromQueue1, xReceivedFromQueue2;
    xQueue1 = xQueueCreate(5, 20); // Create the queues that will be contained in the set.

    xQueue2 = xQueueCreate(7, 30);
    xSemaphore = xSemaphoreCreateBinary(); // Create the semaphore that is being added to the set.

    xSemaphoreTake(xSemaphore, 0); /* Take the semaphore, so it starts empty. A block time of zero can be
                       used as the semaphore is guaranteed to be available - it has just been created. */

    xQueueSet = xQueueCreateSet(10); /* Create a queue set large enough to hold an event for every space in
                                        every queue and semaphore that is to be added to the set. */

    xQueueAddToSet(xQueue1, xQueueSet); // Add the queues and semaphores to the set.
    xQueueAddToSet(xQueue2, xQueueSet);
    xQueueAddToSet(xSemaphore, xQueueSet);

    while(1){
        xActivatedMember = xQueueSelectFromSet(xQueueSet, pdMS_TO_TICKS(200)); /* Block to wait for
        something available from the queues or semaphore added to the set. Don't block longer than 200 ms. */

        if (xActivatedMember == xQueue1) {
            xQueueReceive(xActivatedMember, &xReceivedFromQueue1, 0); // Process message
        }
        else if (xActivatedQueue == xQueue2) {
            xQueueReceive(xActivatedMember, &xReceivedFromQueue2, 0); // Process message
        }
        else if (xActivatedQueue == xSemaphore) {
            SemaphoreTake(xActivatedMember, 0); // Process semaphore

            break;
        }
        else {
            // The 200ms block time expired without an RTOS queue or semaphore being ready to process.
        }
    }
}