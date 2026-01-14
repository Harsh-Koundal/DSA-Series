// Kids With the Greatest Number of Candies

/*
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies , int extraCandies){
    vector<bool> gratest;
    int maxc =0;
    for(int i=0;i<candies.size();i++){
        maxc = max(candies[i],maxc);
    }
    for(int i=0;i<candies.size();i++){
        if(candies[i]+extraCandies >=maxc) gratest.push_back(true);
        else gratest.push_back(false);
    }
    return gratest;
}

int main(){
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    for(bool x : kidsWithCandies(candies,extraCandies)){
        cout <<" "<< ((x)?"true":"false");
    }
    return 0;
}