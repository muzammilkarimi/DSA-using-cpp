#include<stdio.h>
int f(int n, int *fprev){
    int f_1,f_2;
    if(n==0){
        *fprev=1;
        return 0;
    }
    if(n==1){
        *fprev=0;
        return 1;
    }
    f_1=f(n-1,&f_2);
    *fprev=f_1;
    return f_1+f_2;
}
void main(){
    // int fprev;
    // printf("%d",f(3,&fprev));
    // int x=10;
    // printf("%*d",x,x);
    int i= printf("hii");
    printf("%d",sizeof i);
}
