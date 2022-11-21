#include <iostream>
#include <string>

using namespace std;

void greet(string name);		// Function Declaration | Prototypes
void saymsg(string msg);
void total(int n1, int n2, int n3);
int sum(int n1, int n2);
int diff(int n1, int n2);
int prod(int n1, int n2);
int quot(int n1, int n2);
int mod(int n1, int n2);

// return type - function name - parameter list (p1, p2, ... pN)
void greet(string name)		// Function Header
{
	cout<<"Hello there! "<<name<<endl;
	saymsg("Kamote");
	total(5,10,15);
}

void saymsg(string msg)		// Function Header
{
	cout<<"Thanks! "<<msg<<endl;
}

void total(int n1, int n2, int n3)
{
	int sum = n1 + n2 + n3;
	cout<<"Total is "<<sum<<endl;
}

int sum(int n1, int n2)
{
	return n1 + n2;
}

int diff(int n1, int n2)
{
	return n1 - n2;
}

int prod(int n1, int n2)
{
	return n1 * n2;
}

int quot(int n1, int n2)
{
	return n1 / n2;
}

int mod(int n1, int n2)
{
	return n1 % n2;
}

int main()
{
	int N1, N2;
	
	greet("Edwin");		// Function Call ( arguments )
	greet("Maria");	
	greet("Steve");
	
	total(25,75,45);
	cout<<"Enter the 1st Number: ";
	cin>>N1;
	cout<<"Enter the 2nd Number: ";
	cin>>N2;	
	cout<<"The sum is : "<<sum(N1,N2)<<endl;
	cout<<"The difference is : "<<diff(N1,N2)<<endl;
	cout<<"The product is : "<<prod(N1,N2)<<endl;
	cout<<"The quotient is : "<<quot(N1,N2)<<endl;
	cout<<"The remainder is : "<<mod(N1,N2)<<endl;
	
	return 0;
}