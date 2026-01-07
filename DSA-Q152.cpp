// Summary Ranges

/*
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
*/

#include<iostream>
#include<vector>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    int n = nums.size();

    if (n == 0) return result;

    int start = nums[0];
    int end = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] == end + 1) {
            // continue the range
            end = nums[i];
        } else {
            // close the current range
            if (start == end) {
                result.push_back(to_string(start));
            } else {
                result.push_back(to_string(start) + "->" + to_string(end));
            }
            // start new range
            start = nums[i];
            end = nums[i];
        }
    }

    // handle last range
    if (start == end) {
        result.push_back(to_string(start));
    } else {
        result.push_back(to_string(start) + "->" + to_string(end));
    }

    return result;
}

int main() {
    vector<int> nums = {0,1,2,4,5,7};
    vector<string> res = summaryRanges(nums);

    for (string s : res) {
        cout << s << " ";
    }
    return 0;
}
