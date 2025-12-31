// Longest Common Prefix

/*
Write a function to find the longest common prefix string amongst an array of strings.
*/

#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    if(strs.size()==0) return "";
    string prefix = strs[0];
    for(int i=1;i<strs.size();i++){
        while(strs[i].find(prefix)!=0){
            prefix = prefix.substr(0,prefix.length()-1);
        }
    }
    return prefix;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}