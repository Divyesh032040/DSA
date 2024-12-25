
#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector<int> arr, int low, int high, int target)
{

    int n = arr.size();
    // base condition
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;

    else if (arr[mid] > target)
    {
        return recursiveBinarySearch(arr, 0, mid - 1, target);
    }
    else
        return recursiveBinarySearch(arr, mid + 1, n - 1, target);
}

int main()
{

    vector<int> arr = {2, 7, 8, 88, 453, 2356};

    int n = arr.size();

    int target = 88;

    int TargetIndex = recursiveBinarySearch(arr, 0, n - 1, target);

    if (TargetIndex != -1)
    {
        cout << "Target element " << target << " is present at Index No: " << TargetIndex << " in given sorted array." << endl;
        cout << "time complexity : log n" << endl;
    }
    else
    {
        cout << "target is not present in array" << endl;
    }

    return 0;
}