#include<iostream>
using namespace std;

class student {
    string name;
    int roll_num;
    int marks[5];

public:
    void getdata() {
        cout << "\nEnter the name: ";
        getline(cin, name);
        cout << "\nEnter roll number: ";
        cin >> roll_num;
        cout << "\nEnter marks in 5 subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks in subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display_data() {
        cout << "\nName: " << name;
        cout << "\nRoll number: " << roll_num;
        cout << "\nMarks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << "\nSubject " << i + 1 << ": " << marks[i];
        }
    }
};

int main() {
    student s1;
    s1.getdata();
    s1.display_data();
    return 0;
}
