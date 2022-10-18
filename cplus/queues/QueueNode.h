#ifndef QueueuNode_H
#define QueueNode_H

namespace qlist{
class CustomNode
    {
    public:
        int nodeValue;
        CustomNode *node;
        CustomNode(int nodeValue, CustomNode *node = nullptr)
        {
            this->nodeValue = nodeValue;
            this->node = node;
        }
        ~CustomNode()
        {
            delete node;
        }
    };
}


#endif