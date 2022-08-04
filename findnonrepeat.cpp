#include<bits/stdc++.h>
using namespace std;
void unique(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum^=arr[i];
    }
    cout<<xorsum;
}
int main(){
    int arr[5]={1,3,3,2,1};
    unique(arr,5);


    return 0;

}