// Sorting the Sentence 

/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.
*/

#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

string sortSentence(string s){
    vector<string> result(10);
    string word;
    stringstream ss(s);

    while(ss >> word){
        int pos = word.back() -'0';
        word.pop_back();
        result[pos] = word;
    }

    string answer = "";
    for(int i=1;i<result.size();i++){
        if(result[i]!="")
        answer += result[i] + " ";
    }

    answer.pop_back();
    return answer;
}

int main(){
    string  s = "is2 sentence4 this1 a3";
    cout << sortSentence(s);
    return 0;
}


