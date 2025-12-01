/**\
A
AB
ABC
ABCD
ABCDE
 */


#include<iostream>
using namespace std;

int main(){
    int a =0;
    for(int i=0;i<5;i++){
        char ch = 'A';
        a++;
        for(int j=0;j<a;j++){
            cout << ch <<"";
            ch = ch +1;
        }
        cout<<endl;
    }
}