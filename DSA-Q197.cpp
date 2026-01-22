// Find the Difference of Two Arrays

/*
Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
Note that the integers in the lists may be returned in any order.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());

    vector<int> diff1;
    vector<int> diff2;

    for (int x : s1)
    {
        if (s2.find(x) == s2.end())
        {
            diff1.push_back(x);
        }
    }

    for (int x : s2)
    {
        if (s1.find(x) == s1.end())
        {
            diff2.push_back(x);
        }
    }

    return {diff1, diff2};
}

int main()
{
    vector<int> nums1 = {1, 2, 3}, nums2 = {2, 4, 6};
    vector<vector<int>> res = findDifference(nums1, nums2);

    for (auto row : res)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
    }
}