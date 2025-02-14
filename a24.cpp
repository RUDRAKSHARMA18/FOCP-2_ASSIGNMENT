//Write a program to calculate the factorial of a number using a do-while loop.

#include <iostream>
using namespace std;

 int main()  {
    int n;
    float fact = 1;

     cout << "Enter number: ";
      cin >> n;

     int a = 1;
     do {
        fact *= a;
        a++;
        
    } 
    while (a <= n);

    cout << "Factorial of " << n << " is " << fact << endl;
    
    return 0;
}

