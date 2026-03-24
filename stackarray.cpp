#include <iostream>
using namespace std;
class Stack {
    public:
    int* arr;
    int top;
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(top == size-1){
            cout << "Stack overflow cannot push " << data << endl;
            return;
        }
        top++;
        arr[top] = data;
        cout << "Pushed " << data << endl;
    }
    void pop(){
        if(top == -1){
            cout << "Stack underflow" << endl;
            return;
        }
        cout << "Popped " << arr[top] << endl;
        top--;  
    }
    int peek(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return true;
        }
        return false;
    }
    bool isFull(){
        if(top == size-1){
            cout<< "Stack is full" << endl;
            return true;
        }
        return false;
    }
    void display(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;
    Stack s(n);
    cout << "Enter elements to push into the stack: " << endl;
    for (int i = 0; i <n; i++)
    {
        int data;
        cin >> data;
        s.push(data);
    }
    s.display();
    for (int i = 0; i < n; i++)
    {
        s.pop();
    }
    
    return 0;
}