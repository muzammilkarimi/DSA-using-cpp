#include<bits/stdc++.h>
using namespace std;
bool powerof2(int n){
    return (n and !(n & n-1));
}
int main(){
    cout<<powerof2(14);

    return 0;
}