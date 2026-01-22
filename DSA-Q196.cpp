// Divide Array Into Equal Pairs

/*
You are given an integer array nums consisting of 2 * n integers.

You need to divide nums into n pairs such that:

Each element belongs to exactly one pair.
The elements present in a pair are equal.
Return true if nums can be divided into n pairs, otherwise return false.
*/


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool divideArray(vector<int>& nums){
    unordered_map<int,int> freq;

    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    for(auto x : freq){
        if(x.second%2 !=0) return false;
    }
    return true;
}

int main(){
    vector<int> nums = {3,2,3,2,2,2};
    cout << (divideArray(nums)?"True":"False");
    return 0;
}