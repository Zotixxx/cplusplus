#include <iostream>
using namespace std;

// Base class
class Stack {
protected:
    int arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Push function
    void push(int value) {
        arr[++top] = value;
        cout << value << " pushed into stack\n";
    }

    // Pop function
    void pop() {
        cout << arr[top--] << " popped from stack\n";
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Derived class
class Stack2 : public Stack {
public:

    // Check overflow
    bool isOverflow() {
        return top == 4;
    }

    // Check underflow
    bool isUnderflow() {
        return top == -1;
    }

    // Safe push
    void safePush(int value) {
        if (isOverflow()) {
            cout << "Stack Overflow\n";
        } else {
            push(value);
        }
    }

    // Safe pop
    void safePop() {
        if (isUnderflow()) {
            cout << "Stack Underflow\n";
        } else {
            pop();
        }
    }
};

int main() {
    Stack2 s;

    s.safePush(10);
    s.safePush(20);
    s.safePush(30);
    s.safePush(40);
    s.safePush(50);

    // Overflow condition
    s.safePush(60);

    s.display();

    s.safePop();
    s.safePop();

    s.display();

    // Underflow condition
    s.safePop();
    s.safePop();
    s.safePop();
    s.safePop();

    return 0;
}