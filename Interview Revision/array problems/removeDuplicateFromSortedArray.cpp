
//Question : remove duplicates from sorted array without using extra space and return length of new arr

#include <bits/stdc++.h> 
using namespace std;

int removeDuplicate(vector<int>nums){
    int n = nums.size();

    int i = 0;
    int j = 0;

    while(j < n){
        if(nums[j] != nums[i]){
            i++;
            swap(nums[i],nums[j]);
        }
        j++;
    }
    for(int j = 0 ; j < i ; j++){
        cout<<nums[j]<<" ";
    }

    cout<<endl;

    return i;
}



int main() {

    vector<int>nums = {1,2,3,3,4,5,5,6,7,8,8,9};

    cout<<removeDuplicate(nums);


return 0;
}




/*
approach 1 : brute force : 
*/