// Insert Delete GetRandom O(1)

#include <vector>
#include<unordered_map>
#include<cstdlib>
using namespace std;

class RandomizedSet{
    private:
    vector<int> arr;
    unordered_map<int, int> mp;

    public:
    RandomizedSet(){

    }

    bool insert(int val){
        if(mp.find(val) != mp.end()) return false;
        arr.push_back(val);
        mp[val] = arr.size()-1;
        return true;
    }

    bool remove(int val){
        if(mp.find(val)==mp.end()) return false;
        int idx = mp[val];
        int lastVal = arr.back();

        arr[idx] = lastVal;
        mp[lastVal] = idx;

        arr.pop_back();
        mp.erase(val);
        return true;
    }
    int getRandom(){
        int randomIndex = rand() % arr.size();
        return arr[randomIndex];
    }
};