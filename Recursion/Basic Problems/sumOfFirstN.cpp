#include <bits/stdc++.h>
using namespace std;

// parameterized function

int sum;
int sumOfFirstNNumber(int i, int n)
{
    if (i > n)
        return -1;
    sum += i;
    sumOfFirstNNumber(i + 1, n);
    return sum;
}

void sumOfN(int n, int sum)
{ // n to 0
    if (n < 1)
    {
        cout << sum;
        return;
    }
    sum = sum + n;
    sumOfN(n - 1, sum);
}

int main()
{

    int n;
    cin >> n;
    cout << sumOfFirstNNumber(1, n);

    cout << sumOfN(n, 0);
    return 0;
}