// Count Prefixes of a Given String 

/*
You are given a string array words and a  string s where words[i] and s comprise only of lowercase english letters.

Return the number of string in words  that are a prefix of s .

A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequenece of characters within a string.
*/

#include<iostream>
#include<vector>
using namespace std;

int countPrefixes(vector<string>& words, string s){
    int count =0;

    for(string word : words){
        if(word.length() > s.length()) continue;
        
        if(s.substr(0,word.length()) == word){
            count++;
        }
    }
    return count;
}

int main(){
    vector<string> words = {"a","b","c","ab","bc", "abc"};
    string s = "abc";
    cout << countPrefixes(words,s);
    return 0;
}