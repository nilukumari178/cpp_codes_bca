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
  cout<<"enter the name";
  getline(cin,name);
  cout<<"\nenter the acc no";
  cin>>acc_no;
  cout << "enter acc type (Saving/Current): ";
  getline(cin, acc_type);
  cout<<"\nenter the balance in account:";
  cin>>balance;
  }
   friend void displayInfo(bank& b);
};
void display_Info(Bank& b) {
    cout << "\naccount details:";
    cout << "\naccount name: " << b.acc_name;
    cout << "\naccount number: " << b.acc_no;
    cout << "\naccount type: " << b.acc_type;
    cout << "\naccount balance: " << b.bal;
     if (b.acc_type == "Saving" && b.bal > 500000) {
        cout << "\nLoan Granted";
    } else {
        cout << "\nLoan Not Granted";
    }

int main(){
    bank b1;
    b1.get_info();
    display_info(b1);
    return 0;
}

