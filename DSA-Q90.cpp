// Program to check if a given string is a palindrome

#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(const string & s){
    int left=0, right=s.size()-1;
    while(left<right){
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right])) right--;
        if(tolower(s[left])!=tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s))cout << " is  a palindrome.";
    else cout << " is not a palindrome.";
    return 0;
}