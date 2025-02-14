//Write a program that takes the user's full name and age as input and displays a greeting with the name and the number of days they have lived.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;


    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    int days = age * 365;

    cout << "Hello, " << name << "! Etne din jee liya!" << days << " days." << endl;

    return 0;
}
