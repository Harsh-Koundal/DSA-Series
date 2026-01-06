//  Intersection of Two Arrays II

/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> freq;
        vector<int> result;

        for(int num : nums1){
            freq[num]++;
        }

        for(int num : nums2){
            if(freq[num] > 0){
                result.push_back(num);
                freq[num]--;
            }
        }
        return result;
}

int main(){
    vector<int> nums1 = {1,2,2,1,9}, nums2 = {2,9,3,5,2};
    vector<int> res = intersect(nums1,nums2);
    for(int x : res){
        cout << " " << x;
    }
    return 0;
}