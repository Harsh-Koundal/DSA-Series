// Two Sum II - Input Array Is Sorted

/*
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
*/


#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums , int target){
    int left=0,right=nums.size()-1;
    while(left<right){
        int sum = nums[left] + nums[right];
        if(sum == target) return {left,right};
        else if(sum<target){
            left++;
        }else{
            right--;
        }
    }
    return {};
}

int main(){
    vector<int> nums = {1,2,7,11,15};
    int target = 9;
    vector<int> res = twoSum(nums,target);
    for(int x : res){
        cout << x << " " ; 
    }
    return 0;
}