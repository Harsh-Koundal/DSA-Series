// Problem : Majority Element

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> & nums){
    int candidate=0, count=0;
    for(int num:nums){
        if(count==0){
            candidate=num;
        }
        if(num==candidate) count++;
        else count--;
    }
    int freq=0;
    for(int num : nums){
        if(num==candidate) freq++;
    }
    if(freq>nums.size()/2) return candidate;
    return -1;
}

int main(){
    vector<int> nums = {3,2,3,2,1,2,2};
    cout << majorityElement(nums);
    return 0;
}