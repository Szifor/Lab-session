#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize top to -1 (empty stack)
    }

    void push(int element) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow. Cannot push element." << endl;
        } else {
            top++;
            arr[top] = element;
            cout << "Pushed element: " << element << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop element." << endl;
        } else {
            int poppedElement = arr[top];
            top--;
            cout << "Popped element: " << poppedElement << endl;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack stack;

    int choice;
    int element;

    do {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                stack.push(element);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
