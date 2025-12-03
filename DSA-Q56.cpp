// Problem : reverse an array 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int start = 0 , end = arr.size()-1;

    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}