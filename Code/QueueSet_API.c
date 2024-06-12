QueueSetHandle_t xQueueCreateSet(uxEventQueueLength);
BaseType_t xQueueAddToSet(xQueueOrSemaphore, xQueueSet);
BaseType_t xQueueRemoveFromSet(xQueueOrSemaphore, xQueueSet);
QueueSetMemberHandle_t xQueueSelectFromSet(xQueueSet, xTicksToWait);