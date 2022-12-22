#include <iostream>

using namespace std;

int main(){

    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs;
    cout << "Number of cats: " << numberCats << endl;
    cout << "Number of dogs: " << numberDogs << endl;

    cout << "Number of animals: " << numberDogs + numberCats << endl;

    cout << "Four dogs acquired!" << endl;
    numberDogs = numberDogs + 1;
    numberDogs += 1;
    ++numberDogs;
    numberDogs++;

    cout << "Four cats given to someone else!" << endl;
    numberCats--;
    --numberCats;
    numberCats -= 1;
    numberCats = numberCats - 1;


    cout << "New number of dogs: " << numberDogs << endl;
    cout << "New number of cats: " << numberCats << endl;

    return 0;
}