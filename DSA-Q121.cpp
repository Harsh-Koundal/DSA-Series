// Jump Game II

/*
Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at index i, you can jump to any index (i + j) where:
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int jump(vector<int>& nums){
    int jump =0,currentEnd=0,farthest=0;
    for(int i=0;i<nums.size()-1;i++){
        farthest = max(farthest,i+nums[i]);
        if(i==currentEnd){
            jump++;
            currentEnd = farthest;
        }
    }
    return jump;
}

int main(){
    vector<int> nums = {2,3,1,1,4};
    cout << jump(nums);
    return 0;
}