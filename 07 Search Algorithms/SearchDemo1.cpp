#include <iostream>

using namespace std;

int num[5] = {2,4,6,8,10};
int key;
int flag, index;

void getData()
{
	cout << "\nEnter the key to find the element in the array: ";
	cin >> key;
}

void linearSearch()
{
	flag = -1;
	for (int ctr = 0; ctr < 5; ctr++) { // ctr = 0 1 2 3 
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

int main() {
	
	getData();			// Function Call 
	linearSearch();
	display();
	
	return 0;
}