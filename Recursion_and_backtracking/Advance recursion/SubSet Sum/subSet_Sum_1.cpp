#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subsetSum(int idx , int sum , vector<int>& arr , vector<int>& ansArray){
    //basecase
    if(idx == arr.size()){
        ansArray.push_back(sum);
        return;
    }

    ///add element into sum 
    subsetSum(idx+1 , sum + arr[idx] , arr , ansArray );

    //not add element into sum 
    subsetSum(idx+1,sum,arr,ansArray);

}

int main(){

    vector<int>arr = {3,1,2};
    vector<int>ansArray;
    int sum = 0;
    int idx = 0;
    subsetSum(idx,sum,arr,ansArray);
    sort(ansArray.begin() , ansArray.end());
    
    for(auto it : ansArray){
        cout<<it<<" ";
    }
    return 0;

}


// Intuition: The main idea is that on every index you have two options either to select the element to add it to your subset(pick) or not select the element at that index and move to the next index(non-pick).

// Approach: Traverse through the array and for each index solve for two arrays, one where you pick the element,i.e add the element to the sum or don’t pick and move to the next element, recursively, until the base condition. Here when you reach the end of the array is the base condition.