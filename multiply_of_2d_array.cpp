#include <iostream>
using namespace std;
int main()
{
    int n, m;                              //initialize row and column
    cin >> n >> m;                         // take size of row and column
    int arr1[n][m], arr2[n][m], res[n][m]; //initialize two array and result array
    // take input of array one
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    // take input of array two
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    // (Always Remember) first zero the value of result array so, not 
    //   add garbage value in the result (this can affect the result)
    // for(int i = 0; i < n; ++i)
    //     for(int j = 0; j < m; ++j)
    //     {
    //         res[i][j]=0;
    //     }
    // it's time to multiply
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                // res[i,j]=a[i,0]*b[0,j]+a[i,1]*b[1,j]+.......+a[i,n-1]*b[n-1,j]
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // output the result
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}