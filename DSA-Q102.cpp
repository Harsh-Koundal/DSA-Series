// Problem : Majority Element

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int candidate=0,count=0;
    for(int num:nums){
        if(count==0) candidate = num;
        if(num==candidate) count++;
        else count--;
    }
    return candidate;
}
int main(){
    vector<int> nums = {1,3,2,3,2,1,1};
    cout << majorityElement(nums);
    return 0;
}