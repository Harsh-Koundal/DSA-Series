// Length of Last Word

/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
*/

#include<iostream>
using namespace std;

int lastWord(string s){
    int i = s.length()-1,words=0;
    while(i>=0 && s[i]==' ')i--;
    while(i>=0 && s[i]!=' '){ 
    words++;
    i--;
    }
    return words;
}

int main(){
    string s = "hello world";
    cout << lastWord(s);
    return 0;
}