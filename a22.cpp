// Write a program to generate the first n Fibonacci numbers using a for loop.

#include <iostream>
using namespace std;

int main() {
     int n;
cout << "Enter the number of Fibonacci numbers: ";
cin >> n;

    int a, b;
    a =  0;
    b = 1;


         for (int i = 0; i < n; i++) {
         cout << a << " ";
    int n = a + b;
    a = b;
    b = n; }

      return 0;
      
}