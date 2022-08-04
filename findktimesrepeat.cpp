#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5,k=3,ans=0;
    int arr[n]={5,2,2,5,5};
    for(int i=0; i<n; i++){
            int curr=0;
        for(int j=i; j<n; j++){
            if(arr[i]==arr[j]){
                curr++;
                // cout<<curr<<" ";
                if(curr==k){
                    ans=arr[i];
                    break;
                }
            }
        }
    }

    if(ans==0){
        cout<<-1;
    }
    else{
        cout<<ans;
    }
    return 0;
}

// 1,4,3,5,4,2,3,4,