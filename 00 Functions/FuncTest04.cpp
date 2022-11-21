#include <iostream>

using namespace std;

//  4. Arguments passed and a return value

int prime(int num);	// function prototype
int inputData();
int flag=0;

int main()
{
	int DataIN;
	DataIN = inputData();
	flag = prime(DataIN);
	if (flag == 1)
	{
		cout<<DataIN<<" is not a prime number.";
	} else {
		cout<<DataIN<<" is a prime number.";
	}
	cout<<endl;
	return 0;
}

int prime(int num)
{
	int i;
				
	for (i=2; i<=num/2; ++i) {
		if (num % i == 0)
		{
			return 1;
		}
	}
	return 0;
}

int inputData()
{
	int N;
	cout<<"Enter a positive integer to check: ";
	cin>>N;
	return N;
}