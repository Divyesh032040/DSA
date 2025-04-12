
#include <bits/stdc++.h> 
using namespace std;

int MaximumSubarraySum (vector<int>nums){
    int n = nums.size();

    int sum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++){
        sum = sum + nums[i];

        if(sum > maxSum){
            maxSum = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    return maxSum;
    
}






int main() {

    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<MaximumSubarraySum(nums);


return 0;
}



// ✅ Problem Statement: Maximum Subarray Sum
// Given an array of integers, both positive and negative, find the contiguous subarray (containing at least one number) which has the largest sum and return that sum.