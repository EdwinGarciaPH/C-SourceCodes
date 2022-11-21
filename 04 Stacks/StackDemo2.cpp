#include <iostream>
using namespace std;
class Stack
{
	private:
		int MAX;
		int top;
		int *items;
		
	public:
		Stack (int size)
		{
			MAX = size;
			top = -1;
			items = new int[MAX];
		}

		void push(int c)
		{
			if (full())
			{
				cout << "Stack Full!" << endl;
				exit(1);
			}
			items[++top] = c;
		}
		
		int pop()
		{
			if (empty())
			{
				cout << "Stack Empty!" << endl;
				exit(1);
			}
			int temp = items[top];
			items[top] = (int) NULL;
			--top;
			return temp;
		}
		
		void display(int lim)
		{
			int i = lim;
			cout << "Stack contains ";
			for (int ctr = 0; ctr <= i; ctr++)
				cout << items[ctr] << ", " ;
			cout << endl;
		}
		
		bool empty()
		{
			return top == -1;
		}
		
		bool full()
		{
			if ((top + 1) == MAX)
				return true;
			else
				return false;
		}
};
		
int main()
{
	Stack st(5); // Stack st = new Stack(5); in Java
	int i = 0;	// 0 -> 1 -> 2 -> 3 -> 4 -> 5
	int n;		// 
	
	while (i < 5)
	{
		cout << "Enter a number: ";
		cin >> n;
		st.push(n); //add to the stack
		st.display(i);
		i++;
	}
	
	//st.push(60); //for testing if Stack is Full
	
	cout<<"Elements Deleted in Order: ";
	for (int j = 0; j < 5; j++)
		cout << st.pop() << " ";	
	cout << endl;
	
	// cout << st.pop() << " "; for testinf if Stack is Empty
	
	i = 0;
	while (i < 5)
	{
	     st.display(i);
	     i++;
	}

	system("pause");
}

