// Reverse Words in a String 

/*
Return a string of the words in reverse order concatenated by a single space.
*/

#include<iostream>
#include<algorithm>
using namespace std;

string reverseWords(string s){
    int n = s.length(),idx=0;
    reverse(s.begin(),s.end());
    int start =0;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            if(idx !=0){
                s[idx++]=' ';
            }
            int j=i;
            while(j<n && s[j] !=' '){
                s[idx++] = s[j++];
            }
            reverse(s.begin()+idx - (j-i),s.begin() + idx);
            i=j;
        }
    }
    s.resize(idx);
    return s;
}

int main(){
    string s = " hello world ";
    cout << reverseWords(s);
    return 0;
}