#ifndef CustomNode_H
#define CustomNode_H
namespace linkedlist
{
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