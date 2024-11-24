#include <bits/stdc++.h>
using namespace std;
//4 sum
vector<vector<int>> four_sum_brute_force(vector<int> arr, int target)
{
    int n = arr.size();
    set<vector<int>> set;

    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            for (int c = b + 1; c < n; c++)
            {
                for (int d = c + 1; d < n; d++)
                {
                    int sum = arr[a] + arr[b];
                    sum += arr[c];
                    sum += arr[d];
                    if (sum == target)
                    {
                        vector<int> temp = {arr[a], arr[b], arr[c], arr[d]};
                        sort(temp.begin(), temp.end());
                        set.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(set.begin(), set.end());
    return ans;
}

vector<vector<int>> four_sum_batter(vector<int> nums, int target)
{
    set<long long> hashSet;
    set<vector<int>> set;
    long long sum;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                long long sum = (nums[i] + nums[j] + nums[k]);
                long long fourth = target - sum;
                if (hashSet.find(sum) != hashSet.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    set.insert(temp);
                }
                hashSet.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(set.begin(), set.end());
    return ans;
}

vector<vector<int>> four_sum_optimal(vector<int> nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j != i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n = 6;
    vector<int> arr;
    arr = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = four_sum_brute_force(arr, target);
    for (auto it : ans)
    {
        for (auto elem : it)
        {
            cout << elem << " ";
        }
    }
    return 0;
}

/*
Complexity Analysis of batter solution
Time Complexity: O(N3*log(M)), where N = size of the array, M = no. of elements in the set.
Reason: Here, we are mainly using 3 nested loops, and inside the loops there are some operations on the set data structure which take log(M) time complexity.

Space Complexity: O(2 * no. of the quadruplets)+O(N)
Reason: we are using a set data structure and a list to store the quads. This results in the first term. And the second space is taken by the set data structure we are using to store the array elements. At most, the set can contain approximately all the array elements and so the space complexity is O(N).

*/