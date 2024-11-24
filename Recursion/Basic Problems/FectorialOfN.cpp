#include <iostream>
using namespace std;

// functional recursion
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

// parameterized recursion
#include <iostream>
using namespace std;

void factorialPera(int ans, int n)
{
    // Base case: when n is 0, print the accumulated result and return
    if (n == 0)
    {
        cout << ans;
        return;
    }
    // Recursive call with updated ans
    factorialPera(ans * n, n - 1);
}

int main()
{
    int n = 5;
    factorial(n);
    factorialPera(1, n);
    return 0;
}
