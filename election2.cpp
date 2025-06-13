#include <iostream>
using namespace std;

int main() {
    int vote;
    int candidate1 = 0, candidate2 = 0, candidate3 = 0;
    cout << "Enter votes (1 for Candidate 1, 2 for Candidate 2, 3 for Candidate 3): " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Voter " << i + 1 << " vote: ";
        cin >> vote;
        if (vote == 1) {
            candidate1++;
        } else if (vote == 2) {
            candidate2++;
        } else if (vote == 3) {
            candidate3++;
        }
        }
    }
    cout << "\nVote counts:" << endl;
    cout << "Candidate 1: " << candidate1 << " votes" << endl;
    cout << "Candidate 2: " << candidate2 << " votes" << endl;
    cout << "Candidate 3: " << candidate3 << " votes" << endl;

    if (candidate1 > candidate2 && candidate1 > candidate3) {
        cout << "The winner is Candidate 1!" << endl;
    } else if (candidate2 > candidate1 && candidate2 > candidate3) {
        cout << "The winner is Candidate 2!" << endl;
    } else if (candidate3 > candidate1 && candidate3 > candidate2) {
        cout << "The winner is Candidate 3!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
