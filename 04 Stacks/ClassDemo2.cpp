
#include <iostream>

using namespace std;

class Rectangle
{
	private:
		int width, height;
	
	public:
		int area(void);
		Rectangle(int x, int y);
		~Rectangle();
};

Rectangle::Rectangle(int x, int y)	// constructor
{
	width = x; 
	height = y;		
}

Rectangle::~Rectangle()			// deconstructor
{
	cout<<"Terminating object"<<endl<<endl;
	system("pause");		
}

int Rectangle::area(void)		// method declaration
{
	return width * height;
}
