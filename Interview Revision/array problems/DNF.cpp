
#include <bits/stdc++.h> 
using namespace std;


void dnfsort(vector<int> &nums){
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid] , nums[low]);
            mid++;
            low++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid] , nums[high]);
            high--;
        }
    }
}


int main() {

    vector<int>arr = {1,2,1,0,2,1,1,0};

    dnfsort(arr);

    for(int it : arr){
        cout<<it<<" ";
    }


return 0;
}


/*
remember we just need to go till low <= high , not to n because after than all are already sorted by 2 

*/