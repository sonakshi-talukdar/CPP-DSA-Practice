#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};

int main()
{
    Node* head = new Node();
    Node* sec = new Node();
    Node* tail = new Node();

    head->data = 10;
    sec->data = 20;
    tail->data = 30;

    // Forward links
    head->next = sec;
    sec->next = tail;
    tail->next = nullptr;

    // Backward links
    head->prev = nullptr;
    sec->prev = head;
    tail->prev = sec;

    // Forward traversal
    Node* n = head;

    while(n != nullptr)
    {
        cout << n->data;

        if(n->next != nullptr)
            cout << "->";

        n = n->next;
    }

    cout << endl;

    // Backward traversal
    Node* m = tail;

    while(m != nullptr)
    {
        cout << m->data;

        if(m->prev != nullptr)
            cout << "->";

        m = m->prev;
    }

    return 0;
}