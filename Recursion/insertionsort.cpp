#include<bits/stdc++.h>
using namespace std;
void sortarray(int *arr, int n){
    // 5,3,2,1,4
    // int curr,j;
    // for(int i=1; i<n; i++){
    //     curr=arr[i];
    //     j=i-1; 
    //     while (j>=0 and arr[j]>curr)
    //     {
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]=curr;
        
    // }

    // using recursion 
    // base case
    if(n<=1) return ;

    sortarray(arr,n-1);
    // solve one case

    int last = arr[n-1];
    int j=n-2;
    while(j>=0 and arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;

    // recursive call

}
int main(){
    int arr[5]={5,4,3,2,1};
    sortarray(arr,5);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}