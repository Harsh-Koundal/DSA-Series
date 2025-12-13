// Problem : Valid Anagram

#include<iostream>
#include<vector>
using namespace std;

bool validAnagram(string s, string t){
    if(s.size() !=t.size()) return false;
    int count[26] ={0};
    for(char c : s) 
    count[c-'a']++;
    for(char c : t)
    count[c-'a']--;

    for(int x : count){
        if(x!=0) return false;
    }
    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    cout << validAnagram(s,t);
    return 0;
}