// Time Needed to Buy Tickets

/*
There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line.

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i].

Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line.

Return the time taken for the person initially at position k (0-indexed) to finish buying tickets.
*/

#include<iostream>
#include<vector>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets,int k){
    int time = 0;

    for(int i=0;i<tickets.size();i++){
        if(i<=k){
            time+=min(tickets[i],tickets[k]);
        }else{
            time +=min(tickets[i],tickets[k]-1);
        }
    }
    return time;
    
}

int main(){
    vector<int> tickets = {2,3,2};
    int k = 2;

    cout << timeRequiredToBuy(tickets,k);
    return 0;
}