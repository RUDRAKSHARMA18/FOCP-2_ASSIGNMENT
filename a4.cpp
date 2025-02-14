//Take two floating-point number is input and display their division result with two decimal places.

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    float a,b,c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter Second number : ";
    cin >> b;

    if (b == 0) {
        cout << "Kya kar raha hai bhai, Division by zero is not allowed. :( " << endl; } 
    else {
        c = a / b;
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << c << endl;

    }

    return 0;
}

