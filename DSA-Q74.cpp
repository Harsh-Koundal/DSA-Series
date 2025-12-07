// Problem : Best Time to Buy and Sell Stock

#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
     int maxProfit =0, bestBuy = prices[0];
     for(int i=0;i<prices.size();i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
     }
     return maxProfit;
}
int main(){
    vector<int> prices = {7,1,5,6,2,8,5};
    cout << maxProfit(prices);
    return 0;
}