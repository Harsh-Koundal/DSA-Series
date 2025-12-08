// Problem : Shuffle the array 

#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffleArray(vector<int>& nums, int n){
    vector<int> result(2*n);
    for(int i=0;i<n;i++){
        result[2*i] = nums[i];
        result[2*i+1] = nums[i+n];
    }
    return result;
}
int main(){
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> shuffled = shuffleArray(nums, n);

    for(int val :shuffled){
        cout << val << " ";
    }
    return 0;
}