// Baseball Game

/*
You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

An integer x.
Record a new score of x.
'+'.
Record a new score that is the sum of the previous two scores.
'D'.
Record a new score that is the double of the previous score.
'C'.
Invalidate the previous score, removing it from the record.
Return the sum of all the scores on the record after applying all the operations.

The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.
*/


#include<iostream>
#include<vector>
using namespace std;

int calPoints(vector<string>& operations){
    vector<int> record;

    for(string op : operations){
        if(op=="C") record.pop_back();
        else if(op=="D") record.push_back(2*record.back());
        else if(op=="+"){
            int last = record.back();
            int secondLast = record[record.size()-2];
            record.push_back(last+secondLast);
        }
        else{
            record.push_back(stoi(op));
        }
    }
    int sum = 0;
    for(int score : record) sum+=score;
    return sum;
}

int main(){
    vector<string> operations = {"5","2","C","D","+"};
    cout << calPoints(operations);
    return 0;
}