
#include <bits/stdc++.h> 
using namespace std;


//recursive selection sort 
void recursiveSelectionSort(vector<int> &nums , int start){
    int n = nums.size();
    if(start == n-1) return;
    int mini = start;
    for(int i=start ; i<n ; i++){
        //operation of swap
        if(nums[mini] > nums[i]){
            mini = i;
        }
        
    }
    swap(nums[mini] , nums[start]);

    recursiveSelectionSort(nums , start+1);
}





int main(){
    
    vector<int>nums = {3,5,2,7,1};
    
    int n = nums.size();
    
    recursiveSelectionSort(nums , 0);
    
    for( int it : nums){
        cout<<it<<" ";
    }


    return 0;
}