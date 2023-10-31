#include <iostream>

using namespace std;

class Node
{
public:

    int Value;
    Node* Next;
};

void InsertAtBeginning(Node*& Head, int Value)
{
    // Allocate Memory to node
    Node* New_Node = new Node();

    // Insert Data
    New_Node->Value = Value;
    New_Node->Next = Head;

    // Move Head to New Node
    Head = New_Node;
}

void PrintLinkedList(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->Value << " ";
        Head = Head->Next;
    }
}

int main()
{
    Node* Head;

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 5);

    PrintLinkedList(Head);
}
