// Problem : How Many Numbers Are Smaller Than the Current Number

#include<iostream>
#include<vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums){
    int n = nums.size();
    vector<int> result(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[j]<nums[i]){
                result[i]++;
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {8,1,2,2,3};
    vector<int> result = smallerNumbersThanCurrent(nums);

    for(int val :result){
        cout << val << " ";
    }
    return 0;
}