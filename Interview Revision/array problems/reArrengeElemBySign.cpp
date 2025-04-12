#include <bits/stdc++.h> 
using namespace std;

vector<int> reArrangeBySign(vector<int> &nums) {
    int n = nums.size();

    vector<int> positive;
    vector<int> negative;

    for (int it : nums) {
        if (it < 0) {
            negative.push_back(it);
        } else {
            positive.push_back(it);
        }
    }

    vector<int> ans(n);
    int pos = 0, neg = 0;

    // Fill alternatively
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && pos < positive.size()) {
            ans[i] = positive[pos];
            pos++;
        } else if (i % 2 == 1 && neg < negative.size()) {
            ans[i] = negative[neg];
            neg++;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, -4, -5};

    vector<int> ans = reArrangeBySign(nums);

    for (int it : ans) {
        cout << it << " ";
    }

    return 0;
}

// Problem Statement:

// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

// Note: Start the array with positive elements.

// Examples: 

// Example 1:

// Input:
// arr[] = {1,2,-4,-5}, N = 4
// Output:
// 1 -4 2 -5

