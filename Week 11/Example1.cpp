#include "NumList.h"
using namespace std;

int main()
{
	NumList list;

	list.add(2.5);
	list.add(7.9);
	list.add(12.6);

	list.displayList();

	cout << endl << endl;

	return 0;
}