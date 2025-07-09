#include <iostream>
using namespace std;


// funstion definition
void printhello()
{
    cout << "hello" << endl;
}

int printval()
{
    return 3;
}

// Parameters
// sum of 2 numbers
double sum (double a, double b) // Parameters
{
    double s = a + b;
    return s;
}

// min of 2 numbers
int minOfTwo(int a, int b) // Parameters
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main()
{
    // function call / invoke
    printhello();
    cout << printval() << endl;
    cout << sum(5, 5) << endl; // Arguments
    cout << "min: " << minOfTwo(3, 4) << endl; // Arguments

    return 0;
}