//Create a program to simulate an ATM machine using a switch statement. Include options for withdrawal, deposit, balance inquiry, and exit, with error handling for invalid input and insufficient balance.

#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; 
    int choice;
    double amount;

    do {

        cout << "\n--- ATM Menu ---" << endl;
        cout << "1. Balance Inquiry" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdrawal" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

 
        switch (choice) {
             case 1: 
                cout << "Etne paise he hai: Rs" << balance << endl;
                break;

            case 2:
                cout << "Kitna paisa khilyo ge: Rs";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Pasie me kha gaya ab total etne hai jo mai nahe du ga. ha ha ha: Rs" << balance << endl;
                } else {
                    cout << "Sahi ammount enter karo sir." << endl;
                }
                break;

            case 3: 
                cout << "Kitne paise du mai.: Rs";
                cin >> amount;
                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Paise nikal gaye hai, new balance: Rs" << balance << endl;
                    } else {
                        cout << "Entne paise he nahi hai. yeh bacha hai bas: Rs" << balance << endl;
                    }
                } else {
                    cout << "Fir galti karte. sahi se entry karo." << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM dobara aana mat bhulna." << endl;
                break;

            default:
                cout << "Kam se kam option to sahi choose kar lo.." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
