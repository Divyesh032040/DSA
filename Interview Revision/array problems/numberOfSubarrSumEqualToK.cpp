
#include <bits/stdc++.h> 
using namespace std;

int subArrSumEqualToK(vector<int>& nums , int k){
    int n = nums.size();
    int counter = 0;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum = sum + nums[j];
            if(sum == k){
                counter++;
            }
        }
    }
    return counter;
}





int main() {

    vector<int>nums = {3, 1, 2, 4};

    int k = 6;

    cout<<subArrSumEqualToK(nums , k);

return 0;
}

//Input Format: N = 4, array[] = {3, 1, 2, 4}, k = 6