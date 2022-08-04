#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    long long int ans=1;
    for(int i=1; i<=n; i++){
        ans*=i;

    }
    cout<<ans<<endl;
    int ans1=0;
    for(int i=5; i<=n; i=i*5){
        ans1+=n/i;
    }
    cout<<ans1;

    return 0;
}