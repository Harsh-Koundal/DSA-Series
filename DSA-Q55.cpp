// Problem : Given an array and a number k, find the maximum sum of any subarray of size k.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int windowSum = 0;
    int maxSum = 0;
    
for(int i =0;i<k;i++){
    windowSum +=arr[i];
}
maxSum = windowSum;
for(int i = k; i< arr.size();i++){
    windowSum +=arr[i] - arr[i-k];
    maxSum = max(maxSum, windowSum);
}

cout << "Maximum sum of subarray of size k is:" <<maxSum;

return 0;

}
