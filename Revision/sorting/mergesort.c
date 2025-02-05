#include<stdio.h>
#include<stdlib.h>
void merge_arr(int a[],int s,int e){
    int mid=s+(e-s)/2,k=s,j=mid+1,i=s;
    int temp[100];
    while(i<=mid && j<=e){
        if(a[i]>a[j]){
            temp[k++]=a[j++];
        }
        else{
            temp[k++]=a[i++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    for(int i=0; i<k; i++){
        a[i]=temp[i];
    }


}
void merge(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    merge(a,s,mid);
    merge(a,mid+1,e);
    merge_arr(a,s,e);
}
int main(){
    int n;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n; i++){
        scanf("%d",&a[i]);
    }
    merge(a,0,n-1);
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

}