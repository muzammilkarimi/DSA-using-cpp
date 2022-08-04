#include <iostream>
using namespace std;
int main()
{
    int n, m,k;
    cin >> k;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "matrix is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    bool flag=false;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(arr[i][j]==k){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"element is not found";
    }

    return 0;
}