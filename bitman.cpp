#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int pos){
    return (n>>pos) & 1;
}
int setbit(int n, int pos){
    //left shift 1
    //then use OR
    return (n | (1<<pos));
}
int clearbit(int n, int p){
    return ((~(1<<p)) & n);
}
int togglebit(int n, int p){
    return ((1<<p) ^ n);
}
int main(){
    // cout<<getbit(1,2)<<endl;//get bit 
    // cout<<setbit(5,1)<<endl;
    // cout<<clearbit(5,2)<<endl;
    // cout<<togglebit(5,1)<<endl;
    // 0101 0100  0011 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=n; k++){
            cout<<"* ";
        }cout<<endl;
    }


    
    return 0;
}