#include <iostream>
using namespace std;

// Q1
int sumN(int n)
{
    int sum = 0;
    for (int i=1; i<=n; i++)
    {
        sum += i;
    }

    return sum;
}

// Q2
int factorialN(int n)
{
    int factorial = 1;
    for (int i=1; i<=n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main ()
{
    cout << sumN(5) << endl; // Q1
    cout << factorialN(4) << endl; // Q2

    return 0;
}