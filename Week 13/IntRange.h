#pragma once
#include <iostream>
using namespace std;

class IntRange
{
private:
	int input;	// User input
	int lower;	// Lower bound
	int upper;	// Upper bound
public:
	// Exception class
	class TooLow {};
	class TooHigh {};

	// Member functions
	IntRange(int low, int high)
	{
		setLower(low);
		setUpper(high);
		input = 0;
	}
	void setLower(int l) { lower = l; }
	void setUpper(int u) { upper = u; }
	int getLower() { return lower; }
	int getUpper() { return upper; }

	int getUserInput()
	{
		cin >> input;
		if (input < getLower())
		{
			throw TooLow();
		}
		else if (input > getUpper())
		{
			throw TooHigh();
		}

		return input;
	}
};