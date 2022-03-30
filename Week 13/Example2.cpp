// Object oriented exception handling
#include <iostream>
#include "IntRange.h"
using namespace std;

//int main()
//{
//	const int LOWER_BOUND = 2;
//	const int UPPER_BOUND = 15;
//	IntRange range(LOWER_BOUND, UPPER_BOUND);
//	int userValue;
//
//	cout << "Enter a value in the range of " << LOWER_BOUND << " - " << UPPER_BOUND << ": ";
//	try 
//	{
//		userValue = range.getUserInput();
//		cout << "You entered: " << userValue << endl;
//	}
//	catch (IntRange::TooLow e)
//	{
//		e.exceptionMessage();
//	}
//	catch (IntRange::TooHigh ex)
//	{
//		ex.exceptionMessage();
//	}
//
//	cout << "End of program!\n";
//
//	return 0;
//}