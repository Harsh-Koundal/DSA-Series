// Mean of Array After Removing Some Elements

/*
Given an integer array arr, return the mean of the remaining untegers after removing the smallest 5% and the largest 5% of the elements

Answers within 10-5 of the actual answer will be considered accepted.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double trimMean(vector<int>& arr){
    int n = arr.size();

    sort(arr.begin(),arr.end());

    double sum = 0;

    int remove = n/20;

    for(int i=remove;i<n-remove;i++){
        sum += arr[i];
    }
    return sum/(n-2* remove);
}

int main(){
    vector<int> arr = {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3};
    cout << trimMean(arr);
    return 0;
}