#include <iostream>

using namespace std;

class Base
{
private:
	int y;

public:
	Base()
	{

	}
	int getY()
	{
		return y;
	}
	Base(int inputY)
	{
		cout << "Base(int inputY) is called." << endl;
		y = inputY;

	}
	void setY(int inputY)
	{
		y = inputY;
	}
};

class Derived :public Base
{
	int z;
public:

	// Any derived constructor needs to call the default constructor. If no default is present, it will fail.
	// The default constructor is not given if the user codes another constructor.
	// An initializer list can also be used to explicitly call the constructor.
	// Initializer list: inheritedClassConstructor():ParentClassDefaultConstructor(input) { }
	// You can also explicitly call default constructors 

	// You may also initialize a constructor from an inherited class using any available constructor from the parent class.
	// ANY constructor from the inherited class must call a constructor from the parent class.

	Derived():Base(0)
	{
		z = 0;
		cout << "Derived() is called." << endl;
	}
	void setZ(int inputZ)
	{
		z = inputZ;
	}

	int getZ()
	{
		return z;
	}
};

int main(void)
{
	// This object, because of inheritance, will call both "Base" and "Derived" constructors.
	Derived d;


	return 0;
}