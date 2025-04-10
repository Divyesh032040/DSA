
#include <bits/stdc++.h> 
using namespace std;

bool verifySortedRotated(vector<int>& nums){
    int n = nums.size();
    int count = 0;

    for(int i=0;i<n-1;i++){
        if(nums[i] > nums[i+1]){
            count = count + 1;
        }
    }

    //we also need to check for a least and first elem
    if(nums[n-1] > nums[0]){
        count++;
    }

    cout<<count<<endl;

    if(count != 1){
        return false;
    }
    return true;
}



int main() {

    vector<int>nums = {4,5,1,2,3};   //true

    cout<<verifySortedRotated(nums)<<endl;


return 0;
}


/*
approach : id any array os first sorted and than rotated , than there is only one case (breakpoint) where 
arr[i] > arr[i+1] so that we will count this breakPoint , if there is only one brack point than arr is sorted and rotated.

also run loop till n-2 because , we specially handle for n-1 and arr[0]

tc : O(1) sc:O(1)
*/