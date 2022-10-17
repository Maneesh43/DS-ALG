#include <iostream>
#include <cstdlib>
#include "LinkedList.h"
using namespace std;
namespace linkedlist
{

    LinkedList::LinkedList(int nodeValue, CustomNode *node = nullptr)
    {
        head = getNode(nodeValue);
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
        if (index < size_)
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
            cerr << "Ouch out of bounds! \n";
            return -1;
        }
    }
    void LinkedList::push_front(int nodeValue)
    {
        CustomNode *newNode = getNode(nodeValue);
        newNode->node = head;
        head = newNode;
        size_ += 1;
    }
    void LinkedList::pop_front()
    {
        if (size_ >= 1)
        {
            head = head->node;
            size_ -= 1;
        }
    }
    void LinkedList::push_back(int nodeValue)
    {
        CustomNode *temp = head;
        while (temp->node != nullptr)
        {
            temp = temp->node;
        }
        temp->node = getNode(nodeValue);
        size_ += 1;
    }
    int LinkedList::pop_back()
    {
        CustomNode *temp = head;
        CustomNode *prev = nullptr;
        int nodeValue;
        while (temp->node != nullptr)
        {
            prev = temp;
            temp = temp->node;
        }
        prev->node = nullptr;
        nodeValue = temp->nodeValue;
        delete temp;
        size_ -= 1;
        return nodeValue;
    }
    int LinkedList::front()
    {
        return head->nodeValue;
    }
    int LinkedList::back()
    {
        CustomNode *temp = head;
        while (temp->node != nullptr)
        {
            temp = temp->node;
        }
        return temp->nodeValue;
    }
    void LinkedList::insert(int index, int nodeValue)
    {
        CustomNode *temp = head;
        CustomNode *prev = nullptr;
        if (index <= size_)
        {
            CustomNode *newNode = getNode(nodeValue);
            for (int i = 0; i <= size_; i++)
            {
                if (temp == nullptr && index == i)
                {
                    prev->node = newNode;
                    size_ += 1;
                    return;
                }
                else if (temp != nullptr && index == i)
                {
                    newNode->node = prev->node;
                    prev->node = newNode;
                    size_ += 1;
                    return;
                }
                else
                {
                    prev = temp;
                    temp = temp->node;
                }
            }
        }
        else
        {
            cout << "Ouch Cannot insert, out of bounds!";
        }
    }
    void LinkedList::erase(int index)
    {
        if (index < size_)
        {
            CustomNode *temp = head;
            CustomNode *prev = nullptr;
            for (int i = 0; i < size_; i++)
            {
                if (index == i)
                {
                    prev->node = temp->node;
                    size_ -= 1;
                    return;
                }
                else
                {
                    prev = temp;
                    temp = temp->node;
                }
            }
        }
        else
        {
            cout << "Ouch can't delete something that doesn't exists!\n";
        }
    }
    int LinkedList::value_n_from_end(int index) const
    {
        if (index < size_)
        {
            CustomNode *temp = head;
            int index1 = (size_ - 1) - index;
            for (int i = 0; i <= index1; i++)
            {
                if (index1 == i)
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
            cout << "index is out of bounds!\n";
        }
    }
    void LinkedList::reverse()
    {
        CustomNode *temp = head;
        CustomNode *nextNode = nullptr;
        CustomNode *prev = nullptr;
        while (temp != nullptr)
        {
            nextNode = temp->node;
            temp->node = prev;
            prev = temp;
            temp = nextNode;
        }
        head = prev;
    }
    void LinkedList::remove_value(int nodeValue)
    {
        CustomNode *temp = head;
        CustomNode *prev = nullptr;
        for (int i = 0; i < size_; i++)
        {
            if (temp->nodeValue == nodeValue)
            {
                if (prev == nullptr)
                {
                    head = temp->node;
                }
                else
                {
                    prev->node = temp->node;
                }
                size_ -= 1;
                return;
            }
            else
            {
                prev = temp;
                temp = temp->node;
            }
        }
        cout << "No value found!\n";
    }
    CustomNode *LinkedList::getNode(int nodeValue, CustomNode *node)
    {
        return new CustomNode(nodeValue, node);
    }
    void LinkedList::printList()
    {
        CustomNode *temp = head;
        while (temp != nullptr)
        {
            cout << temp->nodeValue << "\t";
            temp = temp->node;
        }
        cout << "\n";
    }

}

int main()
{
    linkedlist::LinkedList l1{1};
    l1.insert(1, 3);
    l1.insert(2, 4);
    l1.insert(3, 67);
    l1.push_back(99);
    l1.printList();
    l1.remove_value(3);
    l1.printList();
    return EXIT_SUCCESS;
}