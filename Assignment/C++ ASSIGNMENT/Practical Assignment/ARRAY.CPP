#include <iostream.h>
#include <conio.h>

void main() {
    int n, i, sum = 0;
    float average;

    clrscr();   

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[50];   

    // Input array elements
    for(i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    cout << "\nSum of array elements = " << sum;
    cout << "\nAverage of array elements = " << average;

    getch();   
    
}