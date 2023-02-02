#include <iostream>

using namespace std;

class Location
{
	double latitude;
	double longitude;
public:
	void setLatitude(int a)
	{
		latitude = a;
	}
	double getLatitude()
	{
		return latitude;
	}
	void setLongitude(int longitude)
	{

		// Even though the integer passed has the same name, 
		// using the "this" pointer directly indicates the variable
		// you are trying to assign ehich is inside your object.

		this->longitude = longitude;
	}
	double getLongitude()
	{
		return longitude;
	}
	void print()
	{
		cout << this << endl;
	}
};

int main()
{
	Location l;
	Location l2;
	cout << "Address using amperssand: " << endl;
	cout << &l << endl;
	cout << &l2 << endl;

	cout << "Address using the 'this' pointer: " << endl;
	// The "this" pointer takes the address of Location 'l' and prints it.
	l.print();

	// The "this" pointer takes the address of Location 'l2' and prints it.
	l2.print();

	return 0;
}