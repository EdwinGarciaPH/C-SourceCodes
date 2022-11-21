
#include <iostream>

using namespace std;

class Rectangle
{
	private:
	
	int width, height;
	
	public:
	
	int area(void)		// method declaration
	{
		return width * height;
	}
	
	Rectangle(int x, int y)	// constructor
	{
		width = x; 
		height = y;		
	}

	~Rectangle()			// deconstructor
	{
		cout<<"Terminating object"<<endl<<endl;
		system("pause");		
	}
	
	int Sum(int x, int y)
	{
		return x + y;
	}
};
