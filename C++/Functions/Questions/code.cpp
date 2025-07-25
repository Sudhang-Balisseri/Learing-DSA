#include <iostream>
using namespace std;

// Q1
// int sumN(int n)
// {
//     int sum = 0;
//     for (int i=1; i<=n; i++)
//     {
//         sum += i;
//     }

//     return sum;
// }

// Q2
// int factorialN(int n)
// {
//     int factorial = 1;
//     for (int i=1; i<=n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }


// Q3
// int sumOfDigits(int num)
// {
//     int digSum = 0;

//     while (num > 0)
//     {
//         int lastDig = num % 10;
//         num /= 10;

//         digSum += lastDig;
//     }

//     return digSum;
// }


// Q4
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i=1; i<=n; i++)
//     {
//         fact *= i;
//     }

//     return fact;
// }

// int nCr(int n, int r)
// {
//     int factorial_n = factorial(n);
//     int factorial_r = factorial(r);
//     int factorial_nmr = factorial(n-r);

//     return factorial_n / (factorial_r * factorial_nmr);
// }


// Q5
// void checkPrime(int n)
// {
    // bool isPrime = true;

    // for (int i=2; i<n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime =false;
    //         break;
    //     }
    // }

    // if (isPrime)
    // {
    //     cout << n << " Prime No." << endl;
    // }
    // else
    // {
    //     cout << n << " Not a Prime No." << endl;
    // }
// }




int main ()
{
    // int n = 6, r = 3;
    // cout << sumN(5) << endl; // Q1
    // cout << factorialN(4) << endl; // Q2
    // cout << "Sum = " << sumOfDigits(2356) << endl; // Q3
    // cout << "factorial = " << nCr(n, r) << endl; // Q4
    // checkPrime(4); // Q5

    return 0;
}