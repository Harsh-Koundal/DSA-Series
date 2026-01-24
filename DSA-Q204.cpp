// Median of Two Sorted Arrays

/*
Given two sorted arrays nums1 and nums2 of size m  and n respectively, return the median of the two sorted arrays.

the overall run time complexity should be 0(log(m+n)).
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2){
    vector<int> merged;

    for(int x : nums1) merged.push_back(x);
    for(int x : nums2) merged.push_back(x);

    sort(merged.begin(),merged.end());

    int n = merged.size();

    if(n%2==1) return merged[n/2];
    else return (merged[n/2-1]+merged[n/2])/2.0;
}

int main(){
    vector<int> nums1 = {1,3}, nums2 = {2};

    cout <<  findMedianSortedArrays(nums1,nums2);
    return 0;
}