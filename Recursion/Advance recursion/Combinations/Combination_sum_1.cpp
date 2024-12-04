
#include <bits/stdc++.h> 
using namespace std;

void combination_sum_equal_to_target(int idx, int n, int target, vector<int>& ds, int arr[], vector<vector<int>>& ans) {
    if (idx == n) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }

    // Include the current element if it's not greater than the target
    if (arr[idx] <= target) {
        ds.push_back(arr[idx]);
        combination_sum_equal_to_target(idx, n, target - arr[idx], ds, arr, ans);
        ds.pop_back();  // Backtrack
    }

    // Exclude the current element and move to the next index
    combination_sum_equal_to_target(idx + 1, n, target, ds, arr, ans);
}

int main() {
    int n = 4;
    int arr[] = {2, 3, 6, 7};
    int target = 7;
    vector<int> ds;
    vector<vector<int>> ans;

    combination_sum_equal_to_target(0, n, target, ds, arr, ans);

    // Print all the combinations
    for (auto it : ans) {
        for (auto bc : it) {
            cout << bc << " ";
        }
        cout << endl;
    }

    return 0;
}
