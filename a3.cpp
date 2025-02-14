//Ask the user to input two numbers and a mathematical operator (+, -,*, /) and display the result of the operation. Eg 3 4* output 12 (Hint: use switch case)

#include<iostream>
using namespace std;

int a, b;
char c;
int main() {

    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter opeartion (+,-,*,/)";
    cin >> c;

switch(c) {
    
    case '+':
        cout << a << c << b << " = " << a+b << endl;
        break;
    case '-':
        cout << a << c << b << " = " << a-b << endl;
        break;
    case '*':
        cout << a << c << b << " = " << a*b << endl;
        break;
    case '/':
        cout << a << c << b << " = " << a/b << endl;
        break;
}


    return 0;
}
