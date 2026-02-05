// Maximum Units on a Truck 

/*
You are assigned to put some amount of boxes onto one truck. You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:

numberOfBoxesi is the number of boxes of type i.
numberOfUnitsPerBoxi is the number of units in each box of the type i.
You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck. You can choose any boxes to put on the truck as long as the number of boxes does not exceed truckSize.

Return the maximum total number of units that can be put on the truck.
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize){
    sort(boxTypes.begin(),boxTypes.end(),[](vector<int>& a , vector<int>& b){
        return a[1] > b[1];
    });
    int totalUnits = 0;

    for(auto box : boxTypes){
        if(truckSize == 0) break;
        int boxesTaken = min(box[0],truckSize);
        totalUnits += boxesTaken*box[1];
        truckSize -= boxesTaken;
    }
    return totalUnits;
}

int main(){
    vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}};
    int truckSize = 4;
    
    cout << maximumUnits(boxTypes,truckSize);
    return 0;
}