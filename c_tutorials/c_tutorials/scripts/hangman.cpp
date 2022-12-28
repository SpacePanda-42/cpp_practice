#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;


class Game {

private:
    bool win = false;
    bool correctGuess = false;
    int numLives = 10;

public:
    void startGame(vector<string> dictionary);
    void endGame();
    void guessLetter();
    void writeDictionary(); // Dummy function that was used as a test for writing to a file
    vector<string> loadDictionary();
};

void Game::startGame(vector<string> dictionary){
    cout << "Guess a letter" << endl;
    srand(time(0));
    int random_pos = rand() % dictionary.size();
    cout << random_pos << endl;
    cout << dictionary[random_pos] << endl;
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

vector<string> Game::loadDictionary(){
    cout << "Loading dictionary..." << endl;
    fstream newfile;
    vector<string> words;
    
    newfile.open("dictionary.txt",ios::in);
    if (newfile.is_open()){
        string tp;
        int idx = 0;
        while(getline(newfile,tp)){
            words.push_back(tp);
            idx += 1;
        }
        
        // for(auto i=words.begin(); i != words.end(); ++i)
        //     cout << *i << " " << "\n";
        
        newfile.close();
        cout << "Dictionary successfully loaded" << endl;
    }
    return words;


    // std::ifstream infile("dictionary.txt");

};

int main(){
    Game game;
    // game.startGame();
    vector<string> dictionary;
    dictionary = game.loadDictionary();
    game.startGame(dictionary);
}
