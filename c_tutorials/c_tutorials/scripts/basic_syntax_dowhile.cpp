#include <iostream>
using namespace std;

int main() {

    const string password = "hello";
    string guess;

    int val = 8;
    do{
        cout << "Hello" << endl;
        val ++;
    }while(val < 10);

    do{
        cout << "enter word > " << flush;
        cin >> guess;
        if(guess != password){
            cout << "wrong" << endl;
        }
    } while(guess != password);
    cout << "correct" << endl;

    return 0;
}