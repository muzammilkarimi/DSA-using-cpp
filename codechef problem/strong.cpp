#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,count=0;
        cin>>n>>k;
        string s;
// **ab**an***
        for(int i=0; i<n; i++){
            cin>>s[i];
            if(s[i]=='*'){
                count++;
            }
            else{
                count=0;
            }
        }
        if(count==k){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    return 0;
}