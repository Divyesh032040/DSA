#include <bits/stdc++.h>
using namespace std;

int fibonacci_number(int n)
{
    if (n <= 1)
        return n;
    return fibonacci_number(n - 1) + fibonacci_number(n - 2);
}

int main()
{

    cout << fibonacci_number(8);

    return 0;
}