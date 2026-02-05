// Find missing number 

/*
Find the missing number from given array do not use any method.
solution should be O(n) 
*/

#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int>& nums){
    int n = nums.size()+1;
    int missing = -1;
    int expectedSum =0;

    expectedSum = n*(n+1)/2;

    int actualSum = 0;

    for(int num : nums){
        actualSum+=num;
    }

    return expectedSum - actualSum;

}

int main(){
    vector<int> nums = {1,2,4,5};
    cout << findMissing(nums);
    return 0;
}