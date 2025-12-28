// Majority Element

/*
Given an array nums of size n, return the majority element.
*/

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int candidate=0,count=0;
    for(int i=0;i<nums.size();i++){
        if(count==0) candidate=nums[i];
        if(nums[i]==candidate){
            count++;
        }else{
            count--;
        }
    }
    return candidate;
}

int main(){
    vector<int> nums = {3,2,3};
    cout << majorityElement(nums);
    return 0;
}