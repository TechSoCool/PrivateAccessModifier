// Demonstrate private access modifier using a C++ program.
// Define a class called Circle, has one public member variable radius,
// and one public member function called Area 
// Then create an object called Cir, access member variable and set it to 5.5
// finallly access member function Area and compute area of circle
#include <iostream>
using namespace std;

class Circle {
			private:		// private class definition
				double radius;  // public member function
			public:			// public class definition
				double Area(double radius)	// public member function
				{
					return 3.14 * radius * radius;
				}
};
int main()
{
	Circle Cir; // instance of class Circle
	
	cout << "Area is: " << Cir.Area(5.5) << endl;



	system("pause");
	return 0;
}