/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &nums){
    int n = nums.size();
    
   for(int i=0 ; i<n-1 ; i++){
       int mini = i;
       for(int j=i ; j<=n-1 ; j++){
           if(nums[mini] > nums[j]){
               mini = j;
           }
       }
       swap(nums[i] , nums[mini]);
   }
    
}
int main()
{
    vector<int>nums = {3,2,5,1,45,56,88,4};
    
    selectionSort(nums);
    
    for( int it : nums){
        cout<<it<<" ";
    }
    
    

    return 0;
}

/*
Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.

-> first loop will only go till n-2 because we are running inner loop till n-1 , so if last element is smaller than it will swap with n-2 element.

time complexity : O(n^2) space complexity : O(1)

*/