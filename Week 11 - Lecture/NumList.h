#pragma once
#include <iostream>
using namespace std;

class NumList
{
protected:
	// Represent one node
	struct ListNode
	{
		// Each node has a value and a pointer to (possibly) another node
		double value;
		ListNode* next;

		// Constructor
		ListNode(double value1, ListNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};
	// Represent the beginning of our linked list
	ListNode* head;
public:
	NumList()
	{
		// Initializes an empty linked list
		head = NULL;
	}
	~NumList();
	void add(double number);
	void displayList() const;
};
