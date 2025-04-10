
#include <bits/stdc++.h> 
using namespace std;

int elementAppearOnes(vector<int>&nums){
    int n = nums.size();
    int ans = -1;
    vector<int>freq(n,0);

    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }

    for(int i = 0 ; i<freq.size();i++){
        if(freq[i]==1){
            ans = i;
        }
    }
    return ans;
}


int main() {

    vector<int>nums = {2,3,1,3,1,2,5,7,7};

    cout<<elementAppearOnes(nums)<<endl;


return 0;
}