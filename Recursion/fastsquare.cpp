#include<bits/stdc++.h>
using namespace std;
int fastpower(int a,int b){
    // int res=1;
    // while (b>0)
    // {
    //     if(b&1) res=res*a;
    //     a=a*a;
    //     b=b>>1;
    // }
    // return res;

    // base case 
    if(b==0) return 1;
    if(b==1) return a;
    // Recursive call
    int ans=fastpower(a,b/2);
    // processing
    if(b&1) return ans*ans*a;
    else return ans*ans;
}
int main(){
    int a=2,b=4;
    cout<<fastpower(a,b);
    return 0;
}