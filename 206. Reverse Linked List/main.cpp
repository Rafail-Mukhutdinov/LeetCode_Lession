#include <iostream>
#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

    void Push_Back(const std::vector<int> &num)
    {
        for (const auto &item : num)
        {
            if (next == nullptr)
            {
                next = new ListNode(item);
            }
            else
            {
                ListNode *current = this->next;
                while (current->next != nullptr)
                {
                    current = current->next;
                }
                current->next = new ListNode(item);
            }
        }
    }
};

ListNode *reverseList(ListNode *head)
{

    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void Print(ListNode *head)
{
    std::cout << "Output: [";
    for (ListNode *node = head; node != nullptr; node = node->next)
    {
        std::cout << node->val;
        if (node->next != nullptr)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main()
{
    system("chcp 65001 && cls");

    {
        // Input: head = [1,2,3,4,5]
        // Output: [5,4,3,2,1]
        std::vector<int> num0{1, 2, 3, 4, 5};
        ListNode l1;
        l1.Push_Back(num0);
        Print(reverseList(l1.next));
    }

    {
        // Input: head = [1,2]
        // Output: [2,1]
        std::vector<int> num0{1, 2};
        ListNode l1;
        l1.Push_Back(num0);
        Print(reverseList(l1.next));
    }

    {
        // Input: head = []
        // Output: []
        std::vector<int> num0{};
        ;
        ListNode l1;
        l1.Push_Back(num0);
        Print(reverseList(l1.next));
    }
    return 0;
}