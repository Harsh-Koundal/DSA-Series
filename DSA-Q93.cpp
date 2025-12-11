// Problem : Search in Rotated Sorted Array

#include<iostream>
#include<vector>
using namespace std;

int searchInRotatedSortedArray(const vector<int>& nums,int target){
    int st=0,end=nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target) return mid;
        if(nums[st]<=nums[mid]){
           if(target>=nums[st] && target<nums[mid]){
             end=mid-1;
           } else{
            st=mid+1;
           }
        }else{
            if(target>nums[mid] && target<=nums[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << searchInRotatedSortedArray(nums,target);
    return 0;
}