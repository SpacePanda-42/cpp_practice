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

public:
    string startGame(vector<string> dictionary);
    void endGame();
    void guessLetter(vector<string> remaining_letters, vector<string> prevous_guesses);
    void writeDictionary(); // Dummy function that was used as a test for writing to a file
    void loseGame();
    void runGame();
    vector<string> loadDictionary();
    int nLives = 5;
    string remainingLetters;
    string current_progress;
};

string Game::startGame(vector<string> dictionary){
    // Pick a word at random from the dictionary
    string word;
    srand(time(0));
    int random_pos = rand() % dictionary.size();
    // cout << random_pos << endl;
    // cout << dictionary[random_pos] << endl;
    word = dictionary[random_pos];
    return(word);
};

void Game::guessLetter(vector<string> remaining_letters, vector<string> previous_guesses){
    string letter_guess;
    bool unique_guess = false;
    cout << "Guess a letter" << endl;
    cin >> letter_guess;

    // Check if we've already guessed the letter
    while(!unique_guess){
        if(*find(previous_guesses.begin(), previous_guesses.end(), letter_guess) == letter_guess){
            unique_guess = false;
            cout << "You already guessed that letter." << endl;
            cout << "Guess another letter" << endl;
            cin >> letter_guess;
        }else{
            unique_guess = true;
        }
    }
    
    // Check if the guessed letter is one of the remaining letters of the word
    if(*find(remaining_letters.begin(), remaining_letters.end(), letter_guess) == letter_guess){
        cout << "Letter was in the word" << endl;
    }else{
        cout << "Letter wasn't in the word" << endl;
        nLives -= 1;
    }

};

void Game::runGame(){
    while(nLives > 0){
        guessLetter()
    }

}

void Game::loseGame(){
    cout << "You lose" << endl;
}

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
    string word;
    // game.startGame();
    vector<string> dictionary;
    dictionary = game.loadDictionary();
    word = game.startGame(dictionary);
    game.runGame();

}
