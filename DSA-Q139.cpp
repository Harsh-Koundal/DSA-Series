// 3Sum

/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> result;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for(int i=0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]) continue;

        int left = i+1;
        int right = n-1;

        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];

            if(sum==0){
                result.push_back({nums[i],nums[left],nums[right]});

                while(left < right && nums[left] ==  nums[left+1]) left++;
                while(left < right && nums[right] == nums[right-1]) right--;

                left++;
                right--;
            }
            else if(sum < 0){
                left++;
            }else{
                right--;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);

    for (int i = 0; i < res.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << "]\n";
    }
    return 0;
}