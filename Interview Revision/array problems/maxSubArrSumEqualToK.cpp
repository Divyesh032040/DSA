
#include <bits/stdc++.h> 
using namespace std;

int maxSubArrSumEqualToK(vector<int>& nums , int k){
    int n = nums.size();
    int finalAns = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i; j<n;j++){
            sum += nums[j];
            if(sum == k){
                int ans = j-i+1;
                finalAns = max(finalAns , ans);
            }
        }
    }
    return finalAns;
}

int longestSubArraySum(vector<int>nums , int k){
    int n = nums.size();

    long long sum = 0;
    unordered_map<long long , int>preSumMap;
    int MaxLen = 0;

    for(int i=0;i<n;i++){
        int sum = sum + nums[i];

        if(sum == k){
            MaxLen = max(MaxLen , i+1);
        }

        //calculate a number which is reduce from sum than sum = k
        int remaining = sum - k;

        //check at any index , we had a sum which equals to remaining in map where we store sum at each index
        if(preSumMap.find(remaining) != preSumMap.end()){
            int len = i - preSumMap[remaining];
            MaxLen = max(MaxLen , len);
        }else{
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        
    }
    return MaxLen;
}





int main() {

    vector<int>nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int ans = longestSubArraySum(nums , k);

    cout<<ans<<endl;



return 0;
}