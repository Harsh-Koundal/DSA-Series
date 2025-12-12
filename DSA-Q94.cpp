// Problem : Peak Index in a Mountain Array

#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int>& nums){
    int st=0, end=nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid-1]<nums[mid] && nums[mid] > nums[mid+1]) return mid;
        else if(nums[mid-1]<nums[mid]) st = mid+1;
        else end=mid-1;
    }
    return -1;

}

int main(){
    vector<int> nums = {0,3,5,9,3,2};
    cout << peakIndex(nums);
    return 0;
}