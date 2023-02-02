#include <iostream>

using namespace std;

class Base
{
private:
	int x;

public:
	int getX()
	{
		return x;
	}
};

class Derived :public Base
{
	void print()
	{
		//PROTECTED:
		// X may only be accessed with the "Protected" access specifier.
		// cout << x << endl;

		//PRIVATE:
		// Common approach we have been studying, using setters and getters.
		cout << getX() << endl;
	}
};

int main(void)
{

	Base b;

	// b.x = 4; // This is not going to work, since X is protected.

	return 0;
}