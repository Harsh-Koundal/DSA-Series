// Valid Palindrome 

/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
*/

#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int left=0,right=s.size()-1;
    while(left<right){
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right])) right--;
        if(tolower(s[left])!= tolower(s[right]))return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s)){
        cout << "True";
    }else{
        cout << "false";
    }
    return 0;
}