#include<iostream.h>
#include <string.h>

class Lecture {
private:
    char lecturerName[50];
    char subjectName[50];
    char courseName[50];
    int numberOfLectures;

public:

    Lecture() {
	strcpy(lecturerName, "Not Assigned");
	strcpy(subjectName, "Not Assigned");
	strcpy(courseName, "Not Assigned");
	numberOfLectures = 0;
    }


    Lecture(const char* lName, const char* sName, const char* cName, int nLectures) {
	strcpy(lecturerName, lName);
	strcpy(subjectName, sName);
	strcpy(courseName, cName);
	numberOfLectures = nLectures;
    }


    void setLectureDetails(const char* lName, const char* sName, const char* cName, int nLectures) {
	strcpy(lecturerName, lName);
	strcpy(subjectName, sName);
	strcpy(courseName, cName);
	numberOfLectures = nLectures;
    }


    void displayLectureDetails() {
	cout << "\n------------------------------------------";
	cout << "\n Lecturer Name      : " << lecturerName;
	cout << "\n Subject Name       : " << subjectName;
	cout << "\n Course Name        : " << courseName;
	cout << "\n Number of Lectures : " << numberOfLectures;
	cout << "\n------------------------------------------\n";
    }
};


int main() {
    int totalLectures = 5;
    Lecture lectures[5];

    cout << "==========================================\n";
    cout << "       Lecture Management System\n";
    cout << "==========================================\n";

    // Input lecture details
    for (int i = 0; i < totalLectures; i++) {
	char lName[50], sName[50], cName[50];
	int nLectures;

	cout << "\nEnter details for Lecturer " << (i + 1) << ":\n";
	cout << " Enter Lecturer Name      : ";
	cin >> ws; // Clear buffer
	cin.getline(lName, 50);

	cout << " Enter Subject Name       : ";
	cin.getline(sName, 50);

	cout << " Enter Course Name        : ";
	cin.getline(cName, 50);

	cout << " Enter Number of Lectures : ";
	cin >> nLectures;

	// Store details using setter
	lectures[i].setLectureDetails(lName, sName, cName, nLectures);
    }

    // Display all lecture details
    cout << "\n\n********** Lecture Details **********\n";
    for (int i=0; i < totalLectures; i++)
     {
	lectures[i].displayLectureDetails();
    }

    cout << "\nThank you for using Lecture Management System!\n";

    return 0;
}
