// Two Furthest Houses With Different Colors 

/*
There are n houses evenly lined up on the street, and each house is beautifully painted. You are given a 0-indexed integer array colors of length n, where colors[i] represents the color of the ith house.

Return the maximum distance between two houses with different colors.

The distance between the ith and jth houses is abs(i - j), where abs(x) is the absolute value of x.
*/

#include<iostream>
#include<vector>
using namespace std;

int maxDistance(vector<int>& colors){
    int n = colors.size();
    int ans=0;

    //compare with the first house 
    for(int i=n-1;i>=0;i--){
        if(colors[i] != colors[0]){
            ans = max(ans,i);
            break;
        }
    }

    //compare with the last house 
    for(int i=0;i<n;i++){
        if(colors[i] != colors[n-1]){
            ans = max(ans , n-1-i);
            break;
        }
    }

    return ans;
}

int main(){
    vector<int> colors = {1,1,1,6,1,1,1};
    
    cout <<  maxDistance(colors);
    
    return 0;
}