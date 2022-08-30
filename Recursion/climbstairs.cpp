#include<bits/stdc++.h>
using namespace std;
int countclimb(int n){
    // base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    // recursive call
    int ans=countclimb(n-1)+countclimb(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<countclimb(n);
    return 0;
}