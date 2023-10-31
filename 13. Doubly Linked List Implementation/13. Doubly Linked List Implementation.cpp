#include <iostream>

using namespace std;

class Node
{
public:

    int value;
    Node* next;
    Node* prev;
};



int main()
{
    Node* head;

    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    // allocate in heap
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    // Assign Values
    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    // Connect nodes
    Node1->next = Node2;
    Node1->prev = NULL;

    Node2->next = Node3;
    Node2->prev = Node1;

    Node3->next = NULL;
    Node3->prev = Node2;

    // print the linked list value
    head = Node1;

    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}
