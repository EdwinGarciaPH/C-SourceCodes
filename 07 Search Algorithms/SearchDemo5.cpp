#include <iostream>

using namespace std;
int num[5] = { 4, 8, 12, 16, 20 };
int key, low, high, mid, flag, index, cmps = 0;

void getData()
{
	cout << "\nEnter the key to find the element in the array: ";
	cin >> key;
}

void interpolationSearch()
{
	low = 0;
	high = 5 - 1;
	flag = -1;
	
	while (num[low] <= key && num[high] >= key)
	{
	//         0 +  ( 16 - 4 ) * ( 4 - 0 ) / ( 20 - 4 ) => ( 12 * 4 ) / 16 => 48 / 16 => 3
 		mid = low + ((key - num[low]) * (high - low)) / (num[high] - num[low]);
		cmps++;
		if (num[mid] < key)
		{
			low = mid + 1;
		}
		else if (num[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			index = mid;
			flag = 1;
			break;
		}
	}//end while
}

void display()
{ 
	if (flag == -1)
		cout << "\nGiven key " << key << " is not present in the array" << endl;
	else
	{
		cout << "\nGiven key " << key << " is position at index " << index << endl;
		cout << "\nThe number of comparison/s are " << cmps << endl;
	}
}

int main()
{
	getData();
	interpolationSearch();
	display();
	
	system("pause");
}
