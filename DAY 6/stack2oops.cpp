#include <iostream>
#include <stack>
using namespace std;

class Stack {
private:
    stack<int> s;


public:
    Stack()  {}

    void push(int x) {
        if(true) {
            s.push(x);
            cout << "Pushed " << x << " onto the stack." << endl;
        }
    }

    void pop() {
        if (s.empty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Popped " << s.top() << " from the stack." << endl;
            s.pop();
        }
    }

    void top() {
        if (s.empty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element: " << s.top() << endl;
        }
    }
};

int main() {
    
    cout << "Stack operations:" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Top" << endl;
    cout << "4. Exit" << endl;

  

    Stack myStack;

    
    int ch;
    cout << "Enter your choice: ";
    cin >> ch;

    while (ch != 4) {
        switch (ch) {
            case 1:
                int x;
                cout << "Enter the value to be pushed into the stack: ";
                cin >> x;
                myStack.push(x);
                break;
            case 2:
                myStack.pop();
                break;
            case 3:
                myStack.top();
                break;
            default:
                cout << "Invalid choice." << endl;
        }
        cout << "Enter your choice: ";
        cin >> ch;
    }

    return 0;
}
