#include "DetectCycle.h"

DetectCycle::DetectCycle()
{
}

DetectCycle::DetectCycle(ListNode* head)
{
    this->head=head;
}

ListNode* DetectCycle::detectCycle()
{
    ListNode * fast=head;
    ListNode * slow=head;
    
    do
    {
        if (!fast||!fast->next)
            return nullptr;
        fast=fast->next->next;
        slow=slow->next;
    } while (fast!=slow);

    fast=head;

    while(fast!=slow)
    {
        fast=fast->next;
        slow=slow->next;
    }

    return fast;
    
}

DetectCycle::~DetectCycle()
{
}