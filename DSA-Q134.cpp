// Text Justification

/*
Given an array of strings words and a width maxWidth, format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<string> fullJustify(vector<string>& words,int maxWidth){
    vector<string> result;
    int n = words.size();
    int i = 0;
    while(i<n){
        int lineLen = words[i].length();
        int j = i+1;

        while(j < n && lineLen+1+words[j].length() <= maxWidth){
            lineLen +=1 + words[j].length();
        j++;
        }
        int wordCount = j-i;
        int totalLetters=0;
        for(int k=i;k<j;k++){
            totalLetters +=words[k].length();
        }
        string line;
        if(j==n || wordCount ==1){
            for(int k=i;k<j;k++){
                line +=words[k];
                if(k<j-1) line +=" ";
            }
            line +=string(maxWidth - line.length(), ' ');
        }
        else{
            int totalspaces = maxWidth - totalLetters;
            int spacePerSlot = totalspaces/(wordCount-1);
            int extraSpaces = totalspaces%(wordCount-1);

            for(int k = i;k<j;k++){
                line+=words[k];
                if(k<j-1){
                    line+=string(spacePerSlot,' ');
                    if(extraSpaces-- >0){
                        line+= " ";
                    }
                }
            }
        }
        result.push_back(line);
        i=j;
    }
    return result;
}

int main(){
    vector<string> words = {"What","must","be","acknowledgment","shall","be"};
    int maxWidth = 16;
    vector<string> res = fullJustify(words,maxWidth);
    for(string x : res){
        cout << x << " \n";
    }
    return 0;
}
