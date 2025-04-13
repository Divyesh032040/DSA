
#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>>threeSum(vector<int>nums , int n){
    
}



int main() {

    vector<int> arr = {-1, 0, 1, 2, -1, 2, -2, 0};

    int n = arr.size();

    vector<vector<int>> ans = threeSumOptimal(arr, n);

    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

return 0;
}