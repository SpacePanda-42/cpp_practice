#include <iostream>
using namespace std;

int main() {

    string password = "hello";

    cout << "Enter password: " << flush;
    
    string input;
    cin >> input;

    cout << "'" << input << "'" << endl;
    
    if (input != password){
        cout << "wrong!" << endl;
    }


    return 0;
}