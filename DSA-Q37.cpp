// Problem: Reverse the elements of an array.

#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int start = 0;
    int end = arr.size() - 1;
    
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int x : arr){
        cout << x << " ";
    }

    return 0;
}