#include <iostream>
#include <climits>
using namespace std;

void reverseArray (int arr[], int sz)
{
    int start = 0 , end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
    
}


int main()
{
    //Q1

    // int num[] = {11, 15, 69, 12,  2, -100};
    // int size = 6; 
    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // int indxOfSmallest;
    // int indxOfLargest;


    // for (int i=0; i<size; i++)
    // {
    //     // 1 way
    //     if (num[i] < smallest)
    //     {
    //         smallest = num[i];
    //         indxOfSmallest = i;
    //     }

    //     if (num[i] > largest)
    //     {
    //         largest = num[i];
    //         indxOfLargest = i;
    //     }

    //     // 2 way
    //     smallest = min(num[i], smallest);
    //     largest = max(num[i], largest);

    // }

    // cout << "the smallest num --> " << smallest << endl;
    // cout << "and the indx of smallest --> " << indxOfSmallest << endl;
    // cout << "the largest num --> " << largest << endl;
    // cout << "and the index of largest num --> " << indxOfLargest << endl;

    // return 0;

    // ********************************************************************

    //Q2

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    reverseArray(arr, sz);

    for (int i=0; i<sz; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}