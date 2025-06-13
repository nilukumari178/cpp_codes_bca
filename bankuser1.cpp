#include<iostream>
using namespace std;

class bank {
    int account_no;
    string name;
    float bal;

public:
    void set_values(int a, string n, float b) {
        account_no = a;
        name = n;
        bal = b;
    }

    void deposit(int d) {
        bal += d;
        cout << "Amount deposited: " << d << endl;
        cout << "Balance in account is: " << bal << endl;
    }

    void withdraw(int w) {
        if (bal < w) {
            cout << "Balance in account is: " << bal << endl;
            cout << "Insufficient funds for withdrawal." << endl;
        } else {
            bal -= w;
            cout << "Amount withdrawn: " << w << endl;
            cout << "Balance in account is: " << bal << endl;
        }
    }

    void show_balance() {
        cout << "Current balance in account: " << bal << endl;
    }
};

int main() {
    bank c1;

    int acc_no = 101;
    string acc_name = "Rohan Sharma";
    float balance = 14000;
    c1.set_values(acc_no, acc_name, balance);

    int choice, amount;

    do {
        cout << "\n----- Bank Menu -----\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                c1.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                c1.withdraw(amount);
                break;

            case 3:
                c1.show_balance();
                break;

            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
