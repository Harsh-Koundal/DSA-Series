//  Intersection of Two Arrays

/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1 , vector<int>& nums2){
    unordered_set<int> s(nums1.begin(),nums1.end());
    vector<int> result;

    for(int num : nums2){
        if(s.count(num)){
            result.push_back(num);
            s.erase(num);
        }
    }
    return result;
}

int main(){
    vector<int> nums1 = {1,2,2,1,9}, nums2 = {2,9};
    vector<int> res = intersection(nums1,nums2);
    for(int x : res){
        cout << " " << x;
    }
    return 0;
}