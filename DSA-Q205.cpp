// Assign Cookies

/*
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int j = 0;
    int i= 0;
    int count = 0;
    while(i<g.size() && j < s.size()){
        if(s[j]>= g[i]){
            count++;
            j++;
            i++;
        }else{
            j++;
        } 
    }
    return count;
}

int main(){
    vector<int> g = {1,2,3}, s = {1,1};

    cout << findContentChildren(g,s);
    return 0;
}