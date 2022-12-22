#include <iostream>
using namespace std;

int main() {

    int arr[2][3] = {{1,2,3}, {4,5,6}};

    // cout << (sizeof(arr)/sizeof(int)) / (sizeof(arr[0])/sizeof(int)) << endl;
    // int has 4 bits. size of arr is 24 since it has 6 ints. size of each row is 12.
    int nCols = sizeof(arr[0])/sizeof(int);
    int nRows = sizeof(arr)/sizeof(arr[0]);


    for(unsigned int i = 0; i < nRows; i++){
        for(unsigned int j = 0; j < nCols; j++){
            cout << arr[i][j] << endl;
        }
    }

    // string has 24 bits
    string animals[][3] = {
        {"dog", "wolf", "fox"},
        {"owl", "panda", "sheep"}
    };

    nCols = sizeof(animals[0])/sizeof(string);
    nRows = sizeof(animals)/sizeof(animals[0]);
    cout << nRows << " " << nCols << endl;

    for (unsigned int i = 0; i < nRows; i++){
        for (unsigned int j = 0; j < nCols; j++){
            cout << animals[i][j] << endl;
        }
    }



    return 0;
}