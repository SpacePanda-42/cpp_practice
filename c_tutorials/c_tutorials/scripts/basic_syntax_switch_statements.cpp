#include <iostream>
using namespace std;

int main() {

    int val = 12;

    switch(val){
        case 1:
            cout << "No" << endl;
            break;
        case 2:
            cout << "Nope" << endl;
            break;
        case 3:
            cout << "nuh-uh" << endl;
            break;
        case 12:
            cout << "yup" << endl;
    }

    return 0;
}