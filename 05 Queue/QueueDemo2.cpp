#include <iostream>
#include<process.h>
using namespace std;

const int MAX=10;
int cq_arr[MAX];
int front=-1;
int rear=-1;

void insert() {
	int added_item;
	if((front == 0 && rear == MAX-1) || (front == rear+1)) {
		cout<<"\nQueue is full \n";
		return;
	}

	if(front==-1){
		front = 0;
		rear = 0;
	}
	else {
		if(rear == MAX-1)
			rear = 0;
		else
			rear = rear + 1;
	}
	cout<<"\nInput the element for insertion in queue: ";
	cin>>added_item;
	cq_arr[rear] = added_item;
}

void remove(){
	if(front==-1){
		cout<<"\nQueue underflow!\n";
		return;
	}
	cout<<"\nElement deleted from queue is: "<<cq_arr[front]<<"\n";
	
	if(front==rear){
		front=-1;
		rear=-1;
	}
	else {
		if(front==MAX-1)
			front=0;
		else
			front=front+1;
	}
}

void display() {
	int front_pos = front;
	int rear_pos = rear;
	
	if (front==-1){
		cout<<"\nEmpty!\n";
		return;
	}
	cout<<"\nQueue elements: ";
	while(front_pos <= rear_pos){
		cout<<cq_arr[front_pos]<<"  ";
		front_pos++;
	}
	cout<<"\n";
}

int main(){
	int choice;
	while(1){
		cout <<"\n[1]Insert\n";
		cout <<"[2]Delete\n";
		cout <<"[3]Display\n";
		cout <<"[4]Quit\n";
		cout <<"\nEnter your choice: ";
		cin>>choice;
		switch(choice) {
			case 1: insert();break;
			case 2: remove();break;
			case 3: display(); break;
			case 4: exit(1);
			default: cout<<"\nWrong choice\n";
		}
	}
	return 0;
}