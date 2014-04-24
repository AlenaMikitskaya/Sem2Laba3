#include <iostream>
#include "queue_functions.h"
#include "queue_console.h"
using namespace std;
using namespace MyQ;

void menu();

int main()
{
    cout<<"For add element in the end of the queue enter 1"<<endl;
    cout<<"For remove the first element enter 2"<<endl;
    cout<<"For clear all queue enter 3"<<endl;
    cout<<"To check, whether queue is empty enter 4"<<endl;
    cout<<"For output the queue enter 5"<<endl;
    cout<<"For exit enter 0"<<endl;

    menu();
    return 0;
}

void menu()
{
    int operation;
    Queue myQueue;
    Data datum;
    while (true)
    {
        cout<<endl<<"Enter the operation: ";
        cin>>operation;
        if(operation==1)
        {
            datum=inputData();
            myQqueue.enqueue(datum);
        }

        if(operation==2)
        {
            myQqueue.dequeue();
        }

        if(operation==3)
        {
            myQqueue.clearQueue();
        }

        if(operation==4)
        {
            if(myQqueue.isEmpty())
            cout<<"Is full"<<endl;
            else
            cout<<"Is empty"<<endl;
        }

        if(operation==5)
        {
            myQqueue.outputQueue();
        }

        if(operation==0)
        {
            break;
        }
    }
}
