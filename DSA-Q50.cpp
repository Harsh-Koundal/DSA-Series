// Find the Missing Number

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,4,5};
    int n = arr.size() + 1;
    int totalSum = n*(n+1)/2;

    int arrSum =0;
    for(int num : arr){
        arrSum += num;
    }

    int missing = totalSum - arrSum;
    cout << missing <<endl;
    return 0;
}