#pragma once

template <typename T>
class ListNode
{

public:
    ListNode();
    ~ListNode();

    void push_back(T data);
    void push_front(T data);
    void pop_front();
    void pop_back();
    void insert(T data, int index);
    void removeAt(int index);
    void clear();

    int GetSize() { return Size; }

    T &operator[](const int index);

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
    clear();
}


template <typename T>
void ListNode<T>::pop_back(){
    removeAt(Size - 1);
}

template <typename T>
void ListNode<T>::insert(T data, int index)
{
    if (index == 0)
    {
        push_front(data);
    }
    else
    {
        Node<T> *previous = this->head;

        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }
        Node<T> *newNode = new Node<T> (data, previous->pNext);
        previous->pNext = newNode;

        Size++;
    }
}

template <typename T>
void ListNode<T>::removeAt(int index){
    if(index == 0){
        pop_front();
    }else{
        Node<T> *previous = this->head;
        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }
        Node<T> *toDelete = previous->pNext;
        previous->pNext = toDelete->pNext;
        delete toDelete;
        Size--;
        
    }
}



template <typename T>
void ListNode<T>::push_front(T data)
{
    head = new Node<T>(data, head);
    Size++;
}

template <typename T>
void ListNode<T>::clear()
{
    while (Size)
    {
        pop_front();
    }
}

template <typename T>
void ListNode<T>::pop_front()
{
    Node<T> *temp = head;
    head = head->pNext;
    delete temp;
    Size--;
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
T &ListNode<T>::operator[](const int index)
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
