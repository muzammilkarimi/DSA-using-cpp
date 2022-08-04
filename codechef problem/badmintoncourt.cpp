#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,mx,mn,ans=INT_MAX;
        cin>>x>>y;
        mx=max(x,y);
        mn=min(x,y);
        for(int i=mn; i<=mx; i++){
            ans=min(ans,(max(i-mn,mx-i)));
        }
        cout<<ans<<endl;
        

    }
    return 0;
}