// Best Time to Buy and Sell Stock II

/*
On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can sell and buy the stock multiple times on the same day, ensuring you never hold more than one share of the stock.
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit =0;

    for(int i=1;i<prices.size();i++){
        if(prices[i]>prices[i-1]){
            profit +=prices[i] - prices[i-1];
        }
    }
    return profit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
    return 0;
}