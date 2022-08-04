#include <iostream>
using namespace std;
int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int t = 0, sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int key = arr[i];
            for (int j = i; j < n; j++)
            {
                int temp = 0;
                t = 0;
                if (arr[i] > arr[j + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[j + 1];
                    arr[j + 1] = temp;
                    t++;
                    sum += t;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
