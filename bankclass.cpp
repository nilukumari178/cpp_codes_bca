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
        cout << "Account deposited is: " << d << endl;
        cout << "Balance in account is: " << bal << endl;
    }

    void withdraw(int w) {
        if (bal < w) {
            cout << "Balance in account is: " << bal << endl;
            cout << "Insufficient amount in the account:" << endl;
        } else {
            bal -= w;
            cout << "Amount withdrawn is: " << w << endl;
            cout << "Balance in account is: " << bal << endl;
        }
    }
};

int main() {
    bank c1;
    c1.set_values(101, "Rohan", 14000);
    c1.deposit(1000);
    c1.withdraw(5000);
    return 0;
}
