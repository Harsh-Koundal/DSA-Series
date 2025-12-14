// Problem : Painter's Partition 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;


bool isPossible(vector<int>& nums,int n,int m,int maxAllowedTime){
    int painters=1,time=0;
    for(int i=0;i<n;i++){
        if(time+nums[i]<=maxAllowedTime){
            time +=nums[i];
        }else{
            painters++;
            time = nums[i];
        }
    }
    return painters <=m ? true:false;
}
int minTimeToPaint(vector<int>& nums,int n, int m){
    int sum=0,maxVal = INT_MIN; 
    for(int i=0;i<n;i++){
        sum +=nums[i];
        maxVal = max(maxVal,nums[i]);
    }
    int st = maxVal,end=sum,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(nums,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
           st = mid+1; 
        }
    }
}


int main(){
    vector<int> nums = {40,30,10,20};
    int n=4,m=2;
    cout << minTimeToPaint(nums,n,m);
    return 0; 
}