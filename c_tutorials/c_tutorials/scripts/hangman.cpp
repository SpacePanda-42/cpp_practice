#include <iostream>
#include <fstream>
using namespace std;


class Game {

private:
    bool win = false;
    bool correctGuess = false;
    int numLives = 10;

public:
    void startGame();
    void endGame();
    void guessLetter();
    void writeDictionary(); // Dummy function that was used as a test for writing to a file
    void loadDictionary();
};

void Game::startGame(){
    cout << "Starting game..." << endl;
    cout << "Guess a letter" << endl;
    // somehow need to get a random word here

};

void Game::writeDictionary(){
    fstream newfile;
    newfile.open("dictionary.txt", ios::out);
    if(newfile.is_open()){
        newfile << "apple \n";
        newfile << "banana \n";
        newfile << "orange \n";
        newfile << "cherry \n";
        newfile.close();
    }
}

void Game::loadDictionary(){
    cout << "Loading dictionary..." << endl;
    fstream newfile;
    
    newfile.open("dictionary.txt",ios::in);
    if (newfile.is_open()){
        string tp;
        while(getline(newfile,tp)){
            cout << tp << "\n";
        }
        newfile.close();
    }
    // std::ifstream infile("dictionary.txt");

};

int main(){
    Game game;
    // game.startGame();
    game.loadDictionary();
    

}
