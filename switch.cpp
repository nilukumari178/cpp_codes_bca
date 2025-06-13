#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter the marks: ";
    cin >> marks;
    }
    char grade;
    switch (marks / 10) {
        case 1:
            grade = 'A';
            break;
        case 2:
            grade = 'B';
            break;
        case 3:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    cout << "Your grade is: " << grade << endl;

    return 0;
}
