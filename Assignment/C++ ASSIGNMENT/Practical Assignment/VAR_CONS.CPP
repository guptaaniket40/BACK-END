#include <iostream.h>
#include <conio.h>

 void main() {
    
    const float PI = 3.1416;

    
    int age = 20;
    float radius = 5.5;
    char grade = 'A';
    double salary = 45000.75;
    long population = 1500000;

    clrscr();   

    
    float area = PI * radius * radius;   // using constant and variable
    age = age + 5;   

    // Display results
    cout << "Demonstration of Variables and Constants\n";
    cout << "---------------------------------------\n";
    cout << "Constant PI = " << PI << "\n";
    cout << "Age after 5 years = " << age << "\n";
    cout << "Radius = " << radius << "\n";
    cout << "Area of Circle = " << area << "\n";
    cout << "Grade = " << grade << "\n";
    cout << "Salary = " << salary << "\n";
    cout << "Population = " << population << "\n";

    getch();   
    
}