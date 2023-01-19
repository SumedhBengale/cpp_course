#include<iostream>

using namespace std;

int main(){
    //Arithmetic Operators
    int x = 10;
    int y = 5;

    cout << "Sum is " << x+y << endl;
    cout << "Subtraction is " << x-y << endl;
    cout << "Multiplication is " << x*y << endl;
    cout << "Division is " << x/y << endl;
    cout << "Remainder of Division is " << x%y << endl;
    //C++ does not have an exponent operator, but the <cmath> library has a pow() function

    //Logical Operators
    bool a = true;
    bool b = true;
    bool c = false;

/*
&& means LOGICAL AND
|| means LOGICAL OR
! means NEGATION
0 means FALSE and 1 means TRUE
*/
    cout << "TRUE AND TRUE is " << (a && b) << endl;
    cout << "TRUE AND FALSE is " << (a && c) << endl;
    cout << "TRUE OR TRUE is " << (a || b) << endl;
    cout << "TRUE OR FALSE is " << (a || c) << endl;

    cout << "NEGATION OF TRUE is " << (!true) << endl;
}