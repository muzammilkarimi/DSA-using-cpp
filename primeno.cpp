#include<bits/stdc++.h>
using namespace std;
void isprime(int n){
    bool prime=true;
    if(n==0 || n==1){
        prime=false;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            prime=false;
        }
    }
    if(prime){
        cout<<n<<" ";
    }

}
int main(){
    for(int i=1; i<=12; i++){
        isprime(i);
    }

    return 0;
}