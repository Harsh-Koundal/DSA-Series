// Problem : Count Odd Numbers in an Interval Range

#include<iostream>
using namespace std;

int countOdds(int low,int high){
    int count =0;
    for(int i=low;i<high;i++){
        if(i%2!=0) count++;
        return count;
    }
    return 0;
}

int main(){
    int low = 3, high = 7;
    cout << countOdds(low, high);
    return 0;
}