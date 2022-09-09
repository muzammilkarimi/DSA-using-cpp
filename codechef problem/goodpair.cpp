#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> frequency;
    for(int i=0; i<n; i++){
       cin>>arr[i];
       frequency[arr[i]]++;
    }
    int res=0;
    for(auto it:frequency){
        if(it.second>1){
            int t=it.second;
            res+=t*(t-1)/2;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}