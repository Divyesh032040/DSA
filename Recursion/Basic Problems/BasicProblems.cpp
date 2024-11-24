#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
        return;
    cout << "divyesh" << endl;
    printName(i + 1, n);
}

void printNumber(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printNumber(i + 1, n);
}

void printNumberInReverseOrder(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printNumberInReverseOrder(n - 1);
}

void printNumberUsingBackTracking(int i, int n)
{
    if (i < 1)
        return;
    printNumberUsingBackTracking(n - 1, n);
    cout << i << endl;
}

void reverseNumberUsingBacktracking(int i, int n)
{
    if (i > n)
        return;
    reverseNumberUsingBacktracking(i + 1, n);
    cout << i << endl;
}

int main()
{

    int n;
    cin >> n;

    printName(1, n);

    printNumber(1, n);

    printNumberInReverseOrder(n);

    printNumberUsingBackTracking(n, n);

    reverseNumberUsingBacktracking(1, n);

    return 0;
}