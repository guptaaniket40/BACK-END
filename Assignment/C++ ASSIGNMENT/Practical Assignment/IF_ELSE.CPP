#include <iostream.h>
#include <conio.h>

void main() {
    int marks;

    clrscr();   

    cout << "Enter student marks (0-100): ";
    cin >> marks;

    if(marks >= 90) {
        cout << "Grade: A";
    }
    else if(marks >= 75) {
        cout << "Grade: B";
    }
    else if(marks >= 50) {
        cout << "Grade: C";
    }
    else if(marks >= 35) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: Fail";
    }

    getch();   
    
}