// Calculate N factorial 

#include<iostream>
using namespace std;

int fac(int n){
   int fact = 1;
   for(int i=1;i<=n;i++){
    fact *=i;
   } 
   return fact;
}

int main(){
    cout << "Factorial is:" << fac(5) <<endl;
    return 0;
}