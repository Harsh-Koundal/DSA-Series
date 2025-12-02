/**Problem : Given an array, move all zeros to the end while keeping non-zero elements in the same order. */

#include<iostream>
#include<vector>
using namespace std;

int main(){
 
    vector<int> arr ={0,1,2,0,3,12};
    int slow =0;
    for(int fast = 0;fast<arr.size();fast++){
        if(arr[fast] != 0){
        swap(arr[slow],arr[fast]);
        slow++;
        }
    }
    for(int x :arr){
        cout << " " << x;
    }
    return 0;
}