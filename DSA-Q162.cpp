// Min Cost Climbing Stairs

/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

*/


#include<iostream>
#include<vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost){
     int n = cost.size();
     vector<int> dp(n);

     dp[0] = cost[0];
     dp[1] = cost[1];

     for(int i=2;i<n;i++){
        dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
     }
     return min(dp[n-1],dp[n-2]);
}

int main(){
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    cout << minCostClimbingStairs(cost);
    return 0;
}