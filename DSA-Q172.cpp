// Maximum Product of Two Elements in an Array 

/*
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProduct(vector<int>& nums){
    int max1=0,max2=0;
    for(int x : nums){
        if(x>max1){
            max2=max1;
            max1=x;
        } else if(x>max2){
            max2=x;
        } 
    }
    return (max1-1)*(max2-1);
}

int main(){
    vector<int> nums = {3,4,5,2};
    cout << maxProduct(nums);
    return 0;
}