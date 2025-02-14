//Develop a program that takes two integers as input and determines if the first is a multiple of the second using relational and logical operators.

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    
    cout << "Enter the first num: ";
    cin >> n1;
    cout << "Enter the second num: ";
    cin >> n2;

    if (n2 != 0 && n1 % n2 == 0) {
        cout << n1 << " is a multiple of " << n2 << "." << endl;
    } else {
        cout << n1 << " is not a multiple of " << n2 << "." << endl;
    }
    
    return 0;
}
