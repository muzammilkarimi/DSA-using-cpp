#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int s,int e, int k){
    //base case
    if(s>e) return false;
    int mid=s+(e-s)/2;
    //found case
    if(arr[mid]==k) return true;
    //Recursive call
    if(arr[mid]>k) return binarySearch(arr,s,mid-1,k);
    else return binarySearch(arr,mid+1,e,k);

}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<(binarySearch(arr,0,4,7)?"found":"not found")<<endl;
    return 0;
}