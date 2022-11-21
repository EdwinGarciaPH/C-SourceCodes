#include <iostream>
#include <stack>
using namespace std;

int main() {
    // create a stack of strings
    stack<string> languages;
    
    // add element to the Stack
    languages.push("C++");
    languages.push("Java");
    languages.push("Python");
    languages.push("C#");
    
    // print top element
    cout <<"Element at the Top: "<<languages.top()<<endl;
    
   	int size = languages.size();
	cout <<"\nSize of the stack: " << size;
	
	cout <<endl;
	cout << "Stack: ";
	
	// print elements of stack
	while(!languages.empty()) {
		cout << languages.top() << ", ";	//peek
		languages.pop();
	}

	size = languages.size();
	cout <<"\nSize of the stack after: " << size;

	cout << "\nIs the stack empty? ";
	
	// check if the stack is empty  
	if (languages.empty()) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	cout <<endl;
    return 0;
}