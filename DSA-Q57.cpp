// Problem : Given an array, count how many subarrays have a sum equal to K.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,1,1};
    int k =2;
    int count =0;

   for(int i=0;i<arr.size();i++){
    int sum =0;

    for(int j=i;j<arr.size();j++){
        sum +=arr[j];

        if(sum == k){
            count++;
        }
    }
   }
    
    cout << count;

    return 0;
}