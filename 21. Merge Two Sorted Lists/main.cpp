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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

    if (!list1)  return list2;
    if (!list2)  return list1;

    if (list1->val <= list2->val)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
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
        // Input: list1 = [1,2,4], list2 = [1,3,4]
        // Output: [1,1,2,3,4,4]
        std::vector<int> num0{1, 2, 4};
        std::vector<int> num1{1, 3, 4};
        ListNode l1, l2;
        l1.Push_Back(num0);
        l2.Push_Back(num1);
        Print(mergeTwoLists(l1.next, l2.next));
    }

    {
        // Input: list1 = [], list2 = []
        // Output: []
        std::vector<int> num0{};
        std::vector<int> num1{};
        ListNode l1, l2;
        l1.Push_Back(num0);
        l2.Push_Back(num1);
        Print(mergeTwoLists(l1.next, l2.next));
    }

    {
        // Input: list1 = [], list2 = [0]
        // Output: [0]
        std::vector<int> num0{};
        std::vector<int> num1{0};
        ListNode l1, l2;
        l1.Push_Back(num0);
        l2.Push_Back(num1);
        Print(mergeTwoLists(l1.next, l2.next));
    }
    return 0;
}
