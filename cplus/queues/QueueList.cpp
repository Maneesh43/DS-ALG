#include <iostream>
#include <cstdlib>
#include "QueueList.h"
namespace qlist
{
    template <class T>
    QueueList<T>::QueueList(T nodeValue)
    {
        head = getNode(nodeValue);
        tail = head;
    }

    template <class T>
    void QueueList<T>::enqueue(T value)
    {
        cnode * temp = tail;
        temp->node = getNode(value);
        tail = temp->node;
        size_++;
    }

    template <class T>
    T QueueList<T>::dequeue()
    {
        cnode * temp = head;
        head = temp->node; 
        size_--;
        return temp->nodeValue;
    }

    template <class T>
    int QueueList<T>::getSize()const
    {
        return size_;
    }

    template <class T>
    void QueueList<T>::printList(){
        cnode* temp = head;
        while(temp!=nullptr){
            std::cout << temp->nodeValue << " -> ";
            temp=temp->node;
        }
        std::cout << "NULL";
    }
    template <class T>
    cnode *QueueList<T>::getNode(T value)
    {
        return new CustomNode(value);
    }

}
int main()
{
    qlist::QueueList<int> q1{1};
    q1.enqueue(3);
    q1.enqueue(2);
    q1.enqueue(5);
    q1.dequeue();
    q1.enqueue(6);
    q1.dequeue();
    q1.printList();
    return EXIT_SUCCESS;
}