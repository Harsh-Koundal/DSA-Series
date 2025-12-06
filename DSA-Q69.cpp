//  Problem : Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size() == 0) return 0;
    int index = 1;
    for(int i=1;i<nums.size();i++){
        if(nums[i] != nums[i-1]){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,2,3,3,4};
    int k = removeDuplicates(nums);
    cout << k << endl;
    for(int i=0;i<k;i++){
        cout << nums[i] << " ";
    }
}