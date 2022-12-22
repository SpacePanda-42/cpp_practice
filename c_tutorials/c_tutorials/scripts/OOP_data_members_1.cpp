#include <iostream>
#include "Cat2.h"
#include "OOP_data_members_2.cpp"

using namespace std;

int main(){
    Cat bob;
    Cat blah;

    bob.makeHappy();
    bob.speak();
    bob.jump();

    blah.speak();
    blah.makeSad();
    blah.speak();
    return 0;
}