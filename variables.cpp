#include<iostream>

using namespace std;

int main(){

    //Styntax
    //TYPE varname;

    int x = 0; //Declaration and assigning value
    int y; //Only Declaration


    long l; // Long numbers
    long long ll; //Very long numbers

    float f = 3.14159; //Decimal number but low precision
    double d = 3.14159; // Also decimal number but takes more space and has high precision.
    long double ld; //Double with very high precision but spec is loosely defined. DON'T USE.
    

    bool b = true; //Boolean


    string str = "Sumedh";


    int * z = &x; //z is pointing to the positino of x
    cout << *z << endl; // Showing the value of z
    cout << z << endl; // This will show the address that z points to.


    signed int s = -10;
    unsigned int us = -10; // Will give garbage value
    cout << s << endl;
    cout << us << endl;



}