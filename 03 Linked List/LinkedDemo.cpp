#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct Student
    {
        string name;
        double gpa;
        double corsHrs;
        Student *next;
    };

    Student *head;
    head = NULL;

    Student *newStud;
    newStud = new Student;
    newStud->name = "Edwin";
    newStud->gpa = 3.5;
    newStud->corsHrs = 18.0;
    newStud->next = NULL;
    head = newStud;

    newStud = new Student;
    newStud->name = "Luisa";
    newStud->gpa = 3.0;
    newStud->corsHrs = 15.0;
    newStud->next = NULL;
    head->next = newStud;

    Student *dispPtr;
    dispPtr = head;
    cout << head <<endl;

    while (dispPtr != NULL)
    {
        cout << dispPtr->name << endl;
        cout << dispPtr->gpa << endl;
        cout << dispPtr->corsHrs <<endl;
        cout << dispPtr<<endl;
        dispPtr = dispPtr->next;
        cout << endl;
    }//end while

    cin.get();

}
