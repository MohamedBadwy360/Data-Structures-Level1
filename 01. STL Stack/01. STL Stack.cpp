#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Create a Stack of int
    stack <int> stkNumbers;

    // Push into stack
    stkNumbers.push(10);
    stkNumbers.push(20);
    stkNumbers.push(30);
    stkNumbers.push(40);
    stkNumbers.push(50);

    // We can access the elements by getting the top and pop until the stack is empty
    cout << "Count = " << stkNumbers.size() << endl;

    cout << "\nNumber are: \n";
    while (!stkNumbers.empty())
    {
        // Print Top Element
        cout << stkNumbers.top() << endl;

        // Pop Top Eelement from stack
        stkNumbers.pop();
    }

}
