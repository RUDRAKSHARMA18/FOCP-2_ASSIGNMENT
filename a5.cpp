//Write a program that calculates the compound interest for a given principal amount, rate of interest, and time period using constants and user input for variables.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float p, r, t, amount, ci;
    

    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest (%): ";
    cin >> r;
    cout << "Enter time (years): ";
    cin >> t;


    amount = p * pow((1 + r / 100), t);
    ci = amount - p; 

    cout << "Compound Interest: " << ci << endl;
    cout << "Total Amount after " << t << " years: " << amount << endl;

    return 0;
}



















