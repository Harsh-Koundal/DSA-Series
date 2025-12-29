// Best Time To Buy and Sell Stock 

/*
You are given an array prices where prices[i] is the price of a given stock on the ith day
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int>& prices){
  int minPrice = INT_MAX;
  int maxProfit = 0;
  
  for(int price : prices){
    minPrice = min(minPrice,price);
    maxProfit = max(maxProfit, price-minPrice);
  }
  return maxProfit;

}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
    return 0;
}