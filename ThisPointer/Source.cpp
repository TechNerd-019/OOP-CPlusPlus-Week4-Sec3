#include <iostream>

using namespace std;

class Location
{
	double latitude;
	double longitude;
public:
	Location& setLatitude(double latitude)
	{
		this->latitude = latitude;

		// After initializing the member of the object, it is returned.

		return *this;
	}
	double getLatitude()
	{
		return latitude;
	}
	void setLongitude(double longitude)
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

	// Functions can be chained together with the '.'
	// This is common practice, as it allows more than a function to be called on a single line.
	// Some people do not like it though, so the choice is yours.

	l.setLatitude(43.4787).setLongitude(-80.5187);

	cout << l.getLatitude() << endl;
	cout << l.getLongitude() << endl;

	return 0;
}
