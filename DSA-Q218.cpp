// Sort Integers by The Number of 1 Bits

/*
you are given an integer array arr. sort the integers in the array in ascending order by the number of 1's you have to sort themm in ascending order 

Return the array after sorting it
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countBits(int n){
    int count = 0;
    while(n>0){
        n = n &(n-1);
        count++;
    }
    return count;
}
vector<int> sortByBits(vector<int>& arr){
    sort(arr.begin(),arr.end(),[](int a,int b){

        int bitsA = countBits(a);
        int bitsB = countBits(b);
        
        if(bitsA == bitsB)
        return a < b;
        return bitsA < bitsB;
    });
    return arr;

}

int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    for(int x : sortByBits(arr))
    cout << x << " ";

    return 0;
}