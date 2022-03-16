#pragma once
#include <iostream>
using namespace std;

class NumList
{
	// Represent one node
	struct ListNode
	{
		// Each node has a value and a pointer to another node (maybe)
		double value;
		ListNode* next;

		ListNode(double value1, ListNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	// Represent the beginning of the linked list
	ListNode* head;

public:
	// Constructor
	NumList()
	{
		// Initialize and empty linked list
		head = nullptr;
	}

	// Destructor
	~NumList();

	// Member Functions
	void add(double number);
	void displayList() const;
};