// Relative Sort Array 

/*
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1,vector<int>& arr2){
    unordered_map<int,int> freq;
    for(int x : arr1)
    freq[x]++;

    vector<int> res;

    for(int x : arr2){
        while(freq[x] > 0){
            res.push_back(x);
            freq[x]--;
        }
    }

    vector<int> remaining;
    for(auto it : freq){
        while(it.second > 0){
            remaining.push_back(it.first);
            it.second--;
        }
    }

    sort(remaining.begin(),remaining.end());

    res.insert(res.end(),remaining.begin(),remaining.end());

    return res;

}

int main(){
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    for(int x : relativeSortArray(arr1,arr2))
    cout << x << " ";

    return 0;
}