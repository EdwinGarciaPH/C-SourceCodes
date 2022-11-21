#include <iostream>

using namespace std;

void functionC()
{
	cout<<"Function C was called.";
}

void functionB()
{
	cout<<"Function B was called.";
	functionC();
}

void functionA()
{
	cout<<"Function A was called.";
	functionB();
}

int main()
{
	cout<<"Main Function was executed here.";
	functionA();
	
}