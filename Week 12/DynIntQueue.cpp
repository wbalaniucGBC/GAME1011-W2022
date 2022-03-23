#include "DynIntQueue.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Constructor
DynIntQueue::DynIntQueue()
{
	front = rear = nullptr;
}

// Destructor
DynIntQueue::~DynIntQueue()
{
	clear();
}

void DynIntQueue::enqueue(int num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);		// Creates the new node at the end of rear
		rear = rear->next;						// Moves to the new rear node
	}
}

void DynIntQueue::dequeue(int& num)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << "The queue the empty.\n";
		exit(1);
	}
	else
	{
		num = front->value;		// Printing purposes only!

		temp = front;
		front = front->next;
		delete temp;
	}
	temp = nullptr;
}

bool DynIntQueue::isEmpty() const
{
	return (front == nullptr);
}

void DynIntQueue::clear()
{
	int value;	// Dummy variable

	while (!isEmpty())
	{
		dequeue(value);
	}
}