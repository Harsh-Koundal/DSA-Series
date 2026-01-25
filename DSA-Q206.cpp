// Relative Ranks

/*
You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

The 1st place athlete's rank is "Gold Medal".
The 2nd place athlete's rank is "Silver Medal".
The 3rd place athlete's rank is "Bronze Medal".
For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
Return an array answer of size n where answer[i] is the rank of the ith athlete.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> findRelativeRanks(vector<int>&score){
    int n = score.size();

    vector<pair<int,int>> athletes;
    for(int i=0;i<n;i++){
        athletes.push_back({score[i],i});
    }

    sort(athletes.begin(),athletes.end(),greater<>());

    vector<string> res(n);

    for(int i=0;i<n;i++){
        if(i==0) res[athletes[i].second] = "Gold Medal";
        else if(i==1) res[athletes[i].second] = "Silver Medal";
        else if(i==2) res[athletes[i].second] = "Bronze Medal";
        else res[athletes[i].second] = to_string(i+1);
    }
    return res;
}

int main(){
    vector<int> score = {10,3,8,9,4};

    for(string x : findRelativeRanks(score))
    cout << x << " ";

    return 0;
}

