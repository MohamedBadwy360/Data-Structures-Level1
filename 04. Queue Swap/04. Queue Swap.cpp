#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> MyQueue1;
    queue <int> MyQueue2;

    MyQueue1.push(10);
    MyQueue1.push(20);
    MyQueue1.push(30);
    MyQueue1.push(40);

    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);

    // Swap Elements between stacks
    MyQueue1.swap(MyQueue2);

    cout << "\nMyQueue1 Numbers: \n";
    while (!MyQueue1.empty())
    {
        cout << MyQueue1.front() << endl;
        MyQueue1.pop();
    }

    cout << "\nMyQueue2 Numbers: \n";
    while (!MyQueue2.empty())
    {
        cout << MyQueue2.front() << endl;
        MyQueue2.pop();
    }
}