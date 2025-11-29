// Problem: Count how many times a number appears in an array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
    int target = 2;
    int a = 0;

    for (int i = 0; i < arr.size(); i++){
        if(arr[i]==target){
            a++;
        }
    }
    cout << "target appeared :" << a;

    return 0;

}