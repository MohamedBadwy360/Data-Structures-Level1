#include <iostream>
#include <queue>

using namespace std;


int main()
{
    // Queue Container Declaration
    queue <int> MyQueue;

    // Pushing ELements into Queue
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);

    cout << "Size: " << MyQueue.size() << endl;
    cout << "Front: " << MyQueue.front() << endl;
    cout << "Back: " << MyQueue.back() << endl;

    cout << "\nMyQueue: \n";
    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << endl;
        MyQueue.pop();
    }
}
