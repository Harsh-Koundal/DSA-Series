// Jump Game

/*
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
*/

#include<iostream>
#include<vector>
using namespace std;

bool canJump(vector<int>& nums){
    int farthest =0;
    for(int i=0;i<nums.size();i++){
        if(i>farthest) return false;
        farthest = max(farthest,i+nums[i]);
    }
    return true;
}

int main(){
    vector<int> nums = {1,3,2};
    if(canJump(nums)){
        cout << "true";
    }else{
        cout<<"false";
    }
    return 0;
}