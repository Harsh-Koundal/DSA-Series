//  Problem : Given an integer array nums, return the second largest distinct element in the array.

#include<iostream>
#include<vector>
using namespace std;

int secondLargestElement(vector<int>& nums){
    int max = 0 , secondMax =0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            secondMax = max;
            max = nums[i];
        }else if(nums[i] > secondMax && nums[i] != max){
            max = nums[i];
        }
    }
    return secondMax;
}
int main(){
    vector<int> nums = {1,2,5,423,564};
    
    cout <<secondLargestElement(nums);
    return 0;
}