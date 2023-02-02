#include <iostream>
#include <string>

// Notes written by Salah S. AKA TechNerd. :D

using namespace std;
// Let us recall the basic concept of classes, setters, and getters.
class Person
{

	string name;
	int age;

public:
	void setName(string inputName)
	{
		name = inputName;
	}
	string getName()
	{
		return name;
	}

	void setAge(int inputAge)
	{
		age = inputAge;
	}

	int getAge()
	{
		return age;
	}
};

// Now, inheritance:

class Student:public Person  // :[type] [class name]

	// There is no need to repeat code from name, and age.
	// It can be gathered from the Person class, 
	// because a student is a person.

	// The "public" part will be explained later.
{
	int id;
public:
	void setID(int inputID)
	{
		id = inputID;
	}
	int getID()
	{
		return id;
	}
};

int main(void)
{
	cout << "Start... " << endl;

	Student s;
	s.setName("Mike");
	s.setAge(19);
	s.setID(123132);

	cout << s.getName() << endl;

	return 0;
}

// Terminology:

// Person is the base (superclass) (parent) class.
// Student is the derived (subclass) (child) class.