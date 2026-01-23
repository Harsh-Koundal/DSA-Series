// Convert Integer to the Sum of Two No-Zero Integers

/*
No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

Given an integer n, return a list of two integers [a, b] where:

a and b are No-Zero integers.
a + b = n
The test cases are generated so that there is at least one valid solution. If there are many valid solutions, you can return any of them.
*/

#include<iostream>
#include<vector>
using namespace std;

bool hasZero(int x){
    while(x>0){
        if(x%10==0) return true;
        x/=10;
    }
    return false;
}

vector<int> getNoZeroIntegers(int n){
    for(int a =1;a<n;a++){
        int b = n-a;
        if(!hasZero(a) && !hasZero(b)){
            return {a,b};
        }
    }
    return {};
}

int main(){
    int n = 11;
    for(int x : getNoZeroIntegers(n))
    cout << x << " ";

    return 0;
}