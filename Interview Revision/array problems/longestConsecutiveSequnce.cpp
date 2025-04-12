
// Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.


#include <bits/stdc++.h> 
using namespace std;

bool leanerSearch(vector<int>&nums , int lookingFor){
    int n = nums.size();

    for(int i=0;i<n;i++){
        if(nums[i] == lookingFor){
            return true;
        }
    }

    return false;

}

//brute force solution
int longestConsecutiveSequence(vector<int>nums){
    int n = nums.size();
    int maxLen = 1;

    for(int i=0 ; i<n ; i++){

        int currElem = nums[i];

        int len = 1;

        int lookingFor = currElem + 1;

        while(leanerSearch(nums  , lookingFor) == true){
            len++;
            lookingFor++;
        }

        maxLen = max(maxLen , len);

    }
    
    return maxLen;
}


//batter approach using sorting
int longestConsecutiveSequenceBetter(vector<int> nums) {
    int n = nums.size();
    if (n == 0) return 0;

    sort(nums.begin(), nums.end());

    int counter = 1;
    int maxLen = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            // skip duplicates
            continue;
        } else if (nums[i] == nums[i - 1] + 1) {
            counter++;
        } else {
            counter = 1; // reset the count
        }
        maxLen = max(maxLen, counter);
    }

    return maxLen;
}


int longestConsecutiveSequenceOptimal(vector<int>nums){
    int n = nums.size();


    int maxLen = 0;

    unordered_set<int>mySet;

    for (int it : nums) {
        mySet.insert(it);
    }

    for(int it : nums){
        if(mySet.find(it-1) == mySet.end()){
            int cnt = 1;
            int curr = it;
            while(mySet.find(curr + 1) != mySet.end()){
                cnt++;
                curr++;
            }
            maxLen = max(maxLen , cnt);
        }
    }
    return maxLen;
    
};



int main() {

    vector<int>nums = {3 , 5 , 7 , 10 , 4 , 11 , 6};

    int ans = longestConsecutiveSequenceOptimal(nums);

    cout<<ans<<endl;


return 0;
}





/*
brute force solution : required a 2 loops , take O(n^2) time complexity

batter approach is : using a sorting : 1 loop and sorting (n log n) so => O(n) + O(n log n)


*/