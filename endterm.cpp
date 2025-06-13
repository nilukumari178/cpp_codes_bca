#include <iostream>
using namespace std;

void checkInteger(void* ptr) {
    int value = *(int*)ptr;
    if (value > 0)
        cout << "The integer is positive." << endl;
    else if (value < 0)
        cout << "The integer is negative." << endl;
    else
        cout << "The integer is zero." << endl;
}

void checkCharacter(void* ptr) {
    char ch = *(char*)ptr;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        cout << "The character is an alphabet." << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "The character is a number." << endl;
    else
        cout << "The character is neither alphabet nor number." << endl;
}

int main() {
    int n;
    char c;
    void* ptr;

    cin >> n;
    ptr = &n;
    checkInteger(ptr);

    cin >> c;
    ptr = &c;
    checkCharacter(ptr);

    return 0;
}
