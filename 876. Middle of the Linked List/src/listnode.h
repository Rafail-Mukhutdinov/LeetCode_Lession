#pragma once

template <typename T>
class ListNode
{

public:
    ListNode();
    ~ListNode();

    void push_back(T data);

    int GetSize() { return Size; }

    T & operator[](const int index);

private:
    template <typename T1>
    class Node
    {
    public:
        Node *pNext;
        T1 data;

        Node(T1 data = T1(), Node *pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;
    Node<T> *head;
};

template <typename T>
ListNode<T>::ListNode()
{
    Size = 0;
    head = nullptr;
}
template <typename T>
ListNode<T>::~ListNode()
{
}

template <typename T>
void ListNode<T>::push_back(T data)
{
    if (head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T> *current = this->head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
    }
    Size++;
}

template <typename T>
T & ListNode<T>::operator[](const int index)
{
    int counter = 0;
    Node<T> *current = this->head;
    while (current != nullptr)
    {
        if (counter == index)
        {
            return current->data;
        }
        current = current->pNext;
        counter++;
    }
    return current->data;
}
