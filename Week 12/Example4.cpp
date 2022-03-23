#include <iostream>
#include "DynIntQueue.h"
using namespace std;

int main()
{
	DynIntQueue iQueue;

	cout << "Enqueue 5 items...\n";

	for (int i = 1; i <= 5; i++)
	{
		iQueue.enqueue(i * i);
	}

	cout << "The values in the queue were: \n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}
	cout << endl;

	return 0;
}