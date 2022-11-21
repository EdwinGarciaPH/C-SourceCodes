#include <iostream>

using namespace std;

// 2. No arguments passed but with a return value  

void prime();	// function prototype
int inputData();

int main()
{
	prime();
	return 0;
}

void prime()
{
	int num, i, flag=0;
	num = inputData();				// function call
	for (i=2; i<=num/2; ++i) {
		if (num % i == 0)
		{
			// cout<<i<<endl;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout<<num<<" is not a prime number.";
	} else {
		cout<<num<<" is a prime number.";
	}
	cout<<endl;
}


int inputData()
{
	int N;
	cout<<"Enter a positive integer to check: ";
	cin>>N;
	return N;
}