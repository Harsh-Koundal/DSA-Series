// Sum of All Odd Length Subarrays

/*
Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.

A subarray is a contiguous subsequence of the array.
*/

#include<iostream>
#include<vector>
using  namespace std;

int sumOddLengthSubarrays(vector<int>& arr){
    int n = arr.size();
    int totalSum = 0;

    for(int i=0;i<n;i++){
        int totalSubarrays = (i+1)*(n-i);
        int oddSubarrays = (totalSubarrays+1)/2;
        totalSum += arr[i] * oddSubarrays;
    }
    return totalSum;
}

int main(){
    vector<int> arr = {1,4,2,5,3};
    cout << sumOddLengthSubarrays(arr);
    return 0;
}