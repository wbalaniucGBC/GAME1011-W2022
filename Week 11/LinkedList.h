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
		// Each node has a value and a pointer to another node (maybe)
		T value;
		ListNode* next;

		ListNode(T value1, ListNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	// Represent the beginning of the linked list
	ListNode* head;

public:
	// Constructor
	LinkedList()
	{
		// Initialize and empty linked list
		head = nullptr;
	}

	// Destructor
	~LinkedList();

	// Member Functions
	void add(T number);
	void remove(T value);
	void displayList() const;
};

template<class T>
LinkedList<T>::~LinkedList()
{
	ListNode* nodePtr = head;			// Set nodePtr to the beginning of the linked list
	while (nodePtr != nullptr)			// Traveral
	{
		ListNode* garbage = nodePtr;	// Keeping track of what will be deleted
		nodePtr = nodePtr->next;		// Move nodePtr to the next node
		delete garbage;					// Delete node
		garbage = nullptr;
	}
	nodePtr = nullptr;
}

template<class T>
void LinkedList<T>::add(T value)
{
	// 2 Scenarios
	if (head == nullptr)
	{
		// 1. List is empty
		head = new ListNode(value);
	}
	else
	{
		// 2. List is NOT empty
		// Travers to the last node
		ListNode* nodePtr = head;	// Set nodePtr to the beginning of the list
		// Traverse to the last node
		while (nodePtr->next != nullptr)
		{
			// Traverse nodePtr through the list
			nodePtr = nodePtr->next;
		}

		// I am at the last node!
		nodePtr->next = new ListNode(value);
	}
}

// Removal
template<class T>
void LinkedList<T>::remove(T value)
{
	ListNode* nodePtr = nullptr;
	ListNode* previousNodePtr = nullptr;

	// 3 scenarios
	if (head == nullptr)
	{
		// 1. List is empty. Do nothing
		return;
	}
	
	if (head->value == value)
	{
		// 2. Determing if the first item in the list will be removed (head)
		nodePtr = head;
		head = head->next;
		delete nodePtr;
		nodePtr = nullptr;
	}
	else
	{
		// 3. Node is not the first item to be remove. OR it doesn't exist
		nodePtr = head;	// Set nodePtr to the beginning of the linked list

		// Keep traversing so long as nodePtr doesn't reach the end AND nodePtr doesn't find the value to be deleted
		while (nodePtr != nullptr && nodePtr->value != value)
		{
			// Traverse
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}

		// Check if the nodePtr is point to something (That is not the end of the lists, aka nullptr). Delete it.
		if (nodePtr)
		{
			previousNodePtr->next = nodePtr->next;
			delete nodePtr;
		}
	}

	nodePtr = nullptr;
	previousNodePtr = nullptr;
}

template<class T>
void LinkedList<T>::displayList() const
{
	ListNode* nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << " ";
		nodePtr = nodePtr->next;
	}
}