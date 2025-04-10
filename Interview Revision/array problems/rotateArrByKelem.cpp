#include <bits/stdc++.h> 
using namespace std;

void reverse(vector<int>& nums , int start , int end){
    while(start <= end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

void rotateArrByKElemRight(vector<int>&nums , int k){

    int n = nums.size();
    reverse(nums , 0 , n-k-1);
    reverse(nums,n-k , n-1);
    reverse(nums,0,n-1);

}

void rotateArrByKElemLeft(vector<int>&nums , int k){

    int n = nums.size();
    reverse(nums , 0 , k-1);
    reverse(nums,k , n-1);
    reverse(nums,0,n-1);

}



int main() {

    vector<int>nums = {1,2,3,4,5,6,7};

    rotateArrByKElemLeft(nums , 2);

    for(int it : nums){
        cout<<it<<" ";
    }





return 0;
}



/*
rotate array elem : reversal algorithm 
*/