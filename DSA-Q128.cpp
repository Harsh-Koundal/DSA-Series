// Roman To Integer

/*
Given a roman numeral, convert it to an integer.
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int romanToInt(string s){
    unordered_map<char,int> value = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    int total=0;
    for(int i=0;i<s.length();i++){
        if(i+1<s.length() && value[s[i]]<value[s[i+1]]){
            total -=value[s[i]];
        }else{
            total+=value[s[i]];
        }
    }
    return total;
}

int main(){
    string  s = "III";
    cout << romanToInt(s);
    return 0;
}