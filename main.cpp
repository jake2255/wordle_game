#include "wordgenerator.h"

using namespace std;

int main(){

    vector<char>genWord = WordGenerator();
    vector<vector<char>>dispWord = {{'*','*','*','*','*'},{genWord[0],genWord[1],genWord[2],genWord[3],genWord[4]}};
    string word;
    bool match = false;

    for(int i = 0; i < 7; i++){
        cout << "guess word: ";
        cin >> word;
        cout << endl;

        vector<char>userWord(word.begin(), word.end());

        for(int i = 0; i < 5; i++){
            if(dispWord[1][i] == userWord[i])
                cout << "|" << dispWord[1][i];
            else
                cout << "|" << dispWord[0][i];   
        }
        cout << "|" << endl;
    }

    cout << "the word was: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "|" << dispWord[1][i];  
    }
    cout << "|" << endl;

    return 0;
}
