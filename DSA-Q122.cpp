// H-Index

/*
Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int hIndex(vector<int>& citations){
    int h=0,n=citations.size();
    sort(citations.begin(),citations.end());
    for(int i=0;i<n;i++){
        if(citations[i]>=(n-i)){
            h++;
        }
    }
    return h;
}

int main(){
    vector<int> citations = {3,0,6,1,5};
    cout << hIndex(citations);
    return 0;
}