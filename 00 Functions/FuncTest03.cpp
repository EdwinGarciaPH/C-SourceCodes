#include <iostream>

using namespace std;

//  3. Arguments passed but no return value 

void prime(int num);	// function prototype
int inputData();

int main()
{
	int DataIN;
	DataIN = inputData();
	prime(DataIN);
	return 0;
}

void prime(int num)
{
	int i, flag=0;
				
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