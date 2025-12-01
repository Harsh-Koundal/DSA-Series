// Problem: Given an array, check whether it is sorted in non-decreasing order.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    bool sorted = true;
    for (int i = 0; i < arr.size()-1; i++){
        if (arr[i]> arr[i+1]){
            sorted = false;
        }
        
    }
    if (sorted)
    {
       cout << "Yes";
    }else{
        cout << "No";
    }
    
    
}