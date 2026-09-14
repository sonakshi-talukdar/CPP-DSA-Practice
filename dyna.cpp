#include <iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
    }
};
class Singly
{
public:
    Node* head;
    Node* tail;
    Singly(){
        head = nullptr;
        tail = nullptr;
    }
    void insert(int data){
        Node *hello = new Node(data);

        if (head == nullptr){
            head = hello;
            tail = hello;
        } else {
            tail->next=hello;
            tail=hello;
        }
    }
    void dis(){
        Node* n=head;
        while(n!=nullptr){
            cout<<n->data<<"->";
            n=n->next;
        }
    }
};

int main()
{
    Singly sll;
    sll.insert(10);
    sll.insert(20);
    sll.dis();

    return 0;
}