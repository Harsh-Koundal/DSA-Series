// Binary search implementation to find the index of a target element in a sorted array

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> & arr,int target){
    int left =0,right = arr.size()-1;
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid]==target) return mid;
        else if (arr[mid]<target) left = mid+1;
        else right = mid-1;
    }
    return -1;
}

int main(){
    vector<int> arr = {1,1,1,2,3,4,6,7,9,67};
    int target = 9;
    int idx = binarySearch(arr,target);
    cout<<idx;
    return 0;
}