#include<iostream>

using namespace std;

int main(){

    //Don't overuse auto, it can introduce confusion.
    //These examples should not be used.
    auto x = 10.5;
    auto y = 10;
    //For simple declarations use the data type itself.
    int z = 15;
    

    int var1 = 10;
    int var2(20);
    int var3{20}; //C++11 recommended


}