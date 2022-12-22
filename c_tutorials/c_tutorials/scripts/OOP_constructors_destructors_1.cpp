#include <iostream>
#include "Cat2.h"
#include "OOP_data_members_2.cpp"

using namespace std;

void test1(){
    Cat bob;
    bob.makeHappy();
    bob.speak();
    bob.jump();
}

void test2(){
    Cat blah;
    blah.speak();
    blah.makeSad();
    blah.speak();
}

int main(){
    {
        test1();
    }

    test2();

    return 0;
}