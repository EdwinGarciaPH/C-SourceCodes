#include <iostream>
using namespace std;
int main()
{
    int a = 50;
    int *b;
    int **c;

    b = &a;
    cout << "value of a is " << a << endl;
    cout << "address of a is " << &a << endl;
    cout << endl;

    *b = 100;
    cout << "value of b is " << *b << endl;
    cout << "content of b is " << b << endl;
    cout << "address of b is " << &b << endl;
    cout << endl;

    c = &b;
    **c = 200;
    cout << "value of c is " << **c << endl;
    cout << "content of c is " << c << endl;
    cout << "address of c is " << &c << endl;
    cout << endl;

    a = 300;
    cout << "value of a is " << a << endl;
    cout << "value of b is " << *b << endl;
    cout << "value of c is " << **c << endl;

    cout << endl;
    system("pause");
} //end main
