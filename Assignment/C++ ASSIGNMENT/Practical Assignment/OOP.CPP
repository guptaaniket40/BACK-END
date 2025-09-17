#include <iostream.h>
#include <conio.h>

class Rectangle {
    int length, width;

public:
    void input() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    int calculateArea() {
        return length * width;
    }

    void display() {
        cout << "\nArea of Rectangle = " << calculateArea();
    }
};

int main() {
    clrscr();   

    Rectangle r;   
    r.input();
    r.display();

    getch();    
    return 0;
}