// Problem : Container With Most Water

#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height){
    int left =0, right = height.size()-1;
    int maxArea =0;
    while(left < right){
        int width = right - left;
        int ht = min(height[left], height[right] );
        maxArea = max(maxArea, width *ht);
        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxArea;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height);
    return 0;
}