// Find Missing and Repeated Values

/*
You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
*/

#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    int n = grid.size();
    int missing =-1,repeat = -1;
    unordered_map<int,int> freq;
    for(auto x : grid){
        for(int y : x) freq[y]++;
    }
    for(int num=1;num<=n*n;num++){
        if(!freq.count(num)) missing = num;
        else if(freq[num]==2) repeat = num;
    }
    
    return {repeat,missing};
}

int main()
{
    vector<vector<int>> grid = {{1, 3}, {2, 2}};
    for (int x : findMissingAndRepeatedValues(grid))
        cout << x << " ";

    return 0;
}