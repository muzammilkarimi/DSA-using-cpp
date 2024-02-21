#include <stdio.h>
    // static int a;
    // a=10;
int func(int n,int sum){
    int k=0,j=0;
    if(n==0)
        return sum;
    else
    {
        k=n%10;
        j=n/10;
        sum=sum+k;
        func(j,sum);
        printf("%d",k);
        
    }
}
void main()
{
    int a=2018,sum=0;
    func(a,sum);
    printf("%d",sum);
    // static int a;
    // int b = func(10);
    // int c = func(10);
    // printf("%d %d",b,c);

    // int a=10,b=5;
    // printf("%d %d",a,b);
    // b=a+b-(a=b);
    // printf("%d %d",a,b);

}