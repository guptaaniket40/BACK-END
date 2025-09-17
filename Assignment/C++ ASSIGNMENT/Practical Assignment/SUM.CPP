#include <iostream.h>
#include <conio.h>

void main() {
    int num1, num2, sum;

    clrscr();   // 

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "\nThe sum of " << num1 << " and " << num2 << " is: " << sum;

    getch();    
    
}