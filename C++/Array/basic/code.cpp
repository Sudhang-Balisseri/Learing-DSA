#include <iostream>
using namespace std;


void changeArr(int arr[], int size)
{
    cout << "in function \n";
    for (int i=0; i<size; i++)
    {
        arr[i] = 2* arr[i];
    }
}

int linearSearch(int arr2[], int sz, int target)
{
    for(int i=0; i<sz; i++)
    {   
        if (arr2[i] == target)
        {
            return i; // FOUND
        }
    }
    return -1; //NOT FOUND
}

int main ()
{
    // int marks[5] = {99, 100, 54, 36, 88};
    
    
    // marks[0] = 101; // Array Index

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // cout << endl;

    // loops on Array
    // int size = 5;
    // int marks2[size] = {};
    
    // for(int i=0; i<size; i++)
    // {
    //     cin >> marks2[i];
    // }
    
    // for (int i=0; i<size; i++)
    // {
    //     cout << marks2[i] << endl;
    // }
 
    // double price[] = {99.9, 88.9, 99.3};

// *******************************************************

    // cout << endl;

// **********************************************************

//     //Pass By Reference
    // int arr[] = {1, 2, 3};
    
    
    // changeArr(arr, 3);

    // cout << "in main \n";
    // for (int i=0; i<3 ; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // return 0;

// // ******************************************************
    // cout << endl;
//  ****************************************************   
    //Linear Search
    int arr2[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int target = 8;

    cout << linearSearch(arr2, sz, target) << endl;
    return 0;
}