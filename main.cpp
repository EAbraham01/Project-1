#include <iostream>
#include <cstdlib>
#include <ctime>
#include "markov.h"
using namespace std;


int main(){
srand(time(0));
string filename;
int order, numWords;

cout << "Enter input filename: ";
cin >> filename;

cout << "Enter order (1, 2, or 3): ";
cin >> order;

cout << "Enter number of words to generate: ";
cin >> numWords;

const int maxWords = 100000;
string* words = new string[maxWords];
string* prefixes = new string[maxWords];
string* suffixes = new string[maxWords];

int wordsRead = readWordsFromFile(filename, words, maxWords);
int chainSize = buildMarkovChain(words, wordsRead, order, prefixes, suffixes, maxWords);

if (wordsRead == -1){
    cout << "File does not exist, please try again." << endl;
    return -1;
}

if (chainSize <= 0){
    cout << "Chain is empty, please try again." << endl;
    return -1;
}
cout <<"-----Info------" << endl;
cout << "File name: " << filename << endl;
cout << "Order: " << order << endl;
cout << "Number of words generated: " << numWords << endl << endl;

string generatedText = generateText(prefixes, suffixes, chainSize, order, numWords);
cout << "Generated Text: " << endl << generatedText << endl;

delete[] words;
delete[] prefixes;
delete[] suffixes;
}