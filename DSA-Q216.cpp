// Minimum ABsolute Difference

/*
Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

a, b are from arr
a < b
b - a equals to the minimum absolute difference of any two elements in arr
*/

#include <iostream>
#include <vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int> &arr){
    vector<vector<int>> res;
    
    sort(arr.begin(),arr.end());

    int minDiff = INT_MAX;
    for(int i=1;i<arr.size();i++){
        minDiff = min(minDiff,arr[i] - arr[i-1]);
    }

    for(int i=1;i<arr.size();i++){
        if(arr[i]-arr[i-1] == minDiff)
        res.push_back({arr[i-1],arr[i]});
    }
    return res;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3};
    vector<vector<int>> ans = minimumAbsDifference(arr);

    for (auto pair : ans)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    return 0;
}