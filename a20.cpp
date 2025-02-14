//Create a simple Menu Driven calculator that performs addition, subtraction, multiplication, & division based on the user's choice & repeat the menu until the user chooses to "Exit".

#include <iostream>
using namespace std;

  int main() {
       int ch;
      double n1, n2, rx;

    do {

        cout << "\n============== CALCULAATOOR ==============\n";
       cout << "Addition ke liye 1 dabae\n";
         cout << "Subtraction ke liye 2 dabae\n";
         cout << "Multiplication ke liye 3 dabae\n";
         cout << "Division ke liye 4 dabae\n";
         cout << "Exit ke liye 5 dabae\n";
         cout << "Ab batao kya karna hai : ";

        cin >> ch;


    if (ch >= 1 && ch <= 4) {

        cout << "Enter first number: ";
             cin >> n1;

        cout << "Enter second number: ";
             cin >> n2; }


         switch (ch) {

            case 1:
                rx = n1 + n2;
                cout << "Result: " << rx << endl;
                 break;

            case 2:
                rx = n1 - n2;
                cout << "Result: " << rx << endl;
                 break;

            case 3:
                rx = n1 * n2;
                cout << "Result: " << rx << endl;
                 break;

            case 4:

                if (n2 != 0)
                    rx = n1 / n2;

                else
                    cout << "Error. yeh kya kar diya ????? " << endl;

                break;

            case 5:

                cout << "Exiting calculator dobara use karna mat bhulna :) \n";

                break;

            default:
                cout << "galat button daba diya sahi se enter karo .\n";
        }

    } 
    
    while (ch != 5);

    return 0;
}