#include <iostream>
#include "DynIntQueue.h"
#include <cstdlib>
using namespace std;

//************************
// Constructor.          *
//************************
DynIntQueue::DynIntQueue()
{
    front = NULL;
    rear = NULL;
}

//************************
// Destructor.           *
//************************
DynIntQueue::~DynIntQueue()
{
    clear();
}

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
void DynIntQueue::enqueue(int num)
{
    if (isEmpty())
    {
        front = new QueueNode(num);
        rear = front;
    }
    else
    {
        rear->next = new QueueNode(num);
        rear = rear->next;
    }
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
void DynIntQueue::dequeue(int& num)
{
    QueueNode* temp;
    if (isEmpty())
    {
        cout << "The queue is empty.\n";
        exit(1);
    }
    else
    {
        num = front->value;
        temp = front;
        front = front->next;
        delete temp;
    }
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************
bool DynIntQueue::isEmpty() const
{
    if (front == NULL)
        return true;
    else
        return false;
}

//********************************************
// Function clear dequeues all the elements  *
// in the queue.                             *
//********************************************
void DynIntQueue::clear()
{
    int value;   // Dummy variable for dequeue

    while (!isEmpty())
        dequeue(value);
}