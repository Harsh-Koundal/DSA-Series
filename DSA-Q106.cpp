// Problem : First Unique Character in a String
/* Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1. */

#include<iostream>
using namespace std;

int firstUniqueChar(string s){
    int idx[26]={0};
    for(char t : s) idx[t-'a']++;
    for(int i=0;i<s.length();i++){
        if(idx[s[i]-'a']==1)return i;
    }
    return -1;
}

int main(){
    string s = "loveeleo";
    cout << firstUniqueChar(s);
    return 0;
}
