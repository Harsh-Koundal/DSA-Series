// Sort Array by Increasing Frequency 

/*
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> frequencySort(vector<int> nums){
    unordered_map<int,int> freq;
    for(int x : nums)
    freq[x]++;

    sort(nums.begin(),nums.end(),[&](int a,int b){
        if(freq[a]==freq[b]) return a>b;
        return freq[a] < freq[b];
    });
    return nums;
}

int main(){
    vector<int> nums = {1,1,2,2,2,3};
    for(int x : frequencySort(nums)){
        cout << x << " ";
    }
    return 0;
}