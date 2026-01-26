// Squares of a Sorted Array

/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
    int n = nums.size();
    vector<int> res(n);

    int left = 0, right = n-1;
    int pos = n-1;

    while(left <= right){
        if(abs(nums[left]) > abs(nums[right])){
            res[pos] = nums[left] * nums[left];
            left++;
        }else{
            res[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }

    return res;   
}

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    for(int x : sortedSquares(nums))
    cout << x << " ";

    return 0;
}