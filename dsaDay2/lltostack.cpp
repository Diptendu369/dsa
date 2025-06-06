#include <iostream>
// Stack implementation using linked list in C++
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Stack {
private:
    Node* top;  

public:
    Stack() {
        top = nullptr;
    }

 
    void push(int value) {
        Node* newNode = new Node(); 
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to stack.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack.\n";
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }
    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        Node* temp = top;
        cout << "Stack: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};


int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element: " << s.peek() << "\n";

    s.pop();
    s.display();

    return 0;
}
