#ifndef LinkedList_h
#define LinkedList_h
#include "CustomNode.h"
namespace linkedlist
{
    class LinkedList
    {
    public:
        CustomNode *head = nullptr;
        LinkedList(int nodeValue, CustomNode *node);
        ~LinkedList();
        int getSize() const;
        bool isEmpty() const;
        void printList();
        // return value at given index index starts at 0
        int value_at(int index);
        void push_front(int nodeValue);
        void pop_front();
        void push_back(int nodeValue);
        void pop_back();
        int front();
        int back();
        void insert(int index,int nodeValue);
        void erase(int index);
        int value_n_from_end(int index) const;
        void reverse();
        void remove_value(int nodeValue);     
    private:
        int size_{0};
    };
}
#endif
