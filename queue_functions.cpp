#include "queue_functions.h"
#include <iostream>

using namespace std;

Queue::Queue():
    head(nullptr),
    tail(nullptr)
    {

    }

Queue::~Queue()
{
    clearQueue();
}

void Queue::enqueue(Data datum)
{
    Node *p=nullptr;
    p=new  Node;

    if(nullptr==head&&nullptr==tail)
    {
        p->link=nullptr;
        tail=p;
        head=p;
    }
    else
    {
        p->link=nullptr;
        tail->link=p;
        tail=p;
    }

    p->datum=datum;
    p=nullptr;
}

void Queue::dequeue()
{
    if(head)
    {
        Node *p=head;
        head=head->link;
        p->link=nullptr;
        p->datum=0;
        delete p;
        p=nullptr;
    }
}

void Queue::clearQueue()
{
    Node *p=nullptr;
    p=head;
    while(head)
    {
        p=head->link;
        delete head;
        head=p;
    }
    head=nullptr;
    tail=nullptr;
}

void Queue::outputQueue() const
{
    Node *p=nullptr;
    p=head;
    while(p)
    {
        cout<<p->datum<<endl;
        p=p->link;
    }
}

bool Queue::isEmpty() const
{
    return (head&&tail);
}



