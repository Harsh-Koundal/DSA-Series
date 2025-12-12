// Problem : Single Element in a Sorted Array

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums){
    int x=0;
    for(int num : nums){
        x ^=num;
    }
    return x;
}

int main(){
    vector<int> nums = {1,1,2,4,4,6,6};
    cout << singleNonDuplicate(nums);
    return 0;
}