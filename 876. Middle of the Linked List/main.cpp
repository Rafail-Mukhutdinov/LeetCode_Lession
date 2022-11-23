#include <iostream>
//#include "src/listnode.h"
 
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {
        std::cout << "Конструктор без параметров" << std::endl;
    }
    ListNode(int x) : val(x), next(nullptr) {
        std::cout << "Конструктор с одним параметром параметров" << std::endl;
    }
    ListNode(int x, ListNode *next) : val(x), next(next) {
        std::cout << "Конструктор с двумя параметрами параметров" << std::endl;
    }
};
 

ListNode* middleNode(ListNode* head)
{
    ListNode* slow = head->next;
    ListNode* fast = head->next;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    

   return slow;
   
}  

int main()
{
    int number0[5] = {1, 2, 3, 4, 5};
    int number1[6] = {1, 2, 3, 4, 5, 6};

    ListNode lst;



    middleNode(&lst);
    

}


/*     ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

    }
    
    return slow; */