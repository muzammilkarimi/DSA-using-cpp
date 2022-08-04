#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        float k1,k2,k3,sp,temp,ans,rans;
        cin>>k1>>k2>>k3>>sp;
        temp=k1*k2*k3*sp;
        // cout<<temp<<endl;
        ans=100/temp;
        // cout<<ans<<endl;
        rans=roundf(ans*100)/100;
        cout<<rans<<endl;
        if(rans<9.58){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        


    }
    return 0;
}