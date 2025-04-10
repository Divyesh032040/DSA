
#include <bits/stdc++.h> 
using namespace std;

int maxConsecutiveOnes(vector<int>&nums){

    int n = nums.size();

    int counter = 0;
    int maxCounter = 0;

    for(int i = 0 ; i < n ; i++){
        if(nums[i] != 1){
            counter = 0;
        }else{
            counter++;
            maxCounter = max(maxCounter , counter);
        }
    }

    return maxCounter;
}


int main() {

    vector<int>nums = {1,0,1,1,0,1};

    cout<<maxConsecutiveOnes(nums);


return 0;
}