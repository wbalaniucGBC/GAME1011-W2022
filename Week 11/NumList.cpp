#include "NumList.h"

NumList::~NumList()
{
	ListNode* nodePtr = head;	// Sets nodePtr to the beginning of the linked list

	while (nodePtr != nullptr)
	{
		// Keep track of the node that will be deleted
		ListNode* garbage = nodePtr;
		// Increment nodePtr forwards
		nodePtr = nodePtr->next;
		// Delete
		delete garbage;
		garbage = nullptr;
	}

	nodePtr = nullptr;
}

void NumList::add(double number)
{
	// 2 Scenarios to consider:
	if (head == nullptr)
	{
		// 1. List is empty
		head = new ListNode(number);
	}
	else
	{
		// 2. List is not empty
		// Must traverse to the last node of the list
		ListNode* nodePtr = head;	// Start at the beginning of the linked list
		// Travers to the last node
		while (nodePtr->next != nullptr)
		{
			// Increment nodePtr through the list
			nodePtr = nodePtr->next;
		}

		// I am at the last node!
		nodePtr->next = new ListNode(number);
	}
}

void NumList::displayList() const
{
	ListNode* nodePtr = head;			// Set nodePtr to the beginning of the list.
	while (nodePtr)						// Traverse until nodePtr is pointing to nullptr (aka the end)
	{
		cout << nodePtr->value << " ";	// Print value at current node
		nodePtr = nodePtr->next;		// Move to the next node
	}
}