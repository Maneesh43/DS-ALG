#ifndef QueueList_H
#define QueueList_H
#include "QueueNode.h"

namespace qlist
{
    typedef CustomNode cnode; 
    template <class T>
    class QueueList
    {
    public:
        QueueList(T value);
        void enqueue(T value);
        T dequeue();
        CustomNode * getNode(T value);
        int getSize()const;
        void printList();
    private:
        cnode *head{nullptr};
        cnode *tail{nullptr};
        int size_{0};
    };
}

#endif