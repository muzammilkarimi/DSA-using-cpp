#include<bits/stdc++.h>
using namespace std;
bool issorted(int *arr,int size){
    //base case
    if(size<=1){
        return true;
    }
    // recursive call 
    if(arr[0]>arr[1]) return false;
    else{
        bool ans=issorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<issorted(arr,5);
    return 0;
}