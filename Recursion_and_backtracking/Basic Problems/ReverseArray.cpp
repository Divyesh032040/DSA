#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}
// reverse array using recursion with 2 pointers
void reverseArr(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArr(arr, start + 1, end - 1);
    }
    return;
}

// reverse array using recursion with only one pointer
void reverseArrTwo(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverseArrTwo(arr, i + 1, n);
}

int main()
{

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    // reverseArr(arr, 0, n - 1);
    reverseArrTwo(arr, 0, n);
    printArray(arr, n);

    return 0;
}