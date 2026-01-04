// Longest Substring Without Repeating Characters

/*
Given a string s, find the length of the longest substring without duplicate characters.
*/

#include<iostream>
#include<unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s){
    int left=0,maxLen=0;
    int n = s.length();
    unordered_set<char> window;

    for(int right=0;right<n;right++){
        while(window.count(s[right])){
            window.erase(s[left]);
            left++;
        }
        window.insert(s[right]);
        maxLen = max(maxLen,right-left+1);
    }
    return maxLen;
};

int main(){
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0; 
}