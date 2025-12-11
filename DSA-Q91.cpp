// Problem : Single Number

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int result = 0;
    for(int num : nums){
        result ^= num;
    }
    return result;
}

int main(){
    vector<int> nums = {4,1,2,2,1};
    cout << singleNumber(nums);
    return 0;
}