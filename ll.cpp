#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

int TraverseLinkedList(Node* head) {
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    return 0;
}

int main(){
    Node* head = new Node(5);
    Node* second = new Node(10);
    head->next = second;
    Node* third = new Node(15);
    second->next = third;
    Node* fourth = new Node(20);
    third->next = fourth;
    Node* fifth = new Node(25);
    fourth->next = fifth;
    cout << "Node created with data: " << head->data << endl;
    TraverseLinkedList(head);
    return 0;
}