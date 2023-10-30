#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> MyStack1;
    stack <int> MyStack2;

    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);

    MyStack2.push(50);
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);

    // Swap Elements between stacks
    MyStack1.swap(MyStack2);

    cout << "\nMyStack1 Numbers: \n";
    while (!MyStack1.empty())
    {
        cout << MyStack1.top() << endl;
        MyStack1.pop();
    }

    cout << "\nMyStack2 Numbers: \n";
    while (!MyStack2.empty())
    {
        cout << MyStack2.top() << endl;
        MyStack2.pop();
    }
}
