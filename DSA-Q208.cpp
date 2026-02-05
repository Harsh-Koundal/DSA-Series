// Majority Element Using Hash Map

/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate = 0;
    int count =0;
    unordered_map<int, int> freq;
    for (int num : nums)
        freq[num]++;

    for (auto x : freq)
    {
        if (x.second > count)
        {
            count = x.second;
            candidate = x.first;
        }
    }

    return candidate;
}

int main(){
    vector<int> nums = {3,2,3};
    cout << majorityElement(nums);
    return 0;
}