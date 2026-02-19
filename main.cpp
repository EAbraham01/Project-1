#include <iostream>
#include "markov.h"
using namespace std;

int main(){
string testWords[] = {"the", "cat", "sat", "down"};
cout << joinWords(testWords, 0, 2) << endl;
cout << joinWords(testWords, 1, 3) << endl;

}