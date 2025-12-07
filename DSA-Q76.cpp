// Problem : Two Sum (Optimized O(n) using Hashmap)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> nums = {2,4,6,7,11,15};
    int target = 9;

    unordered_map<int , int> numMap;
    for(int i=0;i<nums.size();i++){
        int current = nums[i];
        int needed = target - current;

        if(numMap.find(needed)!=numMap.end()){
            cout << numMap[needed] << " " <<i <<endl;
            return 0;
        }
        numMap[current] = i;
    }

    cout << "No two sum solution found" << endl;
    return 0;
}