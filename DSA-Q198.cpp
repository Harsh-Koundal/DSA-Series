// Minimum Pair Removal to Sort Array I

/*
Given an array nums, you can perform the following operation any number of times:

Select the adjacent pair with the minimum sum in nums. If multiple such pairs exist, choose the leftmost one.
Replace the pair with their sum.
Return the minimum number of operations needed to make the array non-decreasing.

An array is said to be non-decreasing if each element is greater than or equal to its previous element (if it exists).
*/



#include <iostream>
#include <vector>
using namespace std;

bool isNonDecreasing(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] < nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int minimumPairRemoval(vector<int>& nums) {
    int operations = 0;

    while(!isNonDecreasing(nums)) {
        int minSum = nums[0] + nums[1];
        int idx = 0;

        // Find leftmost adjacent pair with minimum sum
        for(int i = 1; i < nums.size() - 1; i++) {
            int currentSum = nums[i] + nums[i + 1];
            if(currentSum < minSum) {
                minSum = currentSum;
                idx = i;
            }
        }

        // Replace the pair with their sum
        nums[idx] = nums[idx] + nums[idx + 1];
        nums.erase(nums.begin() + idx + 1);

        operations++;
    }

    return operations;
}

int main() {
    vector<int> nums = {5, 2, 3, 1};
    cout << minimumPairRemoval(nums);
    return 0;
}
