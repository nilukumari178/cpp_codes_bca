#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int emp_id;
    int salary;

    void calculate_salary() {
        salary = salary +(salary * 0.10);
        cout << "Salary after 10% bonus: " << salary << endl;
    }

public:
    void get_data() {
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cin.ignore();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display_data() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
        calculate_salary();
    }
};

int main() {
    Employee emp;
    emp.get_data();
    emp.display_data();

    return 0;
}
