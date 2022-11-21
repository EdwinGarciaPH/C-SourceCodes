#include<iostream>

using namespace std;

int funcA()
{
	funcB();
	return 1;
}

int funcB()
{
	funcC();
	return 1;
}

int funcC()
{
	return 1;
}

int main()
{
	int N1, N2;
	
	cout<<"Enter the 1st Number: ";
	cin>>N1;
	
	funcA();
	
	return 0;
}