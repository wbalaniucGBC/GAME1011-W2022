#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList<string> list;
	LinkedList<double> list2;
	LinkedList<int> list3;

	list.add("Wallace");
	list.add("Balaniuc");
	list.add("John");

	list2.add(6.7);

	list3.add(10);

	list.displayList();
	list2.displayList();
	list3.displayList();

	list.remove("Wallace");

	list.displayList();

	return 0;
}