#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++) cin>>arr[i];
        int s=1, e=n,number=1;
        bool ans = true;
        while(number<=6){
            if(arr[s]!=number or arr[e]!=number){
                ans=false;
                break;
            }
            int r1=0,r2=0;
            while(s<=n and arr[s]==number) s++,r1++;
            while(e>0 and arr[e]==number) e--,r2++;
            if(r1!=r2){
                ans=0;
                break;
            }
            number++;
        }
        if(number==7 and s<=e){
            number++;
            for(int i=s; i<=e; i++){
                if(arr[i]!=7){
                    ans=false;
                }
            }
        }
        else ans=0;
        cout<<(ans?"yes":"no");
    }
    return 0;
}