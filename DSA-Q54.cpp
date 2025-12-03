// Problem : Left Rotate Array by K Positions

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int k =2;

    int n = arr.size();
    k = k%n;

    reverse(arr.begin(), arr.begin() + k);

    reverse(arr.begin() + k, arr.end());

    reverse(arr.begin(), arr.end());

    for(int x :arr){
        cout << x << " ";
    }

    return 0;
}