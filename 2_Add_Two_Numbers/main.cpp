#include <iostream>
#include <vector>

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
  ~ListNode() { delete next; }

  void Push_Back(const std::vector<int>& num) {
    for (const auto& item : num) {
      if (next == nullptr) {
        next = new ListNode(item);
      } else {
        ListNode* current = this->next;
        while (current->next != nullptr) {
          current = current->next;
        }
        current->next = new ListNode(item);
      }
    }
  }
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
 ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummyHead->next;
}


void Print(ListNode* head){
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


int main() {
  system("chcp 65001 && cls");

  {
    // Input: l1 = [2,4,3], l2 = [5,6,4]
    // Output: [7,0,8]
    // Explanation: 342 + 465 = 807.
    std::vector<int> num0{2, 4, 3};
    std::vector<int> num1{5, 6, 4};
    ListNode l1, l2;
    l1.Push_Back(num0);
    l2.Push_Back(num1);
    Print(addTwoNumbers(l1.next, l2.next));
   // Print(l1.next);
  }

  {
    // Input: l1 = [0], l2 = [0]
    // Output: [0]
    std::vector<int> num0{0};
    std::vector<int> num1{0};
    ListNode l1, l2;
    l1.Push_Back(num0);
    l2.Push_Back(num1);
    Print(addTwoNumbers(l1.next, l2.next));
  }

  {
    // Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
    // Output: [8,9,9,9,0,0,0,1]
    std::vector<int> num0{9, 9, 9, 9, 9, 9, 9};
    std::vector<int> num1{9, 9, 9, 9};
    ListNode l1, l2;
    l1.Push_Back(num0);
    l2.Push_Back(num1);
    Print(addTwoNumbers(l1.next, l2.next));
  }
  return 0;
}
