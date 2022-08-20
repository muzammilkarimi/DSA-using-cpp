#include<bits/stdc++.h>
using namespace std;
int square(int n, int p){
    int res=1;
    while(p>0){
        if(p&1){
            res=res*n;
        }
        n=n*n;
        p=p>>1; // 101 -> 010 -> 001 it is p/2
    }
    return res;
}
int main(){
    int n=2;
    int p=5;
    cout<<square(2,5);
    return 0;
}