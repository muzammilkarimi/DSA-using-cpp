#include<bits/stdc++.h>
using namespace std;
void unique(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum^=arr[i];
    }
    int mask=xorsum & -xorsum;
    int x=0;
    int y=0;
    for(int i=0; i<n; i++){
        if(mask & arr[i]){
            x^=arr[i];
        }
        else{
            y^=arr[i];
        }
    }
    cout<<x<<endl<<y;


}
int main(){
    int arr[6]={1,4,3,3,2,1};
    unique(arr,6);


    return 0;

}