#include<iostream>
using namespace std;
#define SIZE 10
class dequeue {
   int a[20],f,r;
   public:
      dequeue();
      void insert_at_beg(int);
      void insert_at_end(int);
      void delete_fr_front();
      void delete_fr_rear();
      void show();
};

dequeue::dequeue() {
   f=-1;
   r=-1;
}

void dequeue::insert_at_end(int i) {
   if(r>=SIZE-1) {
      cout<<"Insertion Not Possible - Dequeue Overflow!";
   } else {
      if(f==-1) {
         f++;
         r++;
      } else {
         r=r+1;
      }
      a[r]=i;
      cout<<"Inserted Element is: "<<a[r];
   }
}

void dequeue::insert_at_beg(int i) {
   if(f==-1) {
      f=0;
      a[++r]=i;
      cout<<"Inserted Element is: "<<i;
   } else if(f!=0) {
      a[--f]=i;
      cout<<"Inserted Element is: "<<i;
   } else {
      cout<<"Insertion Not Possible - Dequeue Overflow!";
   }
}

void dequeue::delete_fr_front() {
   if(f==-1) {
      cout<<"Deletion Not Possible - Dequeue Empty!";
      return;
   }
   else {
      cout<<"the deleted element is:"<<a[f];
      if(f==r) {
         f=r=-1;
         return;
      } else
         f=f+1;
      }
   }
   
void dequeue::delete_fr_rear() {
	if(f==-1) {
		cout<<"Deletion Not Possible - Dequeue Empty!";
		return;
	}
	else {
		cout<<"Deleted Element is: "<<a[r];
		if(f==r) {
			f=r=-1;
		} else
			r=r-1;
	}
}

void dequeue::show() {
      if(f==-1) {
         cout<<"Dequeue is Empty!";
      } else {
         for(int i=f;i<=r;i++) {
            cout<<a[i]<<" ";
         }
      }
}
   
int main() {
	int c,i;
	dequeue d;
	do
	{
		cout<<"\n[1] Insert at Beginning"<<endl;
		cout<<"[2] Insert at End"<<endl;
		cout<<"[3] Show"<<endl;
		cout<<"[4] Deletion from Front"<<endl;
		cout<<"[5] Deletion from Rear"<<endl;
		cout<<"[6] Exit"<<endl;
		cout<<"Enter your Choice: ";
		cin>>c;
		switch(c) {
			case 1:
			cout<<"Enter Element to be Inserted: ";
			cin>>i;
			d.insert_at_beg(i);
			break;
			
			case 2:
			cout<<"Enter Element to be Inserted: ";
			cin>>i;
			d.insert_at_end(i);
			break;
			
			case 3:
			d.show();
			break;
			
			case 4:
			d.delete_fr_front();
			break;
			
			case 5:
			d.delete_fr_rear();
			break;
			
			case 6:
			exit(1);
			break;
			
			default:
			cout<<"Invalid Choice!";
			break;
		}
	} while(c!=7);
}