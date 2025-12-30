// Product of Array Expect Self

/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExpectSelf(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,1);
    vector<int> left(n,1);
    vector<int> right(n,1);

    for(int i=1;i<n;i++){
        left[i] =left[i-1]*nums[i-1]; 
    }
    for(int i=n-2;i>=0;i--){
        right[i] = right[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i] = left[i]*right[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> res = productExpectSelf(nums);
    for(int x : res){
        cout << x <<" ";
    }
    return 0;
}