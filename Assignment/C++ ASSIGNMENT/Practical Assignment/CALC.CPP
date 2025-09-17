#include <iostream.h>
#include <conio.h>

class Calculator {
public:
    // Function for addition
    int add(int a, int b) {
        return a + b;
    }

    // Function for subtraction
    int subtract(int a, int b) {
        return a - b;
    }

    // Function for multiplication
    int multiply(int a, int b) {
        return a * b;
    }

    // Function for division
    float divide(int a, int b) {
        if(b == 0) {
            cout << "Error! Division by zero.";
            return 0;
        }
        return (float)a / b;
    }
};

void main() {
    clrscr();   

    Calculator calc;  // create object of Calculator class
    int num1, num2, choice;
    float result;

    cout << "Simple Calculator Using Class\n";
    cout << "-----------------------------\n";
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
            result = calc.add(num1, num2);
            cout << "\nResult = " << result;
            break;
        case 2:
            result = calc.subtract(num1, num2);
            cout << "\nResult = " << result;
            break;
        case 3:
            result = calc.multiply(num1, num2);
            cout << "\nResult = " << result;
            break;
        case 4:
            result = calc.divide(num1, num2);
            cout << "\nResult = " << result;
            break;
        default:
            cout << "\nInvalid Choice!";
    }

    getch();   
    
}