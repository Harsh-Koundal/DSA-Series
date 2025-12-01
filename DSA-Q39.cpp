//Problem: Remove Duplicates from Sorted Array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 1, 2, 2, 2, 3, 4, 4};
    vector<int> sortArr;

    sortArr.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[i-1]){
            sortArr.push_back(arr[i]);
        }
    }
    cout << "Sorted array without duplicates : ";
    for(int x:sortArr){
        cout << x << "";
    }

    return 0;
}