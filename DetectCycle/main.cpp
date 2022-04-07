#include <iostream>
#include "ListNode.h"
#include "DetectCycle.h"

using namespace std;

int main()
{
    int a[]={3,2,0,4};
    ListNode *head=nullptr,*temp=nullptr,*point=nullptr;
    head=(ListNode*)malloc(sizeof(ListNode));
    temp=head;
    int val;
    for(int i=0;i<4;++i)
    {
        temp->val=a[i];
        if(i!=3)
        {
            temp->next=(ListNode*)malloc(sizeof(ListNode));
            temp=temp->next;
        }
    }
    temp->next=head->next->next;

    DetectCycle detectCycle=DetectCycle(head);
    cout << detectCycle.detectCycle()->val << endl;
    return 0;
}