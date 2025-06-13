#include <iostream>
using namespace std;

int isPrime(int n) {
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            cout << n << " is not a prime number." << endl;
            return 0;
        }
    }
    cout << n << " is a prime number." << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    isPrime(number);

    return 0;
}
