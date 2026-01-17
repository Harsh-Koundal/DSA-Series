// Average Salary Excluding the Minimum and Maximum Salary 

/*
You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

double average(vector<int>& salary){
    int minSal = INT_MAX;
    int maxSal = INT_MIN;
    double sum =0;

    for( int x : salary){
        minSal = min(minSal,x);
        maxSal = max(maxSal,x);
        sum +=x;
    }
    return (sum - minSal - maxSal)/(salary.size()-2);
}

int main(){
    vector<int> salary = {4000,3000,1000,2000};
    cout << average(salary);
    return 0;
}