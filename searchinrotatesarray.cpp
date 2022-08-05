#include <bits/stdc++.h>
using namespace std;
int getpivot(int arr[],int n){
    int s=0, e=n-1, mid = s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else e=mid;
        mid=s+(e-s)/2;
    }
    return s;
    
}
int binarysearch(int arr[],int s, int e,int n,int key){
    int mid = s+(e-s)/2,ans=-1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            break;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else e=mid-1;
        mid = s+(e-s)/2;
    }
    return ans;  
}
int findkey(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int p = getpivot(arr,n);

    // cout << mid << endl;
    if(arr[s]<=key and key<=arr[p-1]){
       return binarysearch(arr,s,p-1,s-p,key);
    }
    else{
        return binarysearch(arr,p,e,n-p,key);
    }

}
int main()
{
    int arr[5] = {9, 10, 1, 2, 3};
    cout << findkey(arr, 5, 2);
    return 0;
}