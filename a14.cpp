//Develop a program that checks if a triangle is valid based on the lengths of its sides and determines its type (equilateral, isosceles, or scalene) using nested if-else statements.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

   if (a + b > c && a + c > b && b + c > a) {

        cout << "Nice triangle is valid!!" << endl;

        if (a == b && b == c) {

            cout << "The triangle is equilateral." << endl;
        } else if (a == b || b == c || a == c) {
    
            cout << "The triangle is isosceles." << endl;
        } else {

            cout << "The triangle is scalene." << endl;
        }
    } else {
  
        cout << "Kaha se laye yeh value triangle he galat hai......" << endl;
    }

    return 0;
}
