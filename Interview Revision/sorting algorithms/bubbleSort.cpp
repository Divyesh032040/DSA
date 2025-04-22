void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    
    for (int i = n - 1; i >= 0; i--) {
        bool swapHappen = false; // reset here
        
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapHappen = true;
            }
        }
        if (!swapHappen) {
            break; // already sorted
        }
    }
}


/*
Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order.

Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

time complexity : O(n^2) space complexity : O(1);
*/