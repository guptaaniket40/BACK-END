#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
class Person {
protected:
    char name[50];
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        gets(name);  // read string including spaces
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // to ignore newline left in buffer
    }

    void displayPerson() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNumber;

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << "\n";
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    char subject[50];

public:
    void inputTeacher() {
        inputPerson();
        cout << "Enter subject taught: ";
        gets(subject);
    }

    void displayTeacher() {
        displayPerson();
        cout << "Subject: " << subject << "\n";
    }
};

void main() {
    clrscr();  // clear screen

    Student s;
    Teacher t;

    cout << "Enter Student Details:\n";
    s.inputStudent();
    cout << "\nEnter Teacher Details:\n";
    t.inputTeacher();

    cout << "\n--- Student Details ---\n";
    s.displayStudent();

    cout << "\n--- Teacher Details ---\n";
    t.displayTeacher();

    getch();  
    
}