

void insertionSort(vector<int> &nums){
    int n = nums.size();
    
    for( int i=0;i<n;i++){
        int j = i;
        
        while(j > 0 && nums[j-1]>nums[j]){
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
}



/*
insertion sort : always pick a element and place irt in its correct position

Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.


*/