#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node();
    Node* sec = new Node();
    Node* third = new Node();
    Node* tail = new Node();

    head->data = 10;
    sec->data = 20;
    third->data = 30;
    tail->data = 40;

    head->next = sec;
    sec->next = third;
    third->next = tail;
    tail->next = nullptr;
    cout <<head->next->next->next<<endl;
    return 0;
}
