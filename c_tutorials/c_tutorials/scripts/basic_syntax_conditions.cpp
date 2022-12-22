#include <iostream>
using namespace std;

int main() {
    int val1 = 11;
    int val2 = 102;
    int val3 = 112;
    int val4 = 1293;

    if(val1 == 11 || val2 == 12) {
        cout << "swoooop" << endl;
    } else if (val1 == 10 && val2 == 102){
        cout << "de doooooop" << endl;
    }

    if(val1 == 10 && val4 == 1293 && val2 ==100 || val3 == 112){
        cout << "swoooop de doooooop" << endl;
    }

    if( (val1 == 10 && val4 == 1940) || val2 == 102) {
        cout << "snap snap snap" << endl;
    }

    if( (val1 == 11 && val4 == 1293) || val2 == 100) {
        cout << "grandpappy" << endl;
    }
    
    bool conditional = (val1 == 11 && val3 == 112);
    bool conditional2 = val1 < 9;
    cout << conditional << endl;
    cout << conditional2 << endl;

    return 0;
}