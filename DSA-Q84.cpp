// Problem : Count Partitions With Even Sum Difference

#include<iostream>
#include<vector>
using namespace std;

int coutPartitions(vector<int>& nums){
    int totalSum =0;
    for(int num : nums){
        totalSum +=num;
    }
    int leftSum =0;
    int count =0;

    for(int i=0;i<nums.size()-1;i++){
        leftSum += nums[i]; // 10
        int rightSum = totalSum - leftSum; // r=36-10=26
        if((leftSum%2) == (rightSum%2)){ // check both even or odd
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> nums={10,10,3,7,6};
    cout << coutPartitions(nums);
    return 0;
}