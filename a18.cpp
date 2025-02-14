//Develop a program that performs a circular left and right shift of bits on a given integer and displays the results.

#include<iostream>
using namespace std;


int main() {
    int n, s;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter shif: ";
    cin >> s;

int ls = (n << s) | (n >> (32 - s));  
int rs = (n >> s) | (n << (32 - s)); 

    cout << "After ls: " << ls << endl;
    cout << "After rs: " << rs << endl;

    return 0;
}