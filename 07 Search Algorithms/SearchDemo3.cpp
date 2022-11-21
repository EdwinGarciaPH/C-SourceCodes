#include <iostream>
using namespace std;

int data[5] = {4,8,12,16,20};
int key, first, last, mid, flag, index;

void getData()
{
	cout << "\nEnter the key to find the element in the array: ";
	cin >> key;
}

void binarySearch()
{
	flag = -1;
	first = 0;
	last = 5 - 1;
	mid = (first + last) / 2;
	while (last >= first)
	{
		mid = (first + last) / 2;
		if (key > data[mid])
			first = mid + 1;
		else if (key < data[mid]) 
			last = mid - 1;
		else
		{
			index = mid;
			flag = 1;
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

int main()
{
	getData();				// Function Call
	binarySearch();
	display();
	system("pause");
} 
