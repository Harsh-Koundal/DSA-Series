// Missing Number 

/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
*/

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums){
    int n = nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=i^nums[i];
    }
    return ans^n;
}

int main(){
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums);
    return 0;
}