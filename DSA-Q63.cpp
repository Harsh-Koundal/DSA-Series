/** 
 Problem : Given an nums of size n, return the majority elements.
 the majority elements is the element that appears more then [n/2] times. you may assume that the majority element always exists in the array
 */

 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

  int majorityElement(vector<int>&nums){
    int n = nums.size();
    for(int val : nums){
        int frq = 0;
        for(int el : nums){
            if(el == val){
                frq++;
            }
        }
        if(frq >n/2){
            return val;
        }
    }
    return -1;
  }
  int majorityElement1(vector<int>&nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());

    int frq = 1 , ans =nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            frq++;
        }else{
            frq=1;
            ans = nums[i];
        }
        if(frq > n/2){
            return ans;
        }
    }
    
  }

  int majorityElement2(vector<int>&nums){
    int frq = 0 ,ans =0;
    
    for(int i=0;i<nums.size();i++){
        if(frq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            frq++;
        }else{
            frq--;
        }
    }
    return ans;
  }

  int main(){
    vector<int> nums = {3,2,3};

    // int maj = majorityElement(nums);
    // int maj = majorityElement1(nums);
    int maj = majorityElement2(nums);
    cout<<maj;
    return 0;
  }
