// Largest Number At Least Twice of Others

/*
You are given an integer array nums wjere the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. if it is, return the index of the largest element, or return -1 otherwise.
*/

#include<iostream>
#include<vector>
using namespace std;

int domainantIndex(vector<int>& nums){
    int maxVal =-1;
    int maxIndex = -1;

    for(int i=0;i<nums.size();i++){
        if(nums[i]> maxVal){
            maxVal = nums[i];
            maxIndex = i;
        }
    }

    for(int i=0;i<nums.size();i++){
        if(i==maxIndex) continue;

        if(maxVal < nums[i]*2){
            return -1;
        }
    }
    return maxIndex;
}

int main(){
    vector<int> nums = {3,6,1,0};
    cout << domainantIndex(nums);
    return 0;
}