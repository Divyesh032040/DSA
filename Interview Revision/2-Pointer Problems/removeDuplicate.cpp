
#include <bits/stdc++.h> 
using namespace std;

void removeDuplicate (vector<int> &nums){
    int n = nums.size();
    int i=0;
    int j=0;

    while(j < n){
        if(nums[i] == nums[j]){
            swap(nums[i],nums[j]);
        }else{
            i++;
            swap(nums[i] , nums[j]);
        }
        j++;
    }

    
}


int main() {

    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};    //ans should be: {0 1 2 3 4 _ _ _ _ _ }

    removeDuplicate(nums);

    for( int it : nums){
        cout<<it<<" ";
    }

return 0;
}
