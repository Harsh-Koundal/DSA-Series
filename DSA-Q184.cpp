// Two Out of Three

/*
given three integers arrays nums1 , nums2, nums3 return a distinct array containing all the values that are present in at least two out of the three arrays you may return the values in any order
*/

#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

vector<int> twoOutOfThree(vector<int>& nums1,vector<int>& nums2,vector<int>& nums3){
    unordered_map<int,int> res;

    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());
    unordered_set<int> s3(nums3.begin(), nums3.end());

    for (int x : s1) res[x]++;
    for (int x : s2) res[x]++;
    for (int x : s3) res[x]++;

    vector<int> result;
    for(auto x : res){
        if(x.second>=2){
            result.push_back(x.first);
        }
    }
    return result;
}

int main(){
    vector<int> nums1 = {1,1,3,2};
    vector<int> nums2 = {2,3};
    vector<int> nums3 = {3};

    for(int x : twoOutOfThree(nums1,nums2,nums3)){
        cout << x << " ";
    }
    return 0;
}