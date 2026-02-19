#include <iostream>
#include "markov.h"
using namespace std;

//Test 1
int main(){
/*
string testWords[] = {"the", "cat", "sat", "down"};
cout << joinWords(testWords, 0, 2) << endl;
cout << joinWords(testWords, 1, 3) << endl;
*/
//Test 2
string words[1000];
int count = readWordsFromFile("test.txt", words, 1000);
cout << "Read " << count << " words" << endl;
for (int i = 0; i < 10 && i < count; i++) {
    cout << words[i] << endl;
}


}