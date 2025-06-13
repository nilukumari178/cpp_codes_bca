#include<iostream>
using namespace std;

class student {
    string name;
    int roll_num;
    int marks[5];
    int total_marks;
    float average_marks;

public:
    void getdata() {
        cout << "\nEnter the name: ";
        getline(cin, name);
        cout << "\nEnter roll number: ";
        cin >> roll_num;
        cin.get();
        cout << "\nEnter marks in 5 subjects:" << endl;
        total_marks = 0;
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks in subject " << i + 1 << ": ";
            cin >> marks[i];
            total_marks += marks[i];
        }
        average_marks = total_marks / 5.0;
    }
    void display_data() {
        cout << "\nName: " << name;
        cout << "\nRoll number: " << roll_num;
        cout << "\nMarks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << "\nSubject " << i + 1 << ": " << marks[i];
        }
        cout << "\nTotal Marks: " << total_marks;
        cout << "\nAverage Marks: " << average_marks;
    }
};

int main() {
    student s1;
    s1.getdata();
    s1.display_data();
    return 0;
}
