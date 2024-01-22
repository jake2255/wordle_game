#include "wordbank.h"
#include <vector>
#include <string>
using namespace std;

string WordBank(){
    vector<string>wordBank = {"thing", "water", "light", "acute", "paper", "raise", "their", "north", "large", "slick"};
    int randIndex = rand() % wordBank.size();
    return wordBank[randIndex];
}
