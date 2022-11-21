#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int N = 0;
	int Guess=0;
	int Secret;
	
	srand(static_cast<unsigned int>(time(0)));
	Secret = 1 + rand() % 100;
		
	do {
		
		cout<<"Enter your Guess? ";
		cin>> Guess;
		if (Guess > Secret) {
			cout<<"Your guess is Too High!"<<endl;
		} else if (Guess < Secret) {
			cout<<"Your guess is Too Low!"<<endl;
		} else {
			cout<<"CONGRATULATIONS! Your Guess is Right!"<<endl;
		}
		
	} while (Guess != Secret);
	
}