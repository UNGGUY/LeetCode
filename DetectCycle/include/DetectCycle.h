#pragma once
#include "ListNode.h"

class DetectCycle
{
private:
    ListNode * head;
public:
    DetectCycle();
    DetectCycle(ListNode *head);
    ListNode* detectCycle();
    ~DetectCycle();
};


