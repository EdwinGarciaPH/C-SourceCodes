#include <iostream>

using namespace std;

// Sample Code for Function Overloading 

int test()
{
	return 5;
}

int test(int a)
{
	return 2 * a;	
}

double test(double a)
{
	return 2.5 * a;	
}

int test(int a, double b)
{
	return a * (int) b;	
}

int main()
{
	cout<<test()<<endl;
	cout<<test(5)<<endl;
	cout<<test(32.5)<<endl;
	cout<<test(15,32.35)<<endl;
	return 0;
}