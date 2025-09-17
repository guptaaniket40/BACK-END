#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();   // clear screen

    // ---------- Implicit Conversion ----------
    int a = 10;
    float b = 3.5;
    float result1 = a + b;   // int automatically converted to float

    cout << "Implicit Conversion Example:\n";
    cout << "a (int) = " << a << "\n";
    cout << "b (float) = " << b << "\n";
    cout << "Result (a + b) = " << result1 << "\n\n";

    // ---------- Explicit Conversion ----------
    double x = 10.75;
    int y = (int)x;   // explicitly cast double to int

    cout << "Explicit Conversion Example:\n";
    cout << "x (double) = " << x << "\n";
    cout << "y (int) after casting = " << y << "\n";

    getch();   
    return 0;
}