#include <iostream>
#include <fstream>
#include <sstream>
#include "markov.h"
using namespace std;


string joinWords(const string words[], int startIndex, int count){
    string result = "";
    for (int i = 0; i <= count - 1; i++){
        if (i == 0)
            result += words[startIndex + i];
        else
            result += " " + words[startIndex + i];
    }
    return result;
}
/*
int readWordsFromFile(string filename, string words[], int maxWords){
    int counter = 0;
    ifstream inFile;
    inFile.open(filename);
    
    if (!inFile.is_open())
        return -1;
    
    while(counter < maxWords && inFile >> words[counter]){
        counter++;
    }
    inFile.close();
    
    return counter;
}

int buildMarkovChain(const string words[], int numWords, int order,string prefixes[], string suffixes[],int maxChainSize){
    int count = 0;
    for (int i = 0; i <= numWords - order - 1; i++){
        if (count == maxChainSize)
            break;
        string prefix = joinWords(words, i, order);
        string suffix = words[i + order];
        prefixes[count] = prefix;
        suffixes[count] = suffix;
        count ++;
    }
    return count;
}

string getRandomSuffix(const string prefixes[], const string suffixes[], int chainSize, string currentPrefix){
    int matchCount = 0;
    for (int i = 0; i <= chainSize - 1; i++){
        if (prefixes[i] == currentPrefix)
            matchCount++;
    }
    if (matchCount == 0)
        return "";
    int pick = rand() % matchCount;
    int match = 0;
    for (int i = 0; i <= chainSize - 1; i++){
        if (prefixes[i] == currentPrefix){
            if (match == pick)
                return suffixes[i];
            match++;
        }
    }
    
    return "";
}

string getRandomPrefix(const string prefixes[], int chainSize){
    int index = rand() % chainSize;
    return prefixes[index];
}

string generateText(const string prefixes[], const string suffixes[], int chainSize, int order, int numWords){
    string result = getRandomPrefix(prefixes, chainSize);
    string currentPrefix = result;
    for (int i = 0; i < numWords; i++){
        string newWord = (getRandomSuffix(prefixes, suffixes, chainSize, currentPrefix));
        if (newWord == "")
            break;
        result = result + " " + newWord;
        if (order == 1)
            currentPrefix = newWord;
        else{
            string* last = new string[order];
            stringstream shift(currentPrefix);
            for (int i = 0; i < order; i++){
                shift >> last[i];
            }
            for (int i = 0; i < order - 1; i++)
                last[i] = last[i + 1];
            last[order - 1] = newWord;
            currentPrefix = joinWords(last, 0, order);
                }
    }
    return result;
}
*/

