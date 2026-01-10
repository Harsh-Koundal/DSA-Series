//  Find Smallest Letter Greater Than Target

/*
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

char nextGreatestLetter(vector<char>& letters,char target){
    for(char c : letters){
        if(c > target) return c;
    }
    return letters[0];
}

int main(){
    vector<char> letters = {'c','f','j'};
    char target = 'a';
    cout << nextGreatestLetter(letters,target);
    return 0;
}