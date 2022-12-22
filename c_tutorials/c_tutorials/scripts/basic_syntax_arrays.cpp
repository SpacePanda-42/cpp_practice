#include <iostream>
using namespace std;

int main() {
    int val = 7;
    int vals[3];

    vals[0] = 12;
    vals[1] = 100;
    vals[2] = 139;
    cout << vals[0] << endl;

    double numbers[4] = {1.2, 4.5, 6.6, 6.3};

    // cout << numbers[0] << endl;

    for (int i=0; i < 4; i++){
        numbers[i] = 12;
        cout << numbers[i] << endl;
    }

    int array[8] = {};
    for (int i=0; i<8; i++) {
        cout << array[i] << endl;
    }

    int arr2[] = {1, 2, 3};
    for (int i=0; i<3; i++) {
        cout << arr2[i] << endl;
    }

    string texts[] = {"apple", "banana", "banana part two"};

    for (int i=0; i<3; i++){
        cout << texts[i] << endl;
    }




    return 0;
}