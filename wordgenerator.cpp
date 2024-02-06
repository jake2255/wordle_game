#include "wordgenerator.h"

using namespace std;

vector<char> WordGenerator(){

    ifstream file("wordbank.txt");

    if(!file.is_open()){
        cout << "Error, file not found." << endl;
        exit(1);
    }

    vector<char>returnWord;
    vector<string>wordList;
    string word;

    while(getline(file, word))
        wordList.push_back(word);
    
    srand(time(NULL));
    int index = rand() % wordList.size();


    file.close();
    return returnWord;
}
