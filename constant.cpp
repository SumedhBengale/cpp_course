#include<iostream>
#define pi 3.14  //Can define preprocessor directives here

using namespace std;

int main(){
    const int x = 10; // Can also declare constant value here. This is only scoped in the function that encloses it.

    cout << "The value of PI is " << pi << endl;
    cout << "The value of const x is " << x << endl;
}