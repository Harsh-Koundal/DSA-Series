// Problem: Find the largest number in an array
#include<iostream>
using namespace std;

int main(){
    int n =5;
    int arr[] = {3,7,1,9,2};
    int maxNum = arr[0]
;

for (int i = 1; i < n; i++){
    if (arr[i]>maxNum){
        maxNum = arr[i];
    }
}
cout << "Largest number:"<< maxNum;
return 0;
}