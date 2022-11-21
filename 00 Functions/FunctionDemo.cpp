#include<iostream>

using namespace std;

void greet();						// function prototypes 
void printNum(int num);
void displayNum(int x, double y);
int add(int n1, int n2);

int main()
{
	int x, y;
	int N1 = 10;
	double N2 = 75.75;
	greet();		// function call 
	
	printNum(N1);	// function call 
	
	displayNum(N1, N2);
	
	cout<<"Enter 1st Number: ";
	cin>>x;
	cout<<"Enter 2nd Number: ";
	cin>>y;
	
	int sagot = add(x,y);
	cout<<"Sum = "<<sagot<<endl;
	cout<<"Sum = "<<add(125,175)<<endl;
	
	cout<<"End of code"<<endl;
	return 0;
}

void greet()
{
	cout<<"Welcome to C++ Programming!"<<endl;
}

void printNum(int num)
{
	cout<<num<<endl;
}

void displayNum(int x, double y)
{
	cout<<"The int number is "<<x<<endl;
	cout<<"The double number is "<<y<<endl;
}

int add(int n1, int n2)
{
	return n1 + n2;
}

