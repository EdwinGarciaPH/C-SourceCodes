#include <iostream>

using namespace std;

int key, first, last, mid, flag, index, arrSize, ctr=0;

void inputData(int size, int num[])
{
	for (int ctr = 0; ctr < size; ctr++)
	{
		cout << "Enter value for index " << ctr << ": ";
		cin >> num[ctr];
	}
}

void getData()
{
	cout << "\nEnter the key to find the element in the array :";
	cin >> key;
}

void binarySearch(int num[])
{
	flag = 0;
	first = 0;
	last = arrSize - 1;
	mid = (first + last) / 2;
	while (last >= first)
	{
		mid = (first + last) / 2;
		if (key > num[mid])
			first = mid + 1;
		else if (key < num[mid])
			last = mid - 1;
		else
		{
			index = mid;
			flag = 1;
			break;
		}
		++ctr;
	}
}

void display()
{
	if (flag == 0)
		cout << "\nGiven key " << key << " is not present in the array" << endl;
	else {
		cout << "\nGiven key " << key << " is position at index " << index << endl; 
		cout << "\nIteration: " << ctr << endl; 
	}
}

int main()
{
	cout << "\nEnter the size of the array: ";
	cin >> arrSize;
	int *num = new int[arrSize];
	
	inputData(arrSize, num);
	getData();
	binarySearch(num);
	display();
	
	system("pause");
}
