#pragma once

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class ListNode
{
public:
    Node *head, *tail;
    void pop_front();
    void push_back(int data);
    void push_front(int data);
    void pop_back();
    Node *getAt(int k);
    void insert(int k, int data);
    void erase(int k);

    ListNode();
    ~ListNode();
};

ListNode::ListNode()
{
    this->head = this->tail = nullptr;
}

ListNode::~ListNode()
{
    while (head != nullptr)
        pop_front();
}

void ListNode::erase(int k){
    if(k < 0) return;
    if(k == 0){
        pop_front();
        return;
    }
    Node* left = getAt(k - 1);
    Node* node = left->next;
    if(node == nullptr) return;
    Node* right = node->next;
    left->next = right;
    if(node == tail) tail = left;
    delete node;
}

void ListNode::insert(int k, int data)
{
    Node *left = getAt(k);
    if (left == nullptr)
        return;
    Node *right = left->next;
    Node *node = new Node(data);
    left->next = node;
    node->next = right;
    if (right == nullptr)
        tail = node;
}

Node *ListNode::getAt(int k)
{
    if (k < 0)
        return nullptr;
    Node *node = head;
    int n = 0;
    while (node && n != k && node->next)
    {
        node = node->next;
        n++;
    }
    return (n == k) ? node : nullptr;
}

void ListNode::pop_back()
{
    if (tail == nullptr)
        return;
    if (head == tail)
    {
        delete tail;
        head = tail = nullptr;
        return;
    }
    Node *node = head;
    for (; node->next != tail; node = node->next)
        ;
    node->next = nullptr;
    delete tail;
    tail = node;
}

void ListNode::push_front(int data)
{
    Node *node = new Node(data);
    node->next = head;
    head = node;
    if (tail == nullptr)
        tail = node;
}

void ListNode::push_back(int data)
{
    Node *node = new Node(data);
    if (head == nullptr)
        head = node;
    if (tail != nullptr)
        tail->next = node;
    tail = node;
}

void ListNode::pop_front()
{
    if (head == nullptr)
        return;
    if (head == tail)
    {
        delete tail;
        head = tail = nullptr;
        return;
    }
    Node *node = head;
    head = node->next;
    delete node;
}