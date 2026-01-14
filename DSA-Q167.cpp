// Find Numbers with Even Number of Digits


/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/

#include<iostream>
#include<vector>
using namespace std;

int findNumbers(vector<int>& nums){
    int n = 0;
    for(int num : nums){
        string s = to_string(num);
        if(s.length()%2==0){
            n++;
        }
    }
    return n;
}

int main(){
    vector<int> nums = { 12,345,2,6,7896};
    cout << findNumbers(nums);
    return 0;
}