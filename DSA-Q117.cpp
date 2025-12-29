//  Rotate Array

/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotate(vector<int>& nums,int k){
    int n = nums.size();
    k = k%n;

    reverse(nums.begin(),nums.end());  // 7 6 5 4 3 2 1
    reverse(nums.begin(),nums.begin()+k); // 5 6 7 4 3 2 1
    reverse(nums.begin()+k,nums.end()); // 5 6 7 1 2 3 4

    return nums;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k =3;
    vector<int> res = rotate(nums,k);
    for(int x : res){
        cout << x <<" ";
    }
    return 0;
}