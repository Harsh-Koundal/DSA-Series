// Bitwise operators 


#include<iostream>
using namespace std;

int main(){
    int a = 4 , b = 8;
    
    cout << (a & b) <<endl; // Bitwise AND result 0
    cout << (a | b) <<endl; // Bitwise OR result 12
    cout << (a ^ b) <<endl; // Biwise XOR  result 12

    cout << (4 << 1) <<endl; // Bitwise Left Shift result 8
    cout << (4 >> 1) <<endl; // Bitwise Right Shift result 2
    return 0;
}