#include<bits/stdc++.h>
using namespace std;
int minjumps(int arr[],int n){
    int maxreach=arr[0], stepspossible=arr[0], jumps=1;
    if(n==1) return 0;
    if(arr[0]==0) return -1;
    for(int i=1; i<n;i++){
        if(i==n-1) return jumps;
        maxreach = max(maxreach, i+arr[i]);
        stepspossible--;
        if(stepspossible==0){
            jumps++;
            if(i>=maxreach) return -1;
            stepspossible=maxreach-i;
        }
    }
    return 0;

}
int main(){
    int arr[10]={1,3,2,8,9,5,6,7,9,2};
    cout<<minjumps(arr,10);

    return 0;
}