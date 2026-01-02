// Zigzag Conversion

/*
Write the code that will take a string and make this conversion given a number of rows:
*/

#include<iostream>
#include<vector>
using namespace std;

string convert(string s,int numRows){
    if(numRows == 1 ||s.size() <= numRows) return s;
    vector<string> rows(numRows);
    int currentRow =0;
    bool goingDown = false;

    for(char c : s){
        rows[currentRow] +=c;
        if(currentRow == 0 || currentRow == numRows - 1)
        goingDown = !goingDown;

        currentRow += goingDown ? 1 : -1;
    }
    string result;
    for(string row : rows) result += row;
    return result;
}

int main(){
    string s="PAYPALISHIRING";
    int numRows = 3;
    cout << convert(s,numRows);
    return 0;
}