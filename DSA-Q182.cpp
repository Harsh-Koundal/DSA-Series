// Minimum Distance to the Target Element

/*
Given an integer array nums (0-indexed) and two integers target and start, find an index i such that nums[i] == target and abs(i - start) is minimized. Note that abs(x) is the absolute value of x.

Return abs(i - start).

It is guaranteed that target exists in nums.

*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int getMinDistance(vector<int>& nums,int target,int start){
    int minDist = INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(target == nums[i]){
            minDist = min(minDist,abs(i-start));
        }
    }
    return minDist;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 5 , start = 3;
    cout << getMinDistance(nums,target,start);
    return 0;
}