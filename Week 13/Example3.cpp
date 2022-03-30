// Demonstrate the bad_alloc exception
#include <iostream>
#include <cstdlib>
#include <new>		// Needed for bad_alloc
using namespace std;

// bad_allo occurs when you cannot allocate memory

int main()
{
	int* p;
	try 
	{
		p = new int[2];
		p[0] = 10;
		p[1] = 20;
		throw bad_alloc();
	}
	catch (bad_alloc b)
	{
		cout << b.what();
		exit(1);
	}

	cout << p[0] << " " << p[1];

	return 0;
}