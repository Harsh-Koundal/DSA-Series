//  Rank Transform of an Array

/*
Given an array of integers arr, replace each element with its rank.

The rank represents how large the element is. The rank has the following rules:

Rank is an integer starting from 1.
The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
Rank should be as small as possible
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> arrayRankTransform(vector<int>& arr){
    vector<int> copy;
    copy = arr;
    sort(copy.begin(),copy.end());

    unordered_map<int,int> rank;

    int r=1;
    
    for(int i=0;i<copy.size();i++){
        if(rank.find(copy[i]) == rank.end())
        rank[copy[i]] = r++;
    }

    for(int i=0;i<arr.size();i++)
    arr[i] = rank[arr[i]];

    return arr;

}


int main(){
    vector<int> arr = {40,10,20,30};
    for(int x : arrayRankTransform(arr))
    cout << x << " ";

    return 0;
}