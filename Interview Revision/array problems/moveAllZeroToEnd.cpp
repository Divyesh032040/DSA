#include<bits/stdc++.h>
using namespace std;

void swap(vector<int>& nums , int &i , int &j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void moveZero(vector<int> &nums){
    int n = nums.size();
    int i = 0;
    for(int j = 0;j<n ; j++){
        if(nums[j] != 0){
            swap(nums , i , j);
            i++;
        }
    }
}

int main(){

    vector<int>nums = {2,4,0,4,0,2,0,2};

    moveZero(nums);

    for(int it:nums){
        cout<<it<<" ";
    }

    return 0;
}




/*
approach : 2 pointer
tc: O(1)
space complexity: constant

*/