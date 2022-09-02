#include<bits/stdc++.h>
using namespace std;
bool lsearch(int arr[], int s,int k){
    // base case
    if(s==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingpart=lsearch(arr+1,s-1,k);
        return remainingpart;
    }
    // recursive call
    bool ans;
    ans=lsearch(arr+1,s-1,k);
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<(lsearch(arr,5,-1)?"found":"not found");
    return 0;
}