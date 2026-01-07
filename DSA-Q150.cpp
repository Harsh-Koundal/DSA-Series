// Teemo Attacking

/*
You are given a non-decreasing integer array timeSeries, where timeSeries[i] denotes that Teemo attacks Ashe at second timeSeries[i], and an integer duration.
*/

#include<iostream>
#include<vector>
using namespace std;

int findPoisonedDuration(vector<int>& timeSeries, int duration){
    int total = 0;

    for(int i=0;i<timeSeries.size()-1;i++){
        int gap = timeSeries[i+1] - timeSeries[i];
        total += min(duration,gap);
    }
    total+=duration;
    return total;
}

int main(){
    vector<int> timeSeries = {1,4};
    int duration = 2;

    cout << findPoisonedDuration(timeSeries,duration);
    return 0;
}