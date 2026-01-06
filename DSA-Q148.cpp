// Third Maximum Number 

/*
Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int thirdMax(vector<int>& nums){
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;

    for(int num : nums){
        if(num == first || num == second || num == third) continue;
        if(num>first){
            third = second;
            second = first;
            first = num;
        }else if(num > second){
            third = second;
            second = num;
        }else if(num > third){
            third = num;
        }
    }
    return (third == LONG_MIN)?first : third;
}

int main(){
    vector<int> nums = {2,2,3,1};
    cout << thirdMax(nums);
    return 0;
}