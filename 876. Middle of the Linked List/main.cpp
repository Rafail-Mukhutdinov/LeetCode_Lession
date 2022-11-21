#include <iostream>

#include "src/listnode.h"

// Definition for singly-linked list.
/* struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; */


//ListNode* middleNode(ListNode* head) {

//}


int main()
{
   ListNode<int> lst;
   lst.push_back(5);
   lst.push_back(10);
   lst.push_back(22);

   std::cout << "Sum 2 arr = " << lst[5];
}
