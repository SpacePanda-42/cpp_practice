#include <iostream>
using namespace std;

int main() {
    cout << "Guess number" << endl;
    int guess;
    cin >> guess;

    if(guess == 10){
        cout << "Correct" << endl;
    } else if (guess == 12){
        cout << "Close enough" << endl;
    } else {
        cout << "Incorrect. Choose punishment" << endl;
        cout << "1. \t Death" << endl;
        cout << "2. \t Not Death (weakling)" << endl;
    }


    return 0;

}