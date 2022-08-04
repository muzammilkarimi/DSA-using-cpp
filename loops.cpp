#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // --------for loop-------
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentsumarr[n + 1];
    currentsumarr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currentsumarr[i] = currentsumarr[i - 1] + arr[i - 1];
    }
    int maxsum = INT_MIN; 
    for (int i=1; i<=n; i++){
        int sum = 0; 
        for (int j=1; j<i; j++){
            sum = currentsumarr[i] - currentsumarr[j]; 
            maxsum = max(maxsum, sum);


        }
    }
    cout<<maxsum; 

    return 0;
}