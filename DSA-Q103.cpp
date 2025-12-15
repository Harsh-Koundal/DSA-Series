// Problem : Find Missing and Repeated Values

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
    int n = grid.size();
    int missing =-1,repeat=-1;

    unordered_map<int,int> freq;
    for(auto& row : grid){
        for(int num : row){
            freq[num]++;
        }
    }
    for(int num=1;num<=n*n;num++){
        if(!freq.count(num)){
            missing=num;
        }else if(freq[num]==2) repeat = num;
    }
    return {repeat,missing};
}

int main(){
    vector<vector<int>> grid ={
        {1,2},{2,4}
    };
    vector<int> ans = findMissingAndRepeatedValues(grid);
    cout <<"["<< ans[0]<<",";
    cout << ans[1]<<"]";
    return 0;
}