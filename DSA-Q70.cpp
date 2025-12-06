// Problem : Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums,int val){
    if(nums.size() == 0) return 0;
    int idx=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] !=val){
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx;
}

int main(){
    vector<int> nums = {3,3,2,3,2,1};
    int val = 3;
    int k = removeElement(nums,val);
    cout << k <<endl;
    for(int i=0;i<k;i++){
        cout << nums[i] << " ";
    }
    return 0;
}