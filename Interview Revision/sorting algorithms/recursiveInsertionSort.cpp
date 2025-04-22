
#include <bits/stdc++.h> 
using namespace std;


//recursive insertion sort 
void recursiveInsertionSort(vector<int> &nums , int start){
    int n = nums.size();
    
    if(start == n) return;

    int j = start;
    while( j>0 && nums[j]<nums[j-1]){
        swap(nums[j],nums[j-1]);
        j--;
    }

    recursiveInsertionSort(nums,start+1);
    
}




int main(){
    
    vector<int>nums = {3,5,2,7,1};
    
    int n = nums.size();
    
    recursiveBubbleSort(nums , n);
    
    for( int it : nums){
        cout<<it<<" ";
    }


    return 0;
}