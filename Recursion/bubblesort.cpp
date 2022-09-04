#include<bits/stdc++.h>
using namespace std;
void sortarray(int arr[],int n){
    // base case
    if(n==1 or n==0) return ;

    // solve one case 
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // recursive call

    sortarray(arr,n-1);
}
int main(){
    int arr[5]={5,4,3,2,1};
    sortarray(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}