#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    cout << "Hello World" << endl; // endl flushes the input buffer.
    printf("Hello World with printf and newline character \n"); //New line character does not flush the whole input buffer so is somewhat faster
    std::cout << "Cout with std::" << std::endl;

}