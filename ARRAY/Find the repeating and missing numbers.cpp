#include <bits/stdc++.h>
using namespace std;

vector<int> repeating_and_missing_numbers(vector<int> arr, int k)
{
    int repeating = -1;
    int missing = -1;
    vector<int> ans;

    for (int i = 1; i < k; i++)
    {
        int cnt = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i)
                cnt++;
        }
        if (cnt == 2)
        {
            repeating = i;
            ans.push_back(repeating);
        }
        if (cnt == 0)
        {
            missing = i;
            ans.push_back(missing);
        }
        if (repeating != -1 && missing != -1)
            break;
    }

    return ans;
}

vector<int> findMissingAndRepeatingBatter(const vector<int> &arr, int k)
{
    int n = arr.size();
    if (n < k)
    {
        throw invalid_argument("Array size must be at least k");
    }

    int missingElement = -1;
    int repeatingElement = -1;

    vector<int> hashArr(k + 1, 0); // Initialize hash array with k+1 zeros

    // Populate the hash array with the count of each element in arr
    for (int num : arr)
    {
        if (num >= 1 && num <= k)
        {
            hashArr[num]++;
        }
        else
        {
            throw out_of_range("Array elements must be in the range 1 to k");
        }
    }

    // Identify the missing and repeating elements
    for (int i = 1; i <= k; ++i)
    {
        if (hashArr[i] == 0)
        {
            missingElement = i;
        }
        else if (hashArr[i] > 1)
        {
            repeatingElement = i;
        }
    }

    return {missingElement, repeatingElement};
}

vector<int> findMissingRepeatingNumbersOptimal(vector<int> arr)
{
    long long n = arr.size();

    // sn - s == x-y
    // s2n - s2 == x2 - y2

    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }

    // S-Sn = X-Y:
    long long val1 = S - SN;

    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    // Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

vector<int>

    int main()
{

    vector<int> arr = {3, 4, 2, 1, 6, 4};
    int k = 6;
    vector<int> ans = findMissingRepeatingNumbersOptimal(arr, k);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}

/*
brute force approach :
tc - O(N^2);   and sc: O(1);

batter approach :
tc: O(2n) and sc: O(n);

batter approach
tc:O(n);
sc:O(1);

*/
