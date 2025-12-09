// Problem : Find All Numbers Disappeared in an Array

#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums){
    int n = nums.size();
    vector<bool> present(n+1, false);
    for(int num : nums){
        present[num] = true;
    }

    vector<int> result;
    for(int i=1;i<=n;i++){
        if(!present[i]){
            result.push_back(i);
        }
    }
    return result;
}

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumbers(nums);
    for(int num : result){
        cout << num << " ";
    }
    return 0;
}