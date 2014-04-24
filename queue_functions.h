#ifndef QUEUE_FUNCTIONS_H
#define QUEUE_FUNCTIONS_H

namespace MyQ
{

typedef int Data;

class Queue
{
    public:
        Queue();
        ~Queue();

        void enqueue(Data datum);
        void dequeue();
        void clearQueue();
        void outputQueue() const;
        bool isEmpty() const;

    private:
        struct Node
        {
            Data datum;
            Node *link;
        } *head, *tail;
};

}

#endif // QUEUE_FUNCTIONS_H


