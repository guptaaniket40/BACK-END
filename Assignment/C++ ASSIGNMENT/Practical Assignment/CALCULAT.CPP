#include <iostream.h>
#include <conio.h>

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if(b == 0) {
        cout << "Error! Division by zero.";
        return 0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2, choice;
    float result;

    clrscr();   // clear screen

    cout << "Simple Calculator\n";
    cout << "-----------------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch(choice) {
        case 1:
            result = add(num1, num2);
            cout << "\nResult = " << result;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "\nResult = " << result;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "\nResult = " << result;
            break;
        case 4:
            result = divide(num1, num2);
            cout << "\nResult = " << result;
            break;
        default:
            cout << "\nInvalid Choice!";
    }

    getch();   
    return 0;
}