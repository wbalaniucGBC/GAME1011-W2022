#include <iostream>
#include "Inheritance.h"
using namespace std;

const string disc[] = { "Game Developer", "Software Engineer", "Animator" };

int main()
{
	Person* p = new Person();
	Student* s = new Student();
	Faculty* f = new Faculty();

	// Initialize and print a person
	p->setName("Wallace Balaniuc");

	cout << "Hello, " << p->getName() << endl;

	// Initialize and print a student
	s->setName("Jane Doe");
	s->setMajor(Discipline::GAME_DEVELOPER);
	s->setAdvisor(new Person());

	cout << "Hello, " << s->getName() << ". You are a " << disc[static_cast<int>(s->getMajor())] << endl;

	// Initialize and print a faculty
	f->setName("Mr Bob Dole");
	f->setDepartment(Discipline::SOFTWARE_ENGINEER);

	cout << "Hello, " << f->getName() << ". Your department is " << disc[static_cast<int>(f->getDepartment())] << endl;
	
	delete p;
	delete s;
	delete f;

	p = nullptr;
	s = nullptr;
	f = nullptr;

	return 0;
}