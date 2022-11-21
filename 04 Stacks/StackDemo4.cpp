#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *link;
};

Node *top;
int ctr;

void setListStack()
{
	top = NULL;
	ctr = 0;
}

void Push(int element)
{
	Node *temp = new Node();
	temp->data = element;
	temp->link = top;
	top = temp;
	ctr++;
}

int Pop()
{
	int ret;
	if (top == NULL)
	{
		cout << "Stack underflow" << endl;
	}
	else
	{
		ret = top->data;
		Node *temp = top->link;
		delete top;
		top = temp;
		ctr--;
		return ret; 
	}
}

int Top()
{
	return top->data;
}

int Size()
{
	return ctr;
}

bool isEmpty()
{
	return (top == NULL) ? true : false;
	/*
	if (top == NULL)
		return true;
	else
		return false;
	*/
}

int main()
{
	
	setListStack();
	
	if (isEmpty())
	{
		cout << "Stack is empty" << endl << endl;
	}
	// Push elements
	Push(100);
	Push(200);
	Push(300);
	Push(400);

	// Size of stack
	cout << "Size of stack = " << Size() << endl << endl;
	
	// Top element
	cout << "Top element is " << Top() << endl << endl;
	
	// Pop element
	cout << "Pop element " << Pop() << endl << endl;
	cout << "After pop of last element " << endl;
	cout << "List elements are : ";
	
	Node *dispNode;
	dispNode = top;
	while (dispNode != NULL)
	{
		cout << dispNode->data<<" ";
		dispNode = dispNode->link;
	}
	cout << endl << endl;

	system("pause");
}