// Minimum Index Sum of Two Lists

/*
Given two arrays of strings list1 and list2, find the common strings with the least index sum.

A common string is a string that appeared in both list1 and list2.

A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings.

Return all the common strings with the least index sum. Return the answer in any order.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string> list2){
    unordered_map<string , int>indexMap;
    vector<string> result;
    int minSum = INT_MAX;

    for(int i=0;i<list1.size();i++){
        indexMap[list1[i]] = i;
    }

    for(int j=0;j<list2.size();j++){
        if(indexMap.count(list2[j])){
            int sum = j + indexMap[list2[j]];

            if(sum < minSum){
                minSum = sum;
                result.clear();
                result.push_back(list2[j]);
            }
            else if(sum==minSum){
                result.push_back(list2[j]);
            }
        }
    }
    return result;

}

int main(){
    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 = {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};
    vector<string> res = findRestaurant(list1,list2);
    for(string s : res){
        cout << s << "";
    }
}
