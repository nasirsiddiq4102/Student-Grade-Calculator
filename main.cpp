// CUSIT ID: 16068
// Name: Nasir Siddiq
// Section: AA

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    float marks;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter marks out of 100: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Enter a value from 0 to 100." << endl;
        return 0;
    }

    cout << "\nStudent Result" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;

    if (marks >= 50)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    return 0;
}