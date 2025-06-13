#include<iostream>
using namespace std;

int main(){
    int vote;
    int countA = 0, countB = 0, countC = 0, iv_count = 0;

    cout << "Enter number of votes: ";
    cin >> vote;

    for(int i = 0; i < vote; i++){
        cout << "\nEnter your vote (A/B/C):\n";
        cout << "Candidate A\n";
        cout << "Candidate B\n";
        cout << "Candidate C\n";
        char choice;
        cin >> choice;

        if(choice == 'A' || choice == 'a')
            countA++;
        else if(choice == 'B' || choice == 'b')
            countB++;
        else if(choice == 'C' || choice == 'c')
            countC++;
        else
            iv_count++;
    }


    cout << "Count of votes for candidate A is: " << countA << endl;
    cout << "Count of votes for candidate B is: " << countB << endl;
    cout << "Count of votes for candidate C is: " << countC << endl;
    cout << "Count of invalid votes is: " << iv_count << endl;


    if(countA > countB && countA > countC)
        cout << "Candidate A is the winner!" << endl;
    else if(countB > countC && countB > countA)
        cout << "Candidate B is the winner!" << endl;
    else if(countC > countB && countC > countA)
        cout << "Candidate C is the winner!" << endl;
    else
        cout << "It's a tie!" << endl;

    return 0;
}
