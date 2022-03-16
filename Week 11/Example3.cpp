#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList<string> list1;
	LinkedList<double> list2;
	LinkedList<int> list3;

	list1.add("Wallace");
	list1.add("Carolyn");
	list1.add("John");

	list2.add(6.7);
	list2.add(1.9);

	list3.add(100000);

	list1.displayList();
	list2.displayList();
	list3.displayList();

	cout << endl << endl;

	list1.remove("John");
	list2.remove(6.7);
	list3.remove(1);

	list1.displayList();
	list2.displayList();
	list3.displayList();

	return 0;
}