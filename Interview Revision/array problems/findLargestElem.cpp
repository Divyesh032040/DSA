#include <bits/stdc++.h> 
using namespace std;

int findLargest(vector<int>&nums){
    int n = nums.size();

    int largest = 0;

    for(int i=0;i<n;i++){
        largest = max(largest , nums[i]);
    }

    return largest;
}



int main() {

    int n;
    cout<<"enter size of arr"<<endl;
    cin>>n;


    vector<int>nums(n);
    cout<<"enter elements of arr"<<endl;

    for(int i = 0 ; i<n ; i++){
        cin>>nums[i];
    }

    cout<<findLargest(nums);

return 0;
}