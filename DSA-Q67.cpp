// Problem : Check if Two Strings Are Anagrams

#include<iostream>
#include<vector>
using namespace std;

int isAnagram(string s, string t){
    if(s.length() != t.length()) return 0;
    vector<int> count(26,0);

    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i] !=0) return 0;
    }
    return 1;
}

int main(){
    string s = "anagram";
    string t = "margana";

    if(isAnagram(s,t)){
        cout << "Anagrams";
    }else{
        cout << "Not Anagrams";
    }
    return 0;
}