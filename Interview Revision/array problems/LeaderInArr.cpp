// Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.

 
#include <bits/stdc++.h> 
using namespace std;

vector<int>leaders(vector<int>nums){
    int n = nums.size();
    vector<int>ans;

    for(int i=0; i<n ; i++){
        bool isLeader = true;

        for(int j = i ; j<n ; j++){
            if(nums[j]>nums[i]){
                isLeader = false;
            }
        }
        if(isLeader == true){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

//optimal solution

vector<int>leadersOptimal(vector<int>nums){
    int n = nums.size();
    int max = INT_MIN;
    vector<int>ans;

    for(int i = n-1 ; i>0 ; i--){
        if( nums[i] > max ){
            ans.push_back(nums[i]);
            max = nums[i];
        }    
    }
    return ans;
}


int main() {

    vector<int>nums = {4, 7, 1, 0};

    vector<int>ans = leadersOptimal(nums);

    for(int it : ans){
        cout<<it<<" ";
    }

return 0;
}