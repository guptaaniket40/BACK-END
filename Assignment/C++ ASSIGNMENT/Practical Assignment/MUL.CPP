#include <iostream.h>
#include <conio.h>

void main() {
    int num, i;

    clrscr();   

    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    cout << "\nMultiplication Table of " << num << ":\n";

    for(i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    getch();   
    
}