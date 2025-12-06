// Problem : First Non-Repeating Character

#include<iostream>
#include<vector>
using namespace std;

char firstNonRepeatingCharacter(string s){
    vector<int> count(36,0);
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]-'a']==1){
            return s[i];
        }
    }
    return '_';
}

int main(){
    string s = "leetcode";

    cout<< firstNonRepeatingCharacter(s);
    return 0;
}