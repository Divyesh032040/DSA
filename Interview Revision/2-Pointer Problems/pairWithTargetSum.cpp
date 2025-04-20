#include<bits/stdc++.h>
using namespace std;

pair<int,int>pairWithTargetSum( vector<int>nums , int target){

    int n = nums.size();
    unordered_map<int,int>mp;
    pair<int,int>ans;

    for(int i=0;i<n;i++){
        int rem = target - nums[i];
        if(mp.find(rem) != mp.end()){
            ans.first = i;
            ans.second = mp[rem];
            return ans;
        }else{
            mp[nums[i]] = i;
        }
    }
    return ans;
}


//using a 2 pointer approach 
pair<int, int> pairWithTargetSum(vector<int> nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {left, right};  
        } else if (sum < target) {
            left++;  
        } else {
            right--; 
        }
    }

    return {-1, -1}; 
}
int main(){

    vector<int>nums = {1, 2, 3, 4, 6};

    int target = 6;

    pair<int,int>ans = pairWithTargetSum(nums,target);

    cout<<ans.first<<" "<<ans.second<<endl;









    return 0;
}



// Problem Statement:
// Given a sorted array of integers and a target sum, find a pair of numbers that add up to the target. Return the indices of the two numbers.