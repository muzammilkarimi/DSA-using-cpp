#include <iostream>
using namespace std;
void pairsum(int arr[], int n, int k)
{
    //     // for (int i = 0; i < n - 1; i++)
    //     // {
    //     //     for (int j = i + 1; j < n; j++)
    //     //     {
    //     //         if (arr[i] + arr[j] == k)
    //     //         {
    //     //             cout << i << " " << j << endl;
    //     //             return true;
    //     //         }
    //     //     }
    //     // }
    int low = 0;
    int high = n - 1;
    while (high > low)
    {
        if (arr[high] + arr[low] == k)
        {
            cout << arr[high] << " " << arr[low] << endl;
            high--;
            // return true;
        }
        else if (arr[high] + arr[low] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    // return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 5;
    int n = 5;
    int counter = 1;
    while (n > counter)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    // for(int i=1; i<n; i++){
    //     int sortarr[n]=arr[i];

    // }
    // cout<<sortarr[n];

    pairsum(arr, 5, k);

    return 0;
}