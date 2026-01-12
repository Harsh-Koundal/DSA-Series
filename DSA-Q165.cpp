// X of a Kind in a Deck of Cards 

/*
You are given an integer array deck where deck[i] represents the number written on the ith card.

Partition the cards into one or more groups such that:

Each group has exactly x cards where x > 1, and
All the cards in one group have the same integer written on them.
Return true if such partition is possible, or false otherwise.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<numeric>
using namespace std;

bool hasGroupsSizeX(vector<int>& deck){
    unordered_map<int ,int> res;
    for(int i=0;i<deck.size();i++){
        res[deck[i]]++;
    }

    int g =0;
    for(auto it : res){
        g = __gcd(g,it.second);
    }
    return g>1;
}

int main(){
    vector<int> deck = {1,2,3,4,4,3,2,1};
    cout << (hasGroupsSizeX(deck) ? "true" : "false");

    return 0;
}