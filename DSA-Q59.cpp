//  Given a non-empty array of integers nums, every element appears twice expect for one. Find that single one.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 2, 1, 3, 3, 1, 5};
    int uni = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            uni = arr[i];
        }
    }
    cout << uni;
    return 0;
}