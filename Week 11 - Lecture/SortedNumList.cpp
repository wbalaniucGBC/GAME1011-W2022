#include "SortedNumList.h"

void SortedNumList::add(double number)
{
	ListNode* nodePtr;
	ListNode* previousNodePtr;

	// 2 Scenarios
	// 1. The linked list empty OR the value being inserted must go first
	if (head == NULL || head->value >= number)
	{
		// Add something to the beginning of my list
		head = new ListNode(number, head);
	}
	else
	{
		// Linked list is not empty and the item is placed after the 1st node
		previousNodePtr = head;
		nodePtr = head->next;

		// Traverse and find the insertion point
		while (nodePtr != NULL && nodePtr->value < number)
		{
			// We are traversing
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}

		// We've found where to insert the new value
		previousNodePtr->next = new ListNode(number, nodePtr);
	}
}