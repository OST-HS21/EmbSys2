xEventGroup = xEventGroupCreate(void);

void vEventGroupDelete(xEventGroup);
EventBits_t xEventGroupGetBits(xEventGroup);
EventBits_t xEventGroupSetBits(xEventGroup, uxBitsToSet);
EventBits_t xEventGroupClearBits(xEventGroup, uxBitsToClear);
EventBits_t xEventGroupWaitBits(xEventGroup, uxBitsToWaitFor, xClearOnExit, xWaitForAllBits, TicksToWait);
EventBits_t xEventGroupSync (xEventGroup, uxBitsToSet, uxBitsToWaitFor, xTicksToWait);