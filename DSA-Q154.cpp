// Distribute Candies

/*
Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.

The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice.

Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.
*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int distributeCandies(vector<int>& candyType){
    int n = candyType.size();
    int candy =0;
    int res = n/2;
    unordered_set<int> uniq;

    for(int i=0;i<n;i++){
        uniq.insert(candyType[i]);
    }

    if(uniq.size()>res){
        candy = res;
    }else {
        candy = uniq.size();
    }
    return candy;
}

int main(){
    vector<int> candyType = {1,1,2,2,3,3};
    cout << distributeCandies(candyType);
    return 0;
}