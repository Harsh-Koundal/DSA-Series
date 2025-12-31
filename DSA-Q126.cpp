// Candy

/*
There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.
*/

#include<iostream>
#include<vector>
using namespace std;

int candy(vector<int>& ratings){
    int n = ratings.size();
    vector<int> candies(n,1);
    for(int i=1;i<n;i++){
        if(ratings[i]>ratings[i-1]){
            candies[i] = candies[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            candies[i] = max(candies[i],candies[i+1]+1);
        }
    }
    int total=0;
    for(int c : candies){
        total+=c;
    }
    return total;
}

int main(){
    vector<int> ratings = {1,0,2};
    cout << candy(ratings);
    return 0;
}