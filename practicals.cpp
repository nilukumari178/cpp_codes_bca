#include <iostream>
using namespace std;

void checkInteger(int n) {
    if (n > 0)
        cout << "The integer is positive." << endl;
    else if (n < 0)
        cout << "The integer is negative." << endl;
    else
        cout << "The integer is zero." << endl;
}

void checkCharacter(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        cout << "The character is an alphabet." << endl;
    else if (c >= '0' && c <= '9')
        cout << "The character is a number." << endl;
    else
        cout << "The character is neither alphabet nor number." << endl;
}

int main() {
    int n;
    char c;

    cin >> n;
    checkInteger(n);

    cin >> c;
    checkCharacter(c);

    return 0;
}
