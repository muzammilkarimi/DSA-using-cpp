#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int i = s, j = e;
    int count = 0;
    for (int k = s + 1; k <= e; k++)
    {
        if (arr[k] <= pivot)
        {
            count++;
        }
    }
    int pivotindex = s + count;
    swap(arr[s], arr[pivotindex]);

    // place the pivot element at its correct position
    while (i < pivotindex and j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotindex and j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotindex;
}
void quicksort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // find the pivot element
    int pivot = partition(arr, s, e);
    // left part
    quicksort(arr, s, pivot - 1);
    // right part
    quicksort(arr, pivot + 1, e);
}
int main()
{
    int arr[6] = {3, 5, 4, 1, 2, 6};
    int n = 6;
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}