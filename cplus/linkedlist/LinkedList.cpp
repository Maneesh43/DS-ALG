#include <iostream>
#include <cstdlib>
#include "LinkedList.h"
using namespace std;
namespace linkedlist
{

    LinkedList::LinkedList(int nodeValue, CustomNode *node = nullptr)
    {
        head = new CustomNode(nodeValue, node);
        size_ += 1;
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
    int LinkedList::value_at(int index)
    {
        if (size_ > 0)
        {
            CustomNode *temp = head;
            for (auto i = 0; i <= size_; i++)
            {
                if (i == index)
                {
                    return temp->nodeValue;
                }
                else
                {
                    temp = temp->node;
                }
            }
        }
        else
        {
            return -1;
        }
    }
    void LinkedList::push_front(int nodeValue)
    {
        CustomNode *newNode = new CustomNode(nodeValue);
        newNode->node=head;
        head=newNode;
        
    }
    void LinkedList::pop_front()
    {
        if(size_ >= 1){
            head=head->node;
            size_-=1;
        }
    }
    void LinkedList::push_back(int index)
    {
    }
    void LinkedList::pop_back()
    {
    }
    int LinkedList::front()
    {
    }
    int LinkedList::back()
    {
    }
    void LinkedList::insert(int index, int nodeValue)
    {
        CustomNode *temp = head;
        CustomNode *newNode = new CustomNode(nodeValue);
        CustomNode *prev = head;
        if(index==0){
            newNode->node=head;
            head = newNode;
        }
        for (auto i = 1; i <= index; i++)
        {
            if (i == index)
            {
                newNode->node = prev->node;
                prev->node = newNode;
                size_+=1;
                return;
            }
            else
            {
                prev = temp;
                temp = temp->node;
            }
        }
    }
    void LinkedList::erase(int index)
    {
    }
    int LinkedList::value_n_from_end(int index) const
    {
        return 1;
    }
    void reverse()
    {
    }
    void LinkedList::remove_value(int nodeValue)
    {
    }
    void LinkedList::printList()
    {
        CustomNode *temp = head;
        while (temp != nullptr)
        {
            cout << temp->nodeValue << "\t";
            temp = temp->node;
        }
    }

}

int main()
{
    linkedlist::LinkedList l1{1};
    l1.insert(1,7);
    l1.printList();
    return EXIT_SUCCESS;
}