//  print star pattern 

#include<iostream>
using namespace std;

int main(){

    int str = 0;
    for(int i=0;i<=5;i++){
        str++;
        for(int j =0;j<str;j++){
            cout << "*";
        }
        cout << endl;
    }
}