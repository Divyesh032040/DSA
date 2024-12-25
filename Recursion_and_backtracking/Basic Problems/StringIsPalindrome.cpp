#include <bits/stdc++.h>
using namespace std;

void palindrome(string str, int i)
{
    int n = str.size();
    if (i >= n / 2)
        return true;
    if (str[i] != str[n - i - 1])
    {
        return false;
    }
    palindrome(str, i + 1);
}

int main()
{

    int n = 5;
    string str = "level";
    palindrome(str, 0);

    return 0;
}