#include <iostream>
using namespace std;

int main ()
{
    int marks[5] = {99, 100, 54, 36, 88};
    
    
    marks[0] = 101; // Array Index

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    cout << endl;

    // loops on Array
    int size = 5;
    int marks2[size] = {};
    
    for(int i=0; i<size; i++)
    {
        cin >> marks2[i];
    }
    
    for (int i=0; i<size; i++)
    {
        cout << marks2[i] << endl;
    }
 
    double price[] = {99.9, 88.9, 99.3};

    return 0;
}