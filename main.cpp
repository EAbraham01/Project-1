#include <iostream>
#include "markov.h"
using namespace std;

//Test 1
int main(){

string testWords[] = {"the", "cat", "sat", "down"};
cout << joinWords(testWords, 0, 2) << endl;
cout << joinWords(testWords, 1, 3) << endl;

//Test 2

string words[1000];
int count = readWordsFromFile("test.txt", words, 1000);
cout << "Read " << count << " words" << endl;
for (int i = 0; i < 10 && i < count; i++) {
    cout << words[i] << endl;
}


//Test 3
string prefixes[10000], suffixes[10000];
int chainSize = buildMarkovChain(words, count, 2, prefixes, suffixes, 10000);
for (int i = 0; i < 20 && i < chainSize; i++) {
    cout << "[" << prefixes[i] << "] -> [" << suffixes[i] << "]" << endl;
}


}