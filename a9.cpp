//Create a program that takes three inputs: a character, an integer, and a floating-point number. Display them in a formatted table.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char c;
    int i;
    float f;

    cout << "Enter a character: ";
    cin >> c;
    cout << "Enter an integer: ";
    cin >> i;
    cout << "Enter a float: ";
    cin >> f;


    cout << "\nFormatted Output:\n";
    cout << "-----------------------------------------------" << endl;
    cout << left << setw(20) << "Character" << setw(20) << "Integer" << setw(20) << "Float" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << left << setw(20) << c << setw(20) << i << setw(20) << fixed << setprecision(2) << f << endl;
    cout << "-----------------------------------------------" << endl;

    return 0;
}
