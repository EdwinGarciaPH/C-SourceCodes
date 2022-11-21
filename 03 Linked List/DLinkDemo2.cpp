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
    };                  //end struct

    Student *head;
    head = NULL;

    string inpName = "";
    double inpGpa, inpCourseHrs;
    Student *newStud;
    Student *nextPtr;
    Student *prevPtr;

    //add the first node
    int N;
    cout<<"How many nodes to add? ";
    cin>>N;

    for (int ctr = 1; ctr <= N; ctr++)
    {
        cout << "Enter Name " << ctr << ": ";
        cin >> inpName;
        cout << "Enter GPA " << ctr << ": ";
        cin >> inpGpa;
        cout << "Enter Course Hours " << ctr <<": ";
        cin >> inpCourseHrs;

        if (head == NULL)
        {
            newStud = new Student;
            newStud->name = inpName;
            newStud->gpa = inpGpa;
            newStud->corsHrs = inpCourseHrs;
            newStud->prev = NULL;
            newStud->next = NULL;

            head = newStud;
            prevPtr = head;
        }
        else
        {
            // add next node with reference to first node
            nextPtr = new Student;
            nextPtr->name = inpName;
            nextPtr->gpa = inpGpa;
            nextPtr->corsHrs = inpCourseHrs;
            nextPtr->prev = prevPtr;
            nextPtr->next = NULL;
            prevPtr->next = nextPtr;
            prevPtr = nextPtr;
        }
    } // end of for loop

    //Display contents of linked list
    Student *dispPtr;
    dispPtr = head;

    if (dispPtr == NULL)
        cout << "no node to display" << endl;
    else
    {
        while (dispPtr != NULL)
        {
        cout << "Data stored is " << endl;
        cout << "Name : " << dispPtr->name << endl;
        cout << "Age  : " << dispPtr->gpa << endl;
        cout << "Hours: " << dispPtr->corsHrs << endl;
        cout << " at " << dispPtr <<endl << endl;
        dispPtr = dispPtr->next;
        }
    }



    system("pause");
}//end main
