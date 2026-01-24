// Intersection of Multiple Arrays

/*
Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<vector<int>>& nums){
    unordered_map<int,int> freq;
    vector<int> res;
    int n = nums.size();

    for(int i=0;i<nums.size();i++){
        for(int num : nums[i]){
            freq[num]++;
        }
    }
    for(auto x: freq){
        if(x.second == n){
            res.push_back(x.first);
        }
    }
    sort(res.begin(),res.end());
    return res;
}

int main(){
    vector<vector<int>> nums = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    
    for(int x : intersection(nums)){
        cout << x << " ";
    }
    return 0;
}