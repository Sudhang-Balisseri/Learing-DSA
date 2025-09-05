#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[] = {11, 15, 69, 12,  2, -100};
    int size = 6; 
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int indxOfSmallest;
    int indxOfLargest;


    for (int i=0; i<size; i++)
    {
        // 1 way
        if (num[i] < smallest)
        {
            smallest = num[i];
            indxOfSmallest = i;
        }

        if (num[i] > largest)
        {
            largest = num[i];
            indxOfLargest = i;
        }

        // 2 way
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);

    }

    cout << "the smallest num --> " << smallest << endl;
    cout << "and the indx of smallest --> " << indxOfSmallest << endl;
    cout << "the largest num --> " << largest << endl;
    cout << "and the index of largest num --> " << indxOfLargest << endl;

    return 0;
}