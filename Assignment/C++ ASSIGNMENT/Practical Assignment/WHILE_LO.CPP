#include <iostream.h>
#include <conio.h>

void main() {
    int secretNumber = 42;   
    int guess;

    clrscr();   

    cout << "Guess the number between 1 and 100!\n";

    
    while (1) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "🎉 Congratulations! You guessed the correct number!";
            break;   // exit loop
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again.";
        }
        else {
            cout << "Too low! Try again.";
        }
    }

    getch();   
    
}