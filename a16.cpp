//Write a program that determines whether two integers are opposites in sign without using conditional statements (hint: use bitwise XOR).

#include<iostream>
using namespace std;


bool opps(int a, int b) {
          return (a ^ b) < 0; }



int main() {
     int n1, n2;
    
cout << "Enter two numbers: ";
cin >> n1 >> n2;
      if (opps(n1, n2)) {
         cout << "Numbers have opposite signs.\n"; } 
    
      else {cout << "Numbers have the same sign.\n";  }

    return 0;
}


