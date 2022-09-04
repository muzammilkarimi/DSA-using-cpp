#include<bits/stdc++.h>
using namespace std;
void sortarray(int arr[], int n){
    // for (int i = 0; i < n-1; i++)
    // {
    //     for(int j=i; j<n; j++){
    //         if(arr[i]>arr[j]) swap(arr[i],arr[j]);
    //     }
    // }
    
    // using recursion 

    // base case
    if(n>=1) return ;
    
}
int main(){
    int arr[5]={4,3,5,2,1};
    sortarray(arr,5);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}