// Find Closest Number to Zero 

/*
Given an integer arrays nums of size n, return the number with th evalue closest to 0 in nums. if there are multiple answers, return the number with the largest value 
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int findClosestNumber(vector<int>& nums){
    int closest = nums[0];

    for(int i=1;i<nums.size();i++){
        if(abs(nums[i]) < abs(closest)){
            closest = nums[i];
        }
        else if(abs(nums[i]) == abs(closest)){
            closest = max(closest,nums[i]);
        }
    }
    return closest;
 }

int main(){
    vector<int> nums = {-4,-2,1,4,8};

    cout << findClosestNumber(nums);
    return 0;
}