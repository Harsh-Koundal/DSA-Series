// Count Negative Numbers in a sorted Matrix 

/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
*/

#include<iostream>
#include<vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    cout << rows << "\n";
    cout << cols << "\n";

    int r = 0;
    int c = cols -1;
    int count = 0;
    
    while(r < rows && c >=0){
        if(grid[r][c] < 0){
            count +=(rows-r);
            c--;
        }else{
            r++;
        }
    }
    return count;
}

int main(){
    vector<vector<int>> grid = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    cout << countNegatives(grid);
    return 0;
}