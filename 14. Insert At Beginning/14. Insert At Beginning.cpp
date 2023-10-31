#include <iostream>

using namespace std;

class Node
{
public: 

    int value;
    Node* next;
    Node* prev;
};

void InsertAtFirst(Node*& head, int Value)
{
    Node* new_node = new Node();

    new_node->value = Value;
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL)
        head->prev = new_node;

    head = new_node;
}

void PrintNodeDetails(Node* head)
{

    if (head->prev != NULL)
        cout << head->prev->value;
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n";
    else
        cout << "NULL";

}

// Print the linked list
void PrintListDetails(Node* head)

{
    cout << "\n\n";
    while (head != NULL) {
        PrintNodeDetails(head);
        head = head->next;
    }
}

void PrintList(Node* head)

{
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";

}


int main()
{
    Node* head = NULL;

    InsertAtFirst(head, 5);
    InsertAtFirst(head, 4);
    InsertAtFirst(head, 3);
    InsertAtFirst(head, 2);
    InsertAtFirst(head, 1);

    cout << "\nLinked List Content:\n";
    PrintList(head);
    PrintListDetails(head);
}

