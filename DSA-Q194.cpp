// Count Equal and Divisible Pairs in an Array 

/*
Given a 0-indexed integer array nums of length n and an integer k, return the number of pairs (i, j) where 0 <= i < j < n, such that nums[i] == nums[j] and (i * j) is divisible by k.
*/

#include<iostream>
#include<vector>
using namespace std;


int countPairs(vector<int>& nums,int k){
    int count =0;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){

            if(nums[i]==nums[j] && (i*j)%k==0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {3,1,2,2,2,1,3};
    int k=2;
    cout << countPairs(nums,k);
    return 0;
}