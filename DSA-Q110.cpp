// check is Palindrome

#include<iostream>
using namespace std;

bool isPalindrome(int x){
    string n = to_string(x);
    int left=0,right=n.size()-1;

    while(left<right){
        if(n[left]!=n[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    int x = 121;
    if(isPalindrome){
        cout <<"true";
    }else{
        cout << "false";
    }

    return 0;
}