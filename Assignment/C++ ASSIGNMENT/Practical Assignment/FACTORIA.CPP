#include <iostream.h>
#include <conio.h>


long factorial(int n) {
    if(n <= 1)
        return 1;
    else
        return n * factorial(n - 1);  
}

void main() {
    int num;
    long result;

    clrscr();  // clear screen

    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    if(num < 0) {
        cout << "Factorial of a negative number is not defined!";
    } else {
        result = factorial(num);
        cout << "Factorial of " << num << " = " << result;
    }

    getch();  
    
}