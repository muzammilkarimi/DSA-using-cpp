#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2){
    //base case
    if(n2==0) return n1;
    return gcd(n2,n1%n2);
}
int main(){
    int n1,n2;
    n1=12,n2=24;
    int ans = (n1*n2)/gcd(n1,n2);
    // int ans = lcm(10, 20);
    cout<<ans;
    return 0;
}