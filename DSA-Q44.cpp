/**
A
BB
CCC
DDDD
EEEEE 
*/
#include<iostream>
using namespace std;

int main(){
    int n =5;
    char ch = 'A';
    int a = 0;
    for(int i=0; i<n;i++){
        a++;
        for(int j=0;j<a;j++){
            cout << ch << "";
        }
        ch = ch + 1;
        cout << endl;
    }
}