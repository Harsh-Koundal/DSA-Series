// Number of Students Doing Homework at a Given Time 

/*
Given two integer arrays startTime and endTime and given an integer queryTime.

The ith student started doing their homework at the time startTime[i] and finished it at time endTime[i].

Return the number of students doing their homework at time queryTime. More formally, return the number of students where queryTime lays in the interval [startTime[i], endTime[i]] inclusive.
*/

#include<iostream>
#include<vector>
using namespace std;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime){
    int count = 0;
    for(int i=0;i<startTime.size();i++){
        if(startTime[i]<=queryTime && queryTime <= endTime[i]) count++;
    }
    return count;
}

int main(){
    vector<int> startTime = {1,2,3}, endTime = {3,2,7};
    int queryTime = 4;
    
    cout << busyStudent(startTime,endTime,queryTime);
    return 0;
}