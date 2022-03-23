#include "IntStack.h"
#include <iostream>
using namespace std;

//int main()
//{
//	IntStack stack(5);
//	int values[] = { 5, 10, 15, 20, 25 };
//	int value;
//
//	try
//	{
//		cout << "Pushing...\n";
//		for (int i = 0; i < 5; i++)
//		{
//			cout << values[i] << " ";
//			stack.push(values[i]);
//		}
//
//		cout << "\nPopping...\n";
//
//		for (int i = 0; i < 5; i++)
//		{
//			stack.pop(value);
//			cout << value << " ";
//		}
//
//		stack.pop(value);	// Underflow
//	}
//	catch (IntStack::Overflow)
//	{
//		cout << "\nAn Overflow exception occurred.\n";
//	}
//	catch (IntStack::Underflow)
//	{
//		cout << "\nAn Underflow exception occurred.\n";
//	}
//
//	return 0;
//}