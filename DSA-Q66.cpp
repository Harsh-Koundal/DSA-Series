// Problem : Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.


#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s){
    vector<char> stack;
    for(char ch : s){
        if(ch == '(' || ch == '{' || ch == '['){
            stack.push_back(ch);
        }else{
            if(stack.empty()) return false;
            char top = stack.back();
            stack.pop_back();
            if(ch == ')' && top != '(' ){
                return false;
            }else if(ch == '}' && top != '{' ){
                return false;
            }else if(ch == ']' && top != '['){
                return false;
            }
        }

    }
    return stack.empty();
}

int main(){
    string s = "{[]}";

    cout << isValid(s);
    return 0;
}