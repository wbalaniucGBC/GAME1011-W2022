#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Discipline {GAME_DEVELOPER, SOFTWARE_ENGINEER, ANIMATOR};
enum class Classification {FRESHMAN, SOPHMORE, JUNIOR, SENIOR};

// Base class
class Person
{
private:
	string name;
public:
	Person()
	{
		cout << "Person Constructor Called!" << endl;
 		setName("");
	}
	Person(const string& name)
	{
		setName(name);
	}
	~Person()
	{
		cout << "Person Destructor Called!" << endl;
	}
	void setName(const string& name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
};

class Student : public Person
{
private:
	Discipline major;
	Person* advisor;
public:
	Student()
	{
		cout << "Student Constructor Called!" << endl;
	}
	~Student()
	{
		cout << "Student Destructor Called!" << endl;
	}
	void setMajor(Discipline major)
	{
		this->major = major;
	}
	Discipline getMajor()
	{
		return major;
	}
	void setAdvisor(Person* advisor)
	{
		this->advisor = advisor;
	}
	Person* getAdvisor()
	{
		return advisor;
	}
};

class Faculty : public Person
{
private:
	Discipline department;
public:
	Faculty()
	{
		cout << "Faculty Constructor Called!" << endl;
	}
	~Faculty()
	{
		cout << "Faculty Destructor Called!" << endl;
	}
	void setDepartment(Discipline department)
	{
		this->department = department;
	}
	Discipline getDepartment()
	{
		return department;
	}
};