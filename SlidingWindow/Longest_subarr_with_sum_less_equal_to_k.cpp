#include <iostream>
#include <vector>
using namespace std;

int findLongestSubarray(vector<int>& arr, int K) {
    int left = 0, right = 0, maxLen = 0, sum = 0;
    int n = arr.size();
    
    while (right < n) {
        sum += arr[right];
        
        while (sum > K) {        //apply if so that only shrink 1 elem and TC : O(n) from 2n
            sum -= arr[left];
            left++;
        }
        
        maxLen = max(maxLen, right - left + 1);
        right++;
    }
    
    return maxLen;
}

int main() {
    vector<int> arr = {2, 5, 1, 7, 10};
    int K = 14;

    cout << "Length of longest subarray: " << findLongestSubarray(arr, K) << endl;
    return 0;
}


// TC:O(2n) because n for left and n for right , which can be avoid by apply if condition in shrinking 
