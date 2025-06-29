#include <iostream>
using namespace std;

int main()
{
    // Conditional Statement: if-else
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if (age < 18)
    // {
    //     cout << "Not eligible for driving.\n";
    // }
    // else
    // {
    //     cout << "Eligible for driving.\n";
    // }

    // return 0;

    // Practice
    // int n;
    // cout << "Enter The Number: ";
    // cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "Number Is  Even\n";
    // }
    // else
    // {
    //     cout << "Number Is Odd\n";
    // }

    // return 0;

    // *****************************
    // Conditional Statement: else if
    // int marks;
    // cout << "Enter Marks: ";
    // cin >> marks;

    // if (marks >= 90)
    // {
    //     cout << "A\n";
    // }
    // else if (marks >= 80 && marks < 90)
    // {
    //     cout << "B\n";
    // }
    // else 
    // {
    //     cout << "c\n";
    // }

    // return 0;

    // char ch;
    // cout << "Enter Char: ";
    // cin >> ch;

    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "Char is Lowercase \n";
    // }
    // else
    // {
    //     cout << "Upercase \n";
    // }
    // return 0;

// *********************************************
    // Ternary Operator / Statement
    // int n = -45; 
    
    // cout << (n >= 0 ? "Positive" : "Negetive") << endl;
    // return 0;

// ********************************************************************************************************************
    // Loops
    // While-Loops
    // int n = 10;
    // int i = 1;

    // while (i <= n)
    // {
    //     cout << i << " " ;
    //     i++;
    // }

    // cout << endl;
    // return 0;
// **************************************
    // for-loops
//     int n = 10;

//     for (int i=1; i<=n; i++)
//     {
//         cout << i << " ";
//     }

//     cout << endl;
//     return 0;




    // Qs
    // int n = 3;
    // int sum = 0;

    // for (int i=1; i<=n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum << endl;
    // return 0;



    // Qs
    // int n = 5;
    // int oddsum = 0;
    
    // for (int i=1; i<=n; i++)
    // {
    //     if(i%2 != 0)
    //     {
    //         oddsum += i;
    //     }
    // }
    // cout << oddsum << endl;
    // return 0;



    // Qs
    // int n = 10;
    // int oddsum = 0;
    // int i = 1;

    // while (i <= n)
    // {
    //     if(i%2 != 0)
    //     {
    //         oddsum += i;
    //     }
    //     i++;
    // }

    // cout << oddsum << endl;
    // return 0;




    // Qs
    // int n = 5;
    // int evensum = 0;
    // int i = 1;

    // while (i <= n)
    // {
    //     if(i%2 == 0)
    //     {
    //         evensum += i;
    //     }
    //     i++;
    // }

    // cout << evensum << endl;
    // return 0;


// ****************************************
    // do-while-loop
    // int n = 10;
    // int i = 1;

    // do
    // {
    //     cout << i << " ";
    //     i++;
    // }
    // while (i <= n);
    // cout << endl;
    // return 0;
// ****************************************************************************
    // Qs
    // int n = 7;
    // bool isPrime = true; 
    
    // for (int i=2; i<n; i++)
    // {
    //     if (n%i == 0)
    //     {
    //         isPrime =false;
    //         break;     
    //     }
    // }

    // if (isPrime == true)
    // {
    //     cout << "Prime-Number" << endl;
    // }
    // else
    // {
    //     cout << "Non-Prime-Number" << endl;
    // }
    
    // return 0;

// *********************************************************************
    // Nested loops
    // Qs
    // int n = 5;
    // int x = 5;

    // for (int i = 1; i<=n; i++)
    // {
    //     for (int j = 1; j<=x; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

// ***********************************************************************
    // Qs
    // int n = 10;
    // int sum = 0;
    // for (int i = 1; i<=n; i++)
    // {
    //     if (i%3 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum << endl;
    // return 0;


    // Qs
    int n = 4;
    int factorial = 1;
    for (int i = 1; i<=n; i++)
    {
        factorial *= i;
    }

    cout << factorial << endl;
    return 0;
}