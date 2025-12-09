// Problem : Build an Array With Stack Operations

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> buildArray(vector<int>& target ,int n){
    vector<string> result;
    int curr = 1;
    for(int val : target){
        while(curr <val){
            result.push_back("Push");
            result.push_back("Pop");
            curr++;
        }
        result.push_back("Push");
        curr++;
    }
    return result;
}

int main(){
    vector<int> target = {1,3};
    int n = 3;
    vector<string> result = buildArray(target, n);

    for(string s: result){
        cout << s << " ";
    }
    return 0;
}