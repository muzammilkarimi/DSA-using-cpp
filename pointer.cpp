#include<bits/stdc++.h>
using namespace std;
// using pointer
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<":"<<*b<<endl;
}
// by pass by reference
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<":"<<b<<endl;
}
void increament(int &a){
    a+=5; 
    cout<<a<<endl;
}
int main(){
    int a=3;
    // int *p;
    // p=&a;
    int b=4;
    cout<<a<<":"<<b<<endl;
    swap(a,b);
    // increament(a);
    // cout<<a<<"o";
    return 0;
}