#include <iostream>
using namespace std;

// Decimal Num to Binary Num code
int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

// Binary Num to Decimal Num code
int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += binNum*pow; 
        
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    cout << decToBinary(5) << endl;// Decimal Num to Binary Num code
    cout << binToDecimal(5)<< endl;// Binary Num to Decimal Num code 
}
