// Find All Lonely Numbers in the Array

/*
You are given an integer array nums. A number x is lonely when it appears only once, and no adjacent numbers (i.e. x + 1 and x - 1) appear in the array.

Return all lonely numbers in nums. You may return   the answer in any order.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findLonely(vector<int>& nums) {
    vector<int> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {
        bool unique = (i==0 || nums[i] != nums[i-1]) && (i==n-1 || nums[i] != nums[i+1]);

        bool noAdjacent = (i==0 || nums[i] -1  != nums[i-1]) && (i==n-1 || nums[i] + 1 !=nums[i+1]);

        if(unique && noAdjacent)
        res.push_back(nums[i]);

    }
    return res;
}


int main(){
    vector<int> nums = {1,3,5,3};
    for(int x : findLonely(nums)){
        cout << x << " ";
    }
    
    return 0;
}