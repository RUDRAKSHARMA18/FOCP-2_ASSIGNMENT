//Develop a program to check wher a year is a leap year using nested if-else statements.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
            //bar bar loop lagani hai.
    if (year % 4 == 0) { // base ha 4 division
        
        
      if (year % 100 == 0) { // bec sare 100/4 leap nahi hai

         if (year % 400 == 0) { // pahle he yah kar sakte the

         cout << year << " is leap year." << endl;}
         
          else {
                cout << year << " is not leap year." << endl; }
                }  
                
                else { cout << year << " is leap year." << endl; } //for2
                } 
          
          else //for 1
          
          {cout << year << " is not leap year." << endl;}

    return 0;
}