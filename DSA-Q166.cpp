// Sort Array By Parity II

/*
Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums){
    vector<int> res(nums.size());
    int evenIdx=0;
    int oddIdx=1;
    for(int num : nums){
        if(num%2==0){
            res[evenIdx] = num;
            evenIdx +=2;
        }else{
            res[oddIdx] = num;
            oddIdx +=2;
        }
    }
    return res;
}

int main(){
    vector<int> nums = {4,2,5,7};
    vector<int> res = sortArrayByParityII(nums);
    for(int x : res) 
        cout << x << " ";
    return 0;
}