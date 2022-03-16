#include "SortedNumList.h"

void SortedNumList::add(double number)
{
	ListNode* nodePtr;
	ListNode* previousNodePtr;

	// 2 Scenarios

	if (head == nullptr || head->value >= number)
	{
		// 1. The linked list is empty OR the value being inserted must go first. (Modify head pointer)
		head = new ListNode(number, head);
	}
	else
	{
		// 2. Linked list is not empty and the item is placed after the first node
		previousNodePtr = head;
		nodePtr = head->next;

		// Traverse and find the insertion point
		while (nodePtr != nullptr && nodePtr->value < number)
		{
			// We are traversing!
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}

		// We've found where to insert the new value. 
		previousNodePtr->next = new ListNode(number, nodePtr);
	}

	previousNodePtr = nullptr;
	nodePtr = nullptr;
}