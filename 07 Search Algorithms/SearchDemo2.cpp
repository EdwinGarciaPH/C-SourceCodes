#include <iostream>
#include <string>
using namespace std;

void inputData(int size, int num[]);		// Function Prototype 
void getData();
void linearSearch(int size, int num[]);
void display();

int key, flag, index;

int main()
{
	int arrSize = 0;
	cout << "\nEnter the size of the array: ";
	cin >> arrSize;
	
	int *num = new int[arrSize];
	
	inputData(arrSize, num);		// Function Call 
	getData();
	linearSearch(arrSize, num);
	display();
	
	system("pause");
}

void inputData(int size, int num[])
{
	for (int ctr = 0; ctr < size; ctr++)
	{
		cout << "Enter value for index " << ctr<< ": "; 
		cin >> num[ctr];
	}
}

void getData()
{
	cout << "\nEnter the key to find the element in the array: ";
	cin >> key;
}

void linearSearch(int size, int num[])
{
	flag = -1;
	for (int ctr = 0; ctr < size; ctr++)	// ctr=0 1 2 3
	{
		if (key == num[ctr])
		{
			flag = 1;
			index = ctr;
			break;
		}
	}
}

void display()
{
	if (flag == -1)
		cout << "\nGiven key " << key << " is not present in the array" << endl;
	else
		cout << "\nGiven key " << key << " is position at index " << index << endl;
}




