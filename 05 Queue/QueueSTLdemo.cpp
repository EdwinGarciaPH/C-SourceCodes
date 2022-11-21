#include <iostream>       // std::cout
#include <queue>          // std::queue
using namespace std;

int main () 
{
	queue<int> my_queue;
	
	cout<<my_queue.empty()<<endl;	// 1 = TRUE
	
	my_queue.push(100);
	my_queue.push(200);
	my_queue.push(300);
	my_queue.push(400);
	my_queue.push(500);
	
	cout<<my_queue.front()<<endl; 	// 100
	cout<<my_queue.back()<<endl;	// 500
	
	my_queue.pop();
	my_queue.pop();
	my_queue.push(600);
	my_queue.push(700);
	cout<<my_queue.front()<<endl;	// 300
	cout<<my_queue.back()<<endl;	// 700
	
	cout<<my_queue.size()<<endl;	// 5
	cout<<my_queue.empty()<<endl;	// 0 = FALSE
}