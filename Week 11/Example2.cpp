#include "SortedNumList.h"

int main()
{
	SortedNumList list;

	list.add(12.6);
	list.add(7.9);
	list.add(2.5);
	list.add(1.5);
	list.add(10.5);
	list.add(1234.567);

	list.displayList();

	cout << endl << endl;

	return 0;
}