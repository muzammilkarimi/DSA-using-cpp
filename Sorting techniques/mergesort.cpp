#include<bits/stdc++.h>
using namespace std;
void mergearr(int *arr, int s, int e){
    int mid = (s+e)/2, i=s, j=mid+1, k=s;
    int temp[100];
    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=e)
    temp[k++]=arr[j++];

    for(int i=s; i<=e; i++){
        arr[i]=temp[i];
    }
    

}
void mergesort(int *arr,int s, int e){
    // base case
    if(s>=e){
        return;
    }
    // left part
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    // right part
    mergesort(arr,mid+1,e);

    // merge the two parts
    mergearr(arr,s,e);
}
int main(){
    int arr[6]={3,5,4,1,2,6};
    int n=6;
    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}