// Is Subsequence 

/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
*/

#include<iostream>
using namespace std;

bool isSubsequence(string s,string t){
    int i=0;

    for(int j=0;j<t.size();j++){
        if(i<s.size() && s[i]==t[j]) i++;
    }
    return i == s.size();
}

int main(){
    string s="abc",t="ahbgcd";
    if(isSubsequence(s,t)){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}