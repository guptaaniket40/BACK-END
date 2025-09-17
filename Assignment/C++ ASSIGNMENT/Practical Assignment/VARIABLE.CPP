#include <iostream.h>
#include <conio.h>


int globalVar = 100;


void showLocal() {
    int localVar = 50; 
    cout << "\nInside showLocal():\n";
    cout << "Local variable = " << localVar << "\n";
    cout << "Global variable = " << globalVar << "\n";
}


void modifyGlobal() {
    globalVar = 200;  // modifying global variable
    cout << "\nInside modifyGlobal():\n";
    cout << "Global variable modified to " << globalVar << "\n";
}

void main() {
    clrscr();

    cout << "Demonstrating Local and Global Variables in C++\n";

    showLocal();

     

    cout << "\nGlobal variable in main before modification = " << globalVar;

    modifyGlobal();

    cout << "\nGlobal variable in main after modification = " << globalVar;

    getch();
    
}