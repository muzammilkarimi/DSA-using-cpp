#include<bits/stdc++.h>
using namespace std;
int getsum(int arr[], int s){
    //base case
    if(s==1){
        return arr[0];
    }
    if(s==0){
        return 0;
    }
    // Recursive call 
    int ans=arr[0]+getsum(arr+1,s-1);
    return ans;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<getsum(arr,5);
    return 0;
}