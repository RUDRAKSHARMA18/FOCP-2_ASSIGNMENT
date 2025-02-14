// Create a program that determines whether a given number is prime using a while loop.

#include <iostream>
using namespace std;


int main() {
    int n, a = 2;
    bool pr = true;

    cout << "Enter number jo check karna hai: ";
    
    cin >> n;

    if (n <= 1) {
        pr = false; } 
    
    else {
        while (a < n) {
            if (n % a == 0) {
                pr = false;
                break; }
            a++; }
}

    if (pr==true)
        cout << n << " prime hai ." << endl;
    else
        cout << n << " prime nahii hai" << endl;

    return 0;
}