#include<iostream>
#include<vector>
using namespace std;

void combinationSumTwo(int idx , int target , vector<int>& ds , vector<vector<int>>& ans , vector<int>& arr , int n){
    //basecase
    if(target == 0){
        ans.push_back(ds);
        return;
    }

    for(int i = idx ; i<n ; i++){
        if(i>idx && arr[i] == arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        combinationSumTwo(i+1 , target-arr[i] , ds , ans , arr , n);
        ds.pop_back();

    }
}



int main(){

   vector<int> arr = {1, 1, 1, 2, 2};

    vector<int>ds;
    vector<vector<int>>ans;
    int n = 5;
    int target = 4;
    combinationSumTwo(0,target,ds,ans,arr,n);
    
    for(auto it : ans){
        for(auto pt : it){
            cout<<pt;
        }
        cout<<endl;
    }

    return 0;
}

//time complexity : O(2^n * k) k = avg length of every combination 
//space complexity : O(k*x)  k sized x combinations 

