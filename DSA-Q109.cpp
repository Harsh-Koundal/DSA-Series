// Find the Mean 

#include<iostream>
using namespace std;

int main(){
    int a[10]={10,20,30,40,50},f=4,c;
    float sum,mean;
    for(c=0;c<=f;c++){
        sum=sum+a[c];
        mean = sum/f;
    }
    cout << "mean is :"<<mean;
    return 0;
}
