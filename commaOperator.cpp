#include<iostream>

using namespace std;

int main(){

    //Comma Operator has the lowest precedence

    int x = 10, y = 5;

    if(x>11,y<10){
        cout << "This line is printed even if first condition is false" << endl;
        cout << "All the expressions are evalueated but the last expression is returned" << endl;
        

        //Another Example
        int a;
        a = x, y;
        //Is evaluated as
        (a = x), y;
    }

}