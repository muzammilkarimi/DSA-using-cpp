#include<bits/stdc++.h>
using namespace std;
// arr[10]={1,2,3,3,3,3,3,3,3,5}
int firstocc(int arr[], int n, int key){
    int s=0, e=n-1, mid = s+(e-s)/2,ans=-1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2; 
    }
    return ans;
    
}
int lastocc(int arr[], int n, int key){
    int s=0, e=n-1, mid = s+(e-s)/2,ans;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            s=mid+1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2; 
    }
    return ans;
    
}
int main(){
    int arr[10]={1,2,3,3,3,3,3,3,3,5};
    cout<<"first occurrence of 3 at index: "<<firstocc(arr,10,3)<<endl;
    // cout<<"last occurrence of 3 at index: "<<lastocc(arr,10,3)<<endl;
    return 0;
}