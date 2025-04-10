#include <bits/stdc++.h> 
using namespace std;

//brute force
pair<int,int>twoSumBruteForce(vector<int>nums , int target){

    int n = nums.size();
    pair<int,int>result;

    for(int i=0;i<n;i++){
        for(int j =i ; j < n ; j++ ){
            if(nums[i]+nums[j] == target){
                result.first = i;
                result.second = j;
            }
        }
    }
    return result;
}

//optimal solution
pair<int,int>twoSumOptimal(vector<int>nums , int target){
    int n = nums.size();

    unordered_map<int , int>hashmap;   //elem , index

    pair<int,int>pair;

    for (int i=0;i<n;i++){

        int remain = target - nums[i];

        if(hashmap.find(remain) != hashmap.end()){
            pair.first = hashmap[remain];
            pair.second = i;
        }else{
            if(hashmap.find(remain) == hashmap.end()){
                hashmap[nums[i]] = i;
            }
        }

    }

    return pair;
}




int main() {

    vector<int>nums = {2,6,5,8,11};

    int target = 14;

    pair<int,int>temp = twoSumOptimal(nums , target);    //tc : O(n^2)  sc:

    cout<<temp.first<<" "<<temp.second<<endl;




return 0;
}




//N = 5, arr[] = {2,6,5,8,11}, target = 14
//Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.