#include <iostream>
using namespace std;

int main()
{
    // int n = 5;
    // for (int i=1; i<=n; i++)
    // {
    //     for (int j=1; j<=n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // **************************
    // int n = 6 ;
    
    // for (int i=0; i<n; i++)
    // {
    //     char ch = 'A';
    //     for (int j=0; j<n; j++)
    //     {
            
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // ******************************
    // int n = 4;
    // int sum = 1;

    // for (int i=0; i<n; i++)
    // {   
    //     for (int j=0; j<n; j++)
    //     {
            
    //         cout << sum << " ";
    //         sum ++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // **********************************
    // int n = 4;
    // char ch = 'A';

    // for (int i=0; i<n; i++)
    // {   
    //     for (int j=0; j<n; j++)
    //     {
            
    //         cout << ch << " ";
    //         ch ++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // ***********************************

    int n = 4;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
        cout << endl;
    }
}               