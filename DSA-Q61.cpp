// Problem : Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        string pal = to_string(x);
        int left=0;
        int right=pal.size()-1;
        
        while(left<right){
            if(pal[left]!=pal[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};