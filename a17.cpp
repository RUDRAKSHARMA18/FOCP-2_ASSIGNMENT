//17,Create a program to perform division without using the / operator, implementing both integer and floating-point division manually

#include<iostream>
#include <iomanip>
using namespace std;


double Div(double dend, double dsor) {

    if (dsor == 0) {
        cout << "Error noooooo zero hai!!" << endl;
         return 0; }

      double qu = 0;

    while (dend >= dsor) {
        dend -= dsor;
        qu++; }      //ques bina decimal point........

   double factor = 0.1;  //first place decimal ke liye
    for (int i = 0; i < 2; i++) { //2 decimal place ke liye
        dend *= 10;
        int t = 0;
        while (dend >= dsor)   {  //int devi ke jaisa haiiii.
            dend -= dsor;
            t++; }

        qu += t * factor; //decimal with inti.
        factor /= 10;   } // next decimal pe jane ke liye.

          return qu;  //ques decimal point ke sath........


}


int main() {

double n1, n2;

    cout << "Enter two numbers: "; //kyu?
    cin >> n1 >> n2;

cout << fixed << setprecision(2);
cout << "Result: " << Div(n1, n2) << endl; //calculator use kar lo

    return 0;

    
}


