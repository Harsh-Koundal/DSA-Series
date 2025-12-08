// Problem : Count Square Sum Triples

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int countSquareSumTriples(int n){
    int count =0;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=n;b++){
            int cSquare = a*a + b*b;
            int c = sqrt(cSquare);
            if(c<=n && c*c == cSquare){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n =5;
    cout << countSquareSumTriples(n)<< endl;
    return 0;
}