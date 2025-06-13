#include <iostream>
using namespace std;

int main() {
     int n;
    cout << "Enter the number: ";
    cin >> n;
    fibonacci(n);
    int i = 0, j = 1, next;

    for (int i = 0; i < n; i++) {
        cout << i << " ";
        next = i + j;
        i = j;
        j = next;
        cout<< " Fibonacci series"<<endl;
        return 0;
    }




