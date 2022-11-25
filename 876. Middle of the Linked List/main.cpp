#include <iostream>
#include <vector>

struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	~ListNode()
	{
		delete next;
	}

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

ListNode *middleNode(ListNode *head)
{
	ListNode *slow = head;
	ListNode *fast = head;
	while (fast != nullptr && fast->next != nullptr)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
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
		std::vector<int> number0{1, 2, 3, 4, 5}; // Output: [3,4,5]
		ListNode lst;
		lst.Push_Back(number0);
		Print(middleNode(lst.next));
		std::cout << std::endl;
	}

	{
		std::vector<int> number1{1, 2, 3, 4, 5, 6}; // Output: [4,5,6]
		ListNode lst;
		lst.Push_Back(number1);
		Print(middleNode(lst.next));
		std::cout << std::endl;
	}
	return 0;
}
