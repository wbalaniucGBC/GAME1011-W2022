// STL List
#include <iostream>
#include <list>			// Required if using linked lists
using namespace std;

int main()
{
	// Doubly linked list
	list<int> myList;
	list<int>::iterator iter;

	// Add values to our list
	for (int i = 0; i < 1000; i++)
	{
		myList.push_back(i * 2);
	}

	// Display the value
	for (iter = myList.begin(); iter != myList.end(); iter++) // iter++ -- iter = iter->next;
	{
		cout << *iter << " ";
	}
	cout << endl << endl;

	myList.reverse();

	// Display the value
	for (iter = myList.begin(); iter != myList.end(); iter++) // iter++ -- iter = iter->next;
	{
		cout << *iter << " ";
	}
	cout << endl << endl;

	return 0;
}