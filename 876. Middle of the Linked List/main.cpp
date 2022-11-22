#include <iostream>
#include "src/listnode.h"

void Push_Back(ListNode<int>& list, int rt[], int size){
    for (int i = 0; i < size; i++){
        list.push_back(rt[i]);
    }

}

/* 
ListNode* middleNode(ListNode* head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

    }
    
    return slow;
} */

int main()
{
    int number0[5] = {1, 2, 3, 4, 5};
    int number1[6] = {1,2,3,4,5,6};

   // ListNode *lst;


}

