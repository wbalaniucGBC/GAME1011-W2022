#pragma once
#include <iostream>
#include <string>
using namespace std;

class IntRange
{
private:
	int input;	// User input
	int lower;	// Lower bound
	int upper;	// Upper bound
public:
	// Exception class
	class TooLow 
	{
	private:
		int value;
	public:
		TooLow(int i)
		{
			setValue(i);
		}
		void setValue(int i) { value = i; }
		int getValue() const { return value; }
		void exceptionMessage()
		{
			cout << "The value " << getValue() << " is too low.\n";
		}
	};
	class TooHigh 
	{
	private:
		int value;
	public:
		TooHigh(int i)
		{
			setValue(i);
		}
		void setValue(int i) { value = i; }
		int getValue() const { return value; }
		void exceptionMessage()
		{
			cout << "The value " << getValue() << " is too high.\n";
		}
	};

	// Member functions
	IntRange(int low, int high)
	{
		setLower(low);
		setUpper(high);
		input = 0;
	}
	void setLower(int l) { lower = l; }
	void setUpper(int u) { upper = u; }
	int getLower() const { return lower; }
	int getUpper() const { return upper; }

	int getUserInput()
	{
		cin >> input;
		if (input < getLower())
		{
			throw TooLow(input);
		}
		else if (input > getUpper())
		{
			throw TooHigh(input);
		}

		return input;
	}
};