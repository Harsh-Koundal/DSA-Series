// Check if N and Its Double Exists

/*
Given an array arr of integers, check if there exist two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]

*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool checkIfExists(vector<int>& arr){
    unordered_set<int> seen;

    for(int x : arr){
        if(seen.count(2*x)) return true;
        if(x%2==0 && seen.count(x/2)) return true;

        seen.insert(x);
    }
    return false;

}

int main(){
    vector<int> arr = {10,2,5,3};
    cout<< (checkIfExists(arr) ? "True" : "False");
    return 0;
}
