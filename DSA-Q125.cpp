//  Gas Station 

/*
Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.
*/

#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
    int totalGas = 0, currGas=0,start=0;
    for(int i=0;i< gas.size();i++){
        int diff = gas[i] - cost[i];
        totalGas +=diff;
        currGas +=diff;

        if(currGas<0){
            start = i+1;
            currGas=0;
        }
    }
    return (totalGas >=0) ? start :-1;
}

int main(){
    vector<int> gas = {1,2,3,4,5} , cost = {3,4,5,1,2};
    cout << canCompleteCircuit(gas,cost);
    return 0;
}