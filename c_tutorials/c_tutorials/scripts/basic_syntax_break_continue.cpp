#include <iostream>
using namespace std;

int main() {
    // for(int i=0; i < 10; i++) {
        
    //     cout << "i is: " << i << endl;

    //     if(i==3) {
    //         break;
    //     }
        
    //     cout << "Looping..." << endl;
    // }

    // cout << "Program quitting..." << endl;
    
    for(int i=0; i < 10; i++) {
        
        cout << "i is: " << i << endl;

        if(i==3) {
            continue;
        } else if(i==4) {
            break;
        }
        
        cout << "Looping..." << endl;
    }

    cout << "Program quitting..." << endl;


    return 0;
}