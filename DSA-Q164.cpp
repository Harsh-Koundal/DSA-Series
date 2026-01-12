// Sort Array By Parity 

/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums){ 
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0) res.push_back(nums[i]);
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2!=0) res.push_back(nums[i]);
    }
    return res;
}

int main(){
    vector<int> nums = {3,1,2,4};
    vector<int> res = sortArrayByParity(nums);
    
    for(int x : res){
        cout << x << " ";
    }
    return 0;
}