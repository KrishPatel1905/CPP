#include <iostream>
using namespace std;

int main() {
    int stack[100], top = -1;
    int choice, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Push
            if (top == 99) {
                cout << "Stack Overflow\n";
            } else {
                cout << "Enter value to push: ";
                cin >> value;
                top++;
                stack[top] = value;
                cout << value << " pushed to stack\n";
            }
            break;

        case 2: // Pop
            if (top == -1) {
                cout << "Stack Underflow\n";
            } else {
                cout << stack[top] << " popped from stack\n";
                top--;
            }
            break;

        case 3: // Display
            if (top == -1) {
                cout << "Stack is empty\n";
            } else {
                cout << "Stack contents: ";
                for (int i = top; i >= 0; i--) {
                    cout << stack[i] << " ";
                }
                cout << "\n";
            }
            break;

        case 4: // Exit
            return 0;

        default:
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
