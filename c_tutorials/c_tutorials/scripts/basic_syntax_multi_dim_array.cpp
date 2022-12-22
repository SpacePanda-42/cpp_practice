#include <iostream>
using namespace std;

int main() {
    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"panda", "owl", "wolf"}
    };

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << animals[i][j] << " " << flush;
        }
    }

    return 0;
}