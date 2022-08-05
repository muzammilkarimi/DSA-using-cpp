#include<bits/stdc++.h>
using namespace std;
int findpeak(int arr[],int n){
    int s=0 , e=n-1 ;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[s];

}
int main(){
    int arr[5]={1,2,3,5,4};
    cout<<findpeak(arr,5);

    return 0;
}