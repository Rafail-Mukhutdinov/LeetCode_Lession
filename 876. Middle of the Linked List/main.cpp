#include <iostream>
//#include "src/listnode.h"

struct ListNode
{
    int val;
    ListNode *head, *tail;
    ListNode() : val(0), head(nullptr), tail(nullptr) { std::cout << "Конструктор без параметров" << std::endl; }

    ListNode(int data)
    {
        this->val = data;
        this->head = nullptr;
    }

    ListNode(int data[], int size)
    {
        std::cout << "Конструктор с одним параметром параметров" << std::endl;

        for (int i = 0; i < size; i++)
        {
            ListNode *node = new ListNode(data[i]);

            if (head == nullptr)
                head = node;
            if (tail != nullptr)
                tail->tail = node;
            tail = node;
            std::cout << "Распечатаем массив " << data[i] << std::endl;
        }
    }
};
/*
ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head->next;
    ListNode *fast = head->next;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
 */
int main()
{
    int number0[5] = {1, 5, 5, 5, 5};
    int number1[6] = {1, 2, 3, 4, 5, 6};

    ListNode lst(number0, 5);
    ListNode *test = new ListNode();
    for(int i = 0; i < 5; i++){
    std::cout << "Пытаюсь вывести связаный список " << test = lst.head<< std::endl;
    }
    // middleNode(&lst);
}

/*     ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

    }

    return slow; */