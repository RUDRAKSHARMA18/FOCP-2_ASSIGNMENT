//Create a program to count thie number of 1 bits in an integer input by the user.

#include <iostream>
using namespace std;

int count(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1; 
        num >>= 1; 
    }
    return count;
}

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "The number of 1 bits in " << num << " is: " << count(num) << endl;
    
    return 0;
}
