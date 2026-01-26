// Largest Perimeter Triangle 

/*
Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formerd from three of these lengths.
it is impossible to form any triangle of a non-zero area, return 0.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largestPerimeter(vector<int>& nums){
    sort(nums.begin(),nums.end());

    for(int i=nums.size()-1;i>=2;i--){
        if(nums[i-1]+nums[i-2] > nums[i]){
            return nums[i] + nums[i-1] + nums[i-2];
        }
    }
    return 0;
}

int main(){
    vector<int> nums = {2,1,2};
    cout << largestPerimeter(nums);
    return 0;
}