
#include <bits/stdc++.h> 
using namespace std;


//recursive bubble sort 
void recursiveBubbleSort(vector<int> &nums , int n){
    if (n==0) return;

    for(int i=0;i<n-1;i++){
        if(nums[i] > nums[i+1]){
            int temp = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = temp;
        }
    }

    recursiveBubbleSort(nums , n-1);
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