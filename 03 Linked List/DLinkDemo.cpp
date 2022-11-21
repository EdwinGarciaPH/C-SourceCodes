#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct Student
    {
        string name = "";
        double gpa;
        double corsHrs;
        Student *prev;  //pointer to previous student
        Student *next;  //pointer to next student
    };  //end struct

    Student *head;
    head = NULL;

    Student *newStudent;    // newStud
    Student *nextPtr;       // nextPtr
    Student *prevPtr;       // prevPtr

    //add the first node
    newStudent = new Student;
    newStudent->name = "Edwin";
    newStudent->gpa = 2.0;
    newStudent->corsHrs = 10;
    newStudent->prev = NULL;
    newStudent->next = NULL;

    if (head == NULL)
    {
        head = newStudent;
        prevPtr = head;
    }

    //add next node with reference to first node
    nextPtr = new Student;
    nextPtr->name = "Luisa";
    nextPtr->gpa = 3.0;
    nextPtr->corsHrs = 16;
    nextPtr->prev = prevPtr;
    nextPtr->next = NULL;
    prevPtr->next = nextPtr;

    //Display contents of linked list
    Student *dispPtr;
    dispPtr = head;

    if (dispPtr == NULL)
        cout << "No node to display" << endl;
    else
    {
        while (dispPtr != NULL)
        {
            cout << "Data stored is " << endl;
            cout << "Name  : " << dispPtr->name << endl;
            cout << "Age   : " << dispPtr->gpa << endl;
            cout << "Hours : " << dispPtr->corsHrs << endl;
            cout << " at " << dispPtr <<endl << endl;
            dispPtr = dispPtr->next;
        }
    }
    system("pause");
}//end main
