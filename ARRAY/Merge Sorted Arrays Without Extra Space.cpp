#include <bits/stdc++.h>
using namespace std;

void mergeBruteForceWithExtraSpace(int arr1[], int arr2[], int n, int m)
{
    int arr3[n + m];
    int i = 0;
    int j = 0;
    int index = 0;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[index] = arr1[i];
            i++;
            index++;
        }
        else
        {
            arr3[index] = arr2[j];
            j++;
            index++;
        }
    }
    while (i < n)
    {
        arr3[index] = arr1[i];
        i++;
        index++;
    }

    while (j < m)
    {
        arr3[index] = arr2[j];
        j++;
        index++;
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            arr1[i] = arr3[i];
        }
        else
        {
            arr2[i - n] = arr3[i];
        }
    }
}

void mergeArrWithoutUsingExtraSpace(int arr1[], int arr2[], int n, int m)
{
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j < m)
    {
        if (arr2[j] < arr1[i])
        {
            swap(arr2[j], arr1[i]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

void swapGreater(int arr1[], int arr2[], int indx1, int indx2)
{
    if (arr1[indx1] > arr2[indx2])
    {
        swap(arr1[indx1], arr2[indx2]);
    }
}

void mergeArrWithoutUsingExtraSpace(int arr1[], int arr2[], int n, int m)
{
    int len = n + m;
    int gap = (len / 2) + (len % 2);

    while (gap > 1)
    {
        int left = 0;
        int right = gap;
        while (right < len)
        {
            // arr1 and arr2
            if (left < n && right >= n)
            {
                swapGreater(arr1, arr2, left, right - n);
            }
            // arr2 and arr2
            else if (left >= n)
            {
                swapGreater(arr1, arr2, left - n, right - n);
            }
            // arr1 and arr1
            else
            {
                swapGreater(arr1, arr2, left, right);
            }
            left++;
            right++;
        }
        if (gap == 1)
            break;
        gap = (gap / 2) + (gap % 2);
    }
}

int main()
{

    int arr1[] = {1, 4, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    mergeBruteForceWithExtraSpace(arr1, arr2, n, m);

    cout << "arr1[] = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

/*

brute force time ans space complexity analysis
=> tc: O(n+m) for iteration + O(n+m) for re putt all arr3[] elem into arr2[] and arr1[]
=> sc: O(n+m) for storing elem in arr3[n+m];

optimal approach without using any extra space time and space complexity
=> tc: O(min(n,m)) + O(n log n) + 0(m log m);
=> sc: O(1)

2nd optimal approach is using gap method
=> tc: O(log base2 (n+m) * O(n+m));
=> sc : 0(1);



*/
