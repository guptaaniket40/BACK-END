#include <iostream.h>
#include <conio.h>

void main() {
    char name[50];
    int age;

    clrscr();

    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    getch();

}