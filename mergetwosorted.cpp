#include<bits/stdc++.h>
using namespace std;
void mergesort(int arr1[],int n,int arr2[],int m,int res[]){
    int index1=0; 
    int index2=0;
    int resarrayindex=0;
    while(index1<n and index2<m){
        if(arr1[index1]<arr2[index2]) res[resarrayindex++]=arr1[index1++];
        else res[resarrayindex++]=arr2[index2++];
    }
    // if arr1 is bigger then arr2 
    while(index1<n){
        res[resarrayindex++]=arr1[index1++];
    }
    // if arr2 is bigger then arr1
    while(index2<m){
        res[resarrayindex++]=arr2[index2++];
    }

}
vector<int> mergesortwithoutnew(vector<int> arr1,int n,vector<int> arr2,int m){
    int index1=n-1,index2=m-1,mainarrayindex=m+n-1;
    
}
int main(){
    vector<int> arr1[5]={1,3,5,7,9};
    vectot<int> arr2[8]={2,4,6,8,10,11,14,16};
    vector<int> res=mergesortwithoutnew(arr1,5,arr2,8);
    // mergesort(arr1,5,arr2,8,res);
    // merge(arr1,arr1+5,arr2,arr2+8,res);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}