#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double fValue = 42.3;

    cout << sizeof(float) << endl;
    cout << scientific << fValue << endl;
    cout << setprecision(20) << fixed << fValue << endl;
    cout << "size of long double: " << sizeof(long double) << flush;

    return 0;

     
}