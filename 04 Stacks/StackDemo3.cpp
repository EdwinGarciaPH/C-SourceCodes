#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int data[MAX_SIZE];
int top;

void setTopValue()
{
	top = -1;
}

void Push(int element)
{
	if (top >= MAX_SIZE-1)
	{
		cout << "Stack overflow" << endl;
		exit(1);
	}
	data[++top] = element;
}

int Pop()
{
	if (top == -1)
	{
		cout << "Stack underflow" << endl;
		exit(1);
	}
	else
	{
		int temp = data[top];
		data[top] = (int) NULL;
		top--;
		return temp;
	}
}	

int Top()
{
	return data[top];
}

int Size()
{
	return top + 1;
}

bool isEmpty()
{
//	return (top == -1) ? true : false;  // ternary operator
	if (top == -1)
		return true;
	else
		return false;
}

int main()
{
	// declaration of variables
	setTopValue();
	
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
	}
	// Push elements
	Push(100);
	Push(200);
	Push(300);
	Push(400);
	Push(500);
	
	// Size of stack
	cout << "Size of stack = " << Size() << endl << endl;
	
	// Top element
	cout << "Top element is " << Top() << endl <<endl;
	

	// Pop element
	cout << "Last inputted Element will be pop" << endl;
	cout << "The value of last element is " << Pop() << endl
	<< endl;
	
	// Pop element
	cout << "Another Element is pop " << endl;
	cout << "The value of last element is " << Pop() << endl
	<< endl;
	
	cout << "Elements of stack after data have been pop!"
	<< endl;
	int i = 0;
	while (i < Size()) //print elements of data
	{
		cout << data[i] << ", ";
		i++;
	}
	
	cout << endl;
	system("pause");
} //end main