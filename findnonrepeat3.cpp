#include<bits/stdc++.h>
using namespace std;
int findunique(unsigned int arr[], int n){
    int intsize=8*sizeof(unsigned int);
    int count[intsize];
    memset(count,0,sizeof(count));
    for(int i=0; i<intsize; i++){
        for(int j=0; j<n; j++){
            if((arr[j] & (1<<i))!=0){
                count[i]++;
            }

        }
    }
    unsigned res=0;
    for(int i=0; i<intsize; i++){
        res+=(count[i]%3) * (1<<i);
    }
    return res;

}

int main(){
    unsigned int arr[7]={1,3,3,2,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findunique(arr,n);
    


    return 0;
}