// Problem: Find the sum of all elements in an array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5, 3, 8, 2, 7};
    int sum = 0;

    for (int i = 0; i < arr.size(); i++){
        sum +=arr[i];
    }
    
    cout << "sum of array is :" << sum;
}