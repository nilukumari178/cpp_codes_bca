#include <iostream>
using namespace std;

int main() {
    bool isprime = true;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isprime = false;
            break;
        }
    }
    if (isprime) {
        cout << num << " is a prime number";
    } else {
        cout << num << " is not a prime number";
    }
    return 0;
}
