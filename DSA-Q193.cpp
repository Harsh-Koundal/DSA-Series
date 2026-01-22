// Counting Words With a Given Prefix

/*
You are given an array of strings words and a string pref.

Return the number of strings in words that contain pref as a prefix.

A prefix of a string s is any leading contiguous substring of s.
*/

#include<iostream>
#include<vector>
using namespace std;

int prefixCount(vector<string>& words, string pref){
    int count = 0;
    for(int i=0;i<words.size();i++){
        if(words[i].substr(0,pref.length())==pref){
            count++;
        }
    }
    return count;
}

int main(){
    vector<string> words = {"pay","attention","practice","attend"};
    string pref = "at";

    cout << prefixCount(words,pref);

    return 0;
}