// Problem: Find the smallest number in an array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr =  {10, 4, 7, 2, 15};
    int minarr = arr[0];
    
    for (int i = 1; i < arr.size(); i++){
        if(arr[i]<minarr){
            minarr = arr[i];
        }
    }

    cout << "Minimum value :" << minarr;
    return 0;
    
}