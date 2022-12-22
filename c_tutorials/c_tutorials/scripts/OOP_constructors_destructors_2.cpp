#include <iostream>
#include "Cat2.h"
using namespace std;


Cat::Cat(){
    happy = true;
}

Cat::~Cat(){
    cout << "destructor" << endl;
}

void Cat::speak(){
    if(happy){
        cout << "Meow" << endl;
    } else{
        cout << "iwobfe" << endl;
    }
}

void Cat::jump(){
    cout << "the cat jumped" << endl;
}

void Cat::makeHappy(){
    happy = true;
}

void Cat::makeSad(){
    happy = false;
}
