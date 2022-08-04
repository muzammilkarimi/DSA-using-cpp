#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=0; j<d/2; j++){
        swap(arr[j],arr[d-j-1]);
    }
    int h=n-d;
    int t=0;
    for(int k=d; k<d+h/2; k++){
        swap(arr[k],arr[n-t-1]);
        t++;
    }
    for(int l=0; l<n/2; l++){
        swap(arr[l],arr[n-l-1]);
    }
    for(int m=0; m<n; m++){
        cout<<arr[m]<<" ";
    }

    return 0;
}