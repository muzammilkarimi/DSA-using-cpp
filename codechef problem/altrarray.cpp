#include<bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}
// problem is we have to print longest alter array alter means adjacent element
// is change one is positive then next is negative 
// if curr is + and next is -ve then ans++  
int main(){
    int t;
    cin>>t;
    while(t--){
        int arrsiz;
        cin>>arrsiz;
        int arr[arrsiz];
        for(int i=0; i<arrsiz; i++){
            cin>>arr[i];
        }
        int ans[arrsiz] = {0};
        ans[arrsiz-1] = 1;
        int i = arrsiz-2;
        while (i>=0)
        {
            if((arr[i]>0 and arr[i+1]<0) or (arr[i]<0 and arr[i+1]>0)){
                ans[i] = ans[i+1]+1;
                // cout<<ans[i]<<endl;
            }
            else{
                ans[i]=1;
            }
            i--;
        }
        
        printarr(ans,arrsiz);
    }
    return 0;
}