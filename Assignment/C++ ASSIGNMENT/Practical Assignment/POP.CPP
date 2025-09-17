#include <iostream.h>
#include <conio.h>


int area(int length, int width) {
    return length * width;
}

void main() {
    int length, width;

    clrscr();   // clear screen

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "\nArea of Rectangle = " << area(length, width);

    getch();    
    
}