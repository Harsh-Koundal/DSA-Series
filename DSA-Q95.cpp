// Problem : Single Element in a Sorted Array

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums){
    int st=0,end=nums.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(mid%2==1) mid--;
        if(nums[mid]==nums[mid+1]) st=mid+2;
        else end=mid;
    }
    return nums[st];
}

int main(){
    vector<int> nums = {1,1,2,4,4,6,6};
    cout << singleNonDuplicate(nums);
    return 0;
}