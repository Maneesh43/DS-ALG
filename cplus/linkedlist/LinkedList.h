#ifndef LinkedList_h
#define LinkedList_h
namespace linkedlist{
class LinkedList{
public:
CustomNode *head = nullptr;
LinkedList(int nodeValue,CustomNode* node);
void printList();
};
}
#endif
