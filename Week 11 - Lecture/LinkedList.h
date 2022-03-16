#pragma once
#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
protected:
	// Represent one node
	struct ListNode
	{
		// Each node has a value and a pointer to (possibly) another node
		T value;
		ListNode* next;

		// Constructor
		ListNode(T value1, ListNode* next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	// Represent the beginning of our linked list
	ListNode* head;
public:
	LinkedList()
	{
		// Initializes an empty linked list
		head = NULL;
	}
	~LinkedList();
	void add(T value);
	void remove(T value);
	void displayList() const;
};

template<class T>
LinkedList<T>::~LinkedList()
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
	}
}

template<class T>
void LinkedList<T>::add(T value)
{
	// 2 scenarios to consider
// 1. List is empty
	if (head == NULL)
	{
		head = new ListNode(value);
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
		nodePtr->next = new ListNode(value);
	}
}

template<class T>
void LinkedList<T>::remove(T value)
{
	ListNode* nodePtr = NULL;
	ListNode* previousNodePtr = NULL;

	// 3 scenarios
	// 1. List is empty. Do nothing
	if (!head)
	{
		return;
	}
	// 2. Determine if I am removing the first node
	if (head->value == value)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		// 3. Node is not the first or it doesn't exist
		nodePtr = head;

		// Keep traversing so long as nodePtr doesn't reach the end AND nodePtr doesn't find the value to be deleted
		while (nodePtr != NULL && nodePtr->value != value)
		{
			// Traversing through the list
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}

		// Check if nodePtr is pointing to SOMETHING (That is not the end of the list, aka NULL)
		if (nodePtr)
		{
			previousNodePtr->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

template<class T>
void LinkedList<T>::displayList() const
{
	ListNode* nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << " ";
		nodePtr = nodePtr->next;	// Move nodePtr to the next node
	}
}