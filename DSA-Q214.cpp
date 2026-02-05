// Height Checker 

/*
A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.

You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).

Return the number of indices where heights[i] != expected[i].
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int heightChecker(vector<int>& heights){
    int count = 0;
    vector<int> sorted = heights;
    sort(sorted.begin(),sorted.end());

    for(int i =0;i<heights.size();i++){
        if(sorted[i]!=heights[i]) count++;
    }
    return count;

}

int main(){
    vector<int> heights = {1,1,4,2,1,3};
    cout << heightChecker(heights);
    return 0;
}