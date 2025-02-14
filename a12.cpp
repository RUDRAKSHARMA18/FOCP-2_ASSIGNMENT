//Write a program that solves a quadratic equation (ax*2 + bx + © = 0) using conditional statements to handle all possible cases (real and distinct roots, real and equal roots, complex roots).

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            int root = -c / b;
            cout << "This is a linear equation. kam khatam, The root is: " << root << endl;
        }
     else {
        if (c == 0) {
            cout << "Infinite hai es ke :#$%! ." << endl;
        } else {
     cout << "koi solution nahi hai. ha ha ha.." << endl; }
        
        
        
        }
    } else {



        int discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            // Real and distinct roots
            int root1 = (-b + sqrt(discriminant)) / (2 * a);
            int root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "The roots are real and distinct. humm...: " << root1 << " and " << root2 << endl;


        } 
        else if (discriminant == 0) {
        
            int root = -b / (2 * a);
            cout << "The roots are real and equal. yeeee: " << root << endl;
        } else {
            // Complex roots
            int realPart = -b / (2 * a);
            int imaginaryPart = sqrt(-discriminant) / (2 * a);

            cout << "The roots are complex. ohhhhhhhh.: " << realPart << " + " << imaginaryPart << "i and "
                 << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }

    return 0;
}

