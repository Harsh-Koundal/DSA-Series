// Sum of Unique Elements 

/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int sumOfUnique(vector<int>& nums){
    int sum = 0;
    unordered_map<int,int> freq;
    for(int x : nums){
        freq[x]++;
    }
    for(auto x: freq){
        if(x.second==1){
            sum+=x.first;
        }
    }
    return sum;
}

int main(){
    vector<int> nums = {1,2,3,2};
    cout << sumOfUnique(nums);
    return 0;
}