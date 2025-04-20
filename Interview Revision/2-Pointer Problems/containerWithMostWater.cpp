
#include <bits/stdc++.h> 
using namespace std;

int maxWater(vector<int>nums){
    int n = nums.size();
    int left = 0;
    int right = n-1;
    int maxWater = INT_MIN;

    while(left < right){
        int minHight = min(nums[right],nums[left]);
        int width = right-left;

        int water = minHight*width;
        maxWater = max(maxWater , water);

        if(nums[left] < nums[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxWater;

}




int main() {

    vector<int>nums = {1,8,6,2,5,4,8,3,7};


    int ans = maxWater(nums);

    cout<<ans<<endl;

return 0;
}