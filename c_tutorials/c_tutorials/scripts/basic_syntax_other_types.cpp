#include <iostream>
using namespace std;

int main() {

    bool bValue = true;
    cout << bValue << endl;

    char cValue = 68;
    char cOtherValue = '7';
    cout << cValue << endl;
    cout << cOtherValue << endl;

    cout << "Size of char: " << sizeof(char) << endl;
    wchar_t wValue = 'i';
    cout << wValue << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
    char potato = 129;

    return 0;
}