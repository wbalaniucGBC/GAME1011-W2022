#include "NumList.h"

NumList::~NumList()
{
	ListNode* nodePtr = head;	// Sets nodePtr to the beginng of the linked list
	while (nodePtr != NULL)	// Keeps traversing until nodePtr is NULL
	{
		// Keep track of the node that will be deleted
		ListNode* garbage = nodePtr;
		// Increment our nodePtr forward
		nodePtr = nodePtr->next;
		// Delete
		delete garbage;
		garbage = nullptr;
	}

	nodePtr = nullptr;
}

void NumList::add(double number)
{
	// 2 scenarios to consider
	// 1. List is empty
	if (head == NULL)
	{
		head = new ListNode(number);
	}
	else
	{
		// 2. List is not empty
		// Must traverse to the last node of the linked list
		ListNode* nodePtr = head;	// Start at the beginning of the linked list
		// Traverse the list until the last node
		while (nodePtr->next != NULL)
		{
			// Increment our nodePtr through the list
			nodePtr = nodePtr->next;
		}

		// I am at the last node
		nodePtr->next = new ListNode(number);
	}
}

void NumList::displayList() const
{
	ListNode* nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << " ";
		nodePtr = nodePtr->next;	// Move nodePtr to the next node
	}
}