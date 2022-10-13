#include <iostream>
#include <cstdlib>
#include "LinkedList.h"

namespace linkedlist
{

    class CustomNode
    {
    public:
        int nodeValue;
        CustomNode *node = nullptr;
        CustomNode(int nodeValue, CustomNode *node)
        {
            this->nodeValue = nodeValue;
            this->node = node;
        }
    };

    LinkedList::LinkedList(int nodeValue, CustomNode *node = nullptr)
    {
        head = new CustomNode(nodeValue,node);
    }
    void LinkedList::printList(){
    }

}

int main()
{
    linkedlist::LinkedList l1(1,nullptr);
    l1.printList();
    return EXIT_SUCCESS;
}