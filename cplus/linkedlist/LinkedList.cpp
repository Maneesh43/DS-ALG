#include <iostream>
#include <cstdlib>
#include "LinkedList.h"
using namespace std;
namespace linkedlist
{

    LinkedList::LinkedList(int nodeValue, CustomNode *node = nullptr)
    {
        head = new CustomNode(nodeValue, node);
        size_ = 0;
    }
    LinkedList::~LinkedList()
    {
        delete head;
    }
    int LinkedList::getSize() const
    {
        return size_;
    }
    bool LinkedList::isEmpty() const
    {
        return size_ == 0;
    }
    int value_at(int index){
        return 0;
    }
    void LinkedList::printList()
    {
        CustomNode *temp = head;
        while (temp != nullptr)
        {
            cout << temp->nodeValue;
            temp = temp->node;
        }
    }

}

int main()
{
    linkedlist::LinkedList l1{3};
    l1.printList();
    return EXIT_SUCCESS;
}