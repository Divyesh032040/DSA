
#include <bits/stdc++.h> 
using namespace std;

int secondLargest(vector<int>&nums){
    int n = nums.size();
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(nums[i] > largest && nums[i] > secondLargest){
            secondLargest = largest;
            largest = nums[i];
            
        }
       
        
    }
    return secondLargest;
}



int main() {

    vector<int>nums = {3,2,4,2,7,5,9};

    cout<<secondLargest(nums);


return 0;
}