// Move Zeroes

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeroes(vector<int> &nums)
{
    int pos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[pos] = nums[i];
            pos++;
        }
    }
    for(int i=pos;i<nums.size();i++){
        nums[i] = 0;
    }
    return nums;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 2, 4};
    vector<int> res = moveZeroes(nums);
    for (int x : res)
    {
        cout << " " << x;
    }
    return 0;
}