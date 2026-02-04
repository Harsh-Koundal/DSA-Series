// Largest Number

/*
Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string largestNumber(vector<int>& nums){
    vector<string> strNums;
    for(int num : nums){
        strNums.push_back(to_string(num));
    }

    sort(strNums.begin(), strNums.end(), [](const string &a, const string &b) {
        return a + b > b + a;
    });

    string result = "";
    for(const string& s : strNums){
        result += s;
    }

    return result[0] == '0' ? "0" : result;
}

int main(){
    vector<int> nums = {3,30,34,5,9};
    cout << largestNumber(nums);
    return 0;
}