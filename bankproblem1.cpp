#include<iostream>
using namespace std;

class bank{
  private:
    string name;
    int acc_no;
    string acc_type;
    int balance;

  public:
    void get_info()
    {
        cout << "Enter the name: ";
        getline(cin, name);
        cout << "Enter the account number: ";
        cin >> acc_no;
        cin.ignore();  // Clears the buffer to avoid getline issue
        cout << "Enter account type (Saving/Current): ";
        getline(cin, acc_type);
        cout << "Enter the balance in account: ";
        cin >> balance;
    }

    friend void displayInfo(bank& b);
};

void displayInfo(bank& b) {
    cout << "\nAccount details:";
    cout << "\nAccount name: " << b.name;
    cout << "\nAccount number: " << b.acc_no;
    cout << "\nAccount type: " << b.acc_type;
    cout << "\nAccount balance: " << b.balance;

    if (b.acc_type == "Saving" && b.balance > 500000) {
        cout << "\nLoan Granted";
    } else {
        cout << "\nLoan Not Granted";
    }
}

int main() {
    bank b1;
    b1.get_info();
    displayInfo(b1);  // Corrected function call
    return 0;
}
