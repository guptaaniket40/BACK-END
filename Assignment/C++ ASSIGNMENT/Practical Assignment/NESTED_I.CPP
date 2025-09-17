#include <iostream.h>
#include <conio.h>

void main() {
    int rows, i, j;

    clrscr();  

    cout << "Enter number of rows for the triangle: ";
    cin >> rows;

    cout << "\nRight-angled triangle pattern:\n\n";

    // Outer loop for rows
    for(i = 1; i <= rows; i++) {
        // Inner loop for stars in each row
        for(j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";  
    }

    getch();   
    
}