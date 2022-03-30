// Introduction to exception handling
#include <iostream>
#include <string>
using namespace std;

// Function Prototype
double divide(double, double);

int main()
{
	int num1, num2;
	double quotient;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	try 
	{
		quotient = divide(num1, num2);
		cout << "The quotient is " << quotient << endl;
	}
	catch (string exceptionString)
	{
		cout << exceptionString;
	}
	catch (int exInt)
	{
		cout << "ERROR! Something happened " << exInt << endl;
	}

	cout << "End of program!\n\n";

	return 0;
}

double divide(double numerator, double denominator)
{
	if (denominator == 0)
	{
		throw int(10);
	}
	else
	{
		return numerator / denominator;
	}
}