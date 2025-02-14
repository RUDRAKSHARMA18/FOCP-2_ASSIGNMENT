//Write a program that calculates the area and perimeter of a rectangle using user-provided length and with. Use constants where necessary.

#include <iostream>
using namespace std;

int main() {
    float length, width;

    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;

    float area = length * width ;
    float perimeter = 2 * (length + width);

    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;

    return 0;
}
