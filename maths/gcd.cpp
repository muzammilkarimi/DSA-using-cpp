#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2){
    // base case
    if(n2==0) return n1;
    return gcd(n2,n1%n2);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    // int ans=gcd(n1,n2);
    int ans=__gcd(n1,n2);
    int lcm=(n1*n2)/ans;
    cout<<"gcd= "<<ans<<endl;
    cout<<"lcm= "<<lcm<<endl;
    return 0;
}