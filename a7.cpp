//Write a program to swap two numbers using a temporary variable and then without using a temporary variable.

#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    c = a;
    a = b;
    b = c;

    cout << "After swap: a = " << a << ", b = " << b << endl;


    cout << "Enter two new numbers : ";

    cin >> a >> b;

    a = a + b; 
    b = a - b;
    a = a - b;

    cout << "After swap : a = " << a << ", b = " << b << endl;

    return 0;
}

