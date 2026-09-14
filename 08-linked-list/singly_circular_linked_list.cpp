#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node;
    Node* sec = new Node;
    Node* tail = new Node;

    head->data = 10;
    sec->data = 20;
    tail->data = 30;

    head->next = sec;
    sec->next = tail;
    tail->next = head;
    
    Node *n = head;
    do
    {
        cout <<n->data<<" ";
        n=n->next;
    } while(n!= head);
    
    return 0;
}
