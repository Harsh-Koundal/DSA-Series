// Most Common Word

/*
Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

The words in paragraph are case-insensitive and the answer should be returned in lowercase.

Note that words can not contain punctuation symbols.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

string mostCommonWord(string paragraph, vector<string>& banned){
    unordered_set<string> bannedSet;
    for(string word : banned){
        string lowerWord = "";
        for(char c : word)
            lowerWord += tolower(c);
        bannedSet.insert(lowerWord);
    }

        unordered_map<string, int> freq;
        string word = "";

        for(int i=0;i<=paragraph.length();i++){
            if(i<paragraph.length() && isalpha(paragraph[i])){
                word += tolower(paragraph[i]);
            }else{
                if(!word.empty() && bannedSet.find(word) == bannedSet.end()){
                    freq[word]++;
                }
                word="";
            }
        }
        string result;
        int maxCount = 0;

        for(auto it : freq){
            if(it.second > maxCount){
                maxCount = it.second;
                result = it.first;
            }
        }

        return result;
}

int main(){
    vector<string> banned = {"hit"};
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    cout << mostCommonWord(paragraph,banned);
    return 0;
}