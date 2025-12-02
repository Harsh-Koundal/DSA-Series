// Problem : Given an array, rotate it left by 1 position

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int stored = arr[0];
    
    for(int i =0; i<arr.size()-1;i++){
        arr[i] = arr[i+1];
    }
    arr[arr.size()-1] = stored;
    for(int x :arr){
        cout << " " << x;
    }
    return 0;
}