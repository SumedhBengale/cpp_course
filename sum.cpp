#include<iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4,n5;
    cout << "Enter the 5 numbers" << endl;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << n1, n2, n3, n4, n5;

    int sum = n1+n2+n3+n4+n5;

    float avg = sum / 5.0f; //Int divided by float value will give float value.

    cout << "The sum is " << sum << endl;
    cout << "The average is " << avg << endl; 

}