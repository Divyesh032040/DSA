#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            return true;
    }
    return false;
}

int longestConsecutiveSequenceBrute(int arr[], int n)
{
    int longest = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        counter = 1;
        while (linearSearch(arr, n, x + 1) == true)
        {
            counter = counter + 1;
            x = x + 1;
        }
        longest = max(longest, counter);
    }
    return longest;
}

int LongestConsecutiveSequenceBatter(vector<int> a)
{
    int n = a.size();

    int longest = 1;
    int prevElement = INT_MIN;
    int currentCounter = 1;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        if (x - 1 == prevElement)
        {
            currentCounter += 1;
            prevElement = a[i];
        }
        else
        {
            prevElement = a[i];
            currentCounter = 1;
        }
        longest = max(longest, currentCounter);
    }
    return longest;
}

int LongestConsecutiveSequenceOptimal(vector<int> a)
{
    int n = a.size();

    int longest = 0;
    unordered_set<int> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(a[i]);
    }

    for (auto it : set)
    {
        if (set.find(it - 1) == set.end())
        {
            int cnt = 1;
            int x = it;
            while (set.find(x + 1) != set.end())
            {
                cnt += 1;
                x = x + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{

    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = LongestConsecutiveSequenceBrute(a);
    cout << "The longest consecutive sequence is " << ans << "\n";

    return 0;
}