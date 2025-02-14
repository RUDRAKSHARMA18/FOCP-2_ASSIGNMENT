//Write a program that calculates the grade of a student based on their marks using if-else/switch statements.

#include <iostream>
#include <string>
using namespace std;

int main() {

    int m;
    cout << "Enter the marks, kitne aye finals me): ";
     cin >> m;

      string g;

int s = m / 10; //start ke digit le ke 

     switch (s) {


    
        case 10:
             g = "A++, Pure aa gaye.. ai use kiya tha kya???";
    break;

        case 9:
             g = "A+, top kar liya";
    break;

        case 8:
            g = "A, badiya aa gaye kya chiye aur";
    break;

        case 7:
        g = "B+, sahi aye hai aur pard ke kya karna";
            
    break;
        case 6:
           
            g = "B, thek hai bas";
      break;

        case 5:

            g = "C, todi aur mehnat karne pade ge";
      break;

        case 4:

            g = "D, kya hai yeh. parda nahi tha kya";
      break;

        default:

            g = "F, fail hai kya kar raha hai ab dobara de paper.";
            
            break;


}


    cout << "The grade for marks " << m << " is: " << g << endl;
    
        return 0; }