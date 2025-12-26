// Find the Mean 

#include<iostream>
using namespace std;

int main(){
    int a[10],f,c;
    float sum,mean;
    cout<<"enter array size:";
    cin>>f;
    cout << "enter array elements:";
    for(c=0;c<=f;c++){
        cin >> a[c];
    }
    for(c=0;c<=f;c++){
        sum=sum+a[c];
        mean = sum/f;
    }
    cout << "mean is :"<<mean;
    return 0;
}
