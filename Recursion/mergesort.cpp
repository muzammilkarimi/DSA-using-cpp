#include<bits/stdc++.h>
using namespace std;
void mergetwosortedarray(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first= new int[len1];
    int *second= new int[len2];
    
    // copy left side values in first array
    int mainarrayindex=s;
    for(int i=0; i<len1; i++){
        first[i]=arr[mainarrayindex++];
    }
    // copy right side values in second array
    mainarrayindex=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[mainarrayindex++];
    }

    // it's time to merge two sorted array
    int index1=0;
    int index2=0;
    mainarrayindex=s;
    while(index1<len1 and index2<len2){
        if(first[index1]<second[index2]) arr[mainarrayindex++]=first[index1++];
        else arr[mainarrayindex++]=second[index2++];
    }
    // if first array len is bigger then second array
    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    // if second array len is bigger then first array
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }

    delete []first;
    delete []second;


}
void mergesort(int arr[],int s,int e){
    
    // base case
    if(s>=e) return;

    int mid=(s+e)/2;

    // left side sort
    mergesort(arr,s,mid);

    // right side sort
    mergesort(arr,mid+1,e);

    // merge two sorted array
    mergetwosortedarray(arr,s,e);

}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}