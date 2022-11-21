#include <iostream>
using namespace std;
class Rectangle
{
	private:
	int width, height;
	
	public:
	int area(void) //methods
	{
		return width * height;
	}
	Rectangle(int x, int y) //constructor
	{
		width = x;
		height = y;
	}
	~Rectangle() //deconstructor
	{
		cout<<"Terminating object"<< endl<< endl;
		system("pause");
	}
};

int main()
{
	int areaOfRect;
	Rectangle rect(3,4); //object of the class
	
	// Rectangle rect = new Rectangle(3,4); in Java
	
	areaOfRect = rect.area(); 
	cout<< "area: "<< areaOfRect << endl;
}
