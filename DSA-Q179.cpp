// Defuse the Bomb

/*
You have a bomb to defuse, and your time is running out! Your informer will provide you with a circular array code of length of n and a key k.

To decrypt the code, you must replace every number. All the numbers are replaced simultaneously.

If k > 0, replace the ith number with the sum of the next k numbers.
If k < 0, replace the ith number with the sum of the previous k numbers.
If k == 0, replace the ith number with 0.
As code is circular, the next element of code[n-1] is code[0], and the previous element of code[0] is code[n-1].

Given the circular array code and an integer key k, return the decrypted code to defuse the bomb!
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> decrypt(vector<int> &code, int k)
{
    int n = code.size();
    vector<int> res(n, 0);
    if (k == 0)
        return res;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        if (k > 0)
        {
            for (int j = 1; j <= k; j++)
            {
                sum += code[(i + j) % n];
            }
        }
        else
        {
            for (int j = 1; j <= -k; j++)
            {
                sum += code[(i - j + n) % n];
            }
        }
        res[i] = sum;
    }
    return res;
}

int main()
{
    vector<int> code = {5, 7, 1, 4};
    int k = 3;
    for (int x : decrypt(code, k))
    {
        cout << x << " ";
    }
    return 0;
}