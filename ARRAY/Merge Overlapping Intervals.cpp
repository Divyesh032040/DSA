#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervalBrute(vector<vector<int>> arr)
{
    int n = arr.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {

        int start = arr[i][0];
        int end = arr[i][1];

        // skip all the merged interval
        if (!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j][0] <= end)
            {
                end = max(end, arr[j][1]);
            }
            else
            {
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}

vector<vector<int>> mergeOptimal(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        // case where we have to put pair inside a ans vector
        if (ans.empty() || intervals[i][0] > ans.back()[1])
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            // case where we found non merged pair
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
}

int main()
{

    int n = 5;
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervalBrute(arr);

    for (auto it : ans)
    {
        cout << "[" << it[0] << "," << it[1] << "]" << endl;
    }

    return 0;
}

// time complexity of brute : O(n log) for sorting + 2*n because we go 2 times from every elem
//  so tc : O(n log n + 2n ) and sc : O(N);